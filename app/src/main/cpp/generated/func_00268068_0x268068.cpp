#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_00268068
// Address: 0x268068 - 0x268408
void func_00268068_0x268068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00268068_0x268068");
#endif

    switch (ctx->pc) {
        case 0x2680e4u: goto label_2680e4;
        case 0x268154u: goto label_268154;
        case 0x268188u: goto label_268188;
        case 0x26823cu: goto label_26823c;
        case 0x2682a8u: goto label_2682a8;
        case 0x2682f0u: goto label_2682f0;
        case 0x268310u: goto label_268310;
        case 0x268344u: goto label_268344;
        default: break;
    }

    ctx->pc = 0x268068u;

    // 0x268068: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x268068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26806c: 0x2402026a  addiu       $v0, $zero, 0x26A
    ctx->pc = 0x26806cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
    // 0x268070: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x268070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x268074: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x268074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x268078: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x268078u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26807c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26807cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x268080: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x268080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x268084: 0x506200da  beql        $v1, $v0, . + 4 + (0xDA << 2)
    ctx->pc = 0x268084u;
    {
        const bool branch_taken_0x268084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x268084) {
            ctx->pc = 0x268088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268084u;
            // 0x268088: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2683F0u;
            goto label_2683f0;
        }
    }
    ctx->pc = 0x26808Cu;
    // 0x26808c: 0x54a0000b  bnel        $a1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x26808Cu;
    {
        const bool branch_taken_0x26808c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x26808c) {
            ctx->pc = 0x268090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26808Cu;
            // 0x268090: 0x8e0216d0  lw          $v0, 0x16D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2680BCu;
            goto label_2680bc;
        }
    }
    ctx->pc = 0x268094u;
    // 0x268094: 0xc6010760  lwc1        $f1, 0x760($s0)
    ctx->pc = 0x268094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268098: 0x3c013fa7  lui         $at, 0x3FA7
    ctx->pc = 0x268098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16295 << 16));
    // 0x26809c: 0x34218d36  ori         $at, $at, 0x8D36
    ctx->pc = 0x26809cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36150);
    // 0x2680a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2680a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2680a4: 0x0  nop
    ctx->pc = 0x2680a4u;
    // NOP
    // 0x2680a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2680a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2680ac: 0x0  nop
    ctx->pc = 0x2680acu;
    // NOP
    // 0x2680b0: 0x450100cf  bc1t        . + 4 + (0xCF << 2)
    ctx->pc = 0x2680B0u;
    {
        const bool branch_taken_0x2680b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2680B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2680B0u;
        // 0x2680b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2680b0) {
            ctx->pc = 0x2683F0u;
            goto label_2683f0;
        }
    }
    ctx->pc = 0x2680B8u;
    // 0x2680b8: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x2680b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
label_2680bc:
    // 0x2680bc: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x2680bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x2680c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2680c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2680c4: 0x104000c9  beqz        $v0, . + 4 + (0xC9 << 2)
    ctx->pc = 0x2680C4u;
    {
        const bool branch_taken_0x2680c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2680C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2680C4u;
        // 0x2680c8: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2680c4) {
            ctx->pc = 0x2683ECu;
            goto label_2683ec;
        }
    }
    ctx->pc = 0x2680CCu;
    // 0x2680cc: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x2680ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x2680d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2680d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2680d4: 0x104000c5  beqz        $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x2680D4u;
    {
        const bool branch_taken_0x2680d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2680D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2680D4u;
        // 0x2680d8: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2680d4) {
            ctx->pc = 0x2683ECu;
            goto label_2683ec;
        }
    }
    ctx->pc = 0x2680DCu;
    // 0x2680dc: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2680DCu;
    SET_GPR_U32(ctx, 31, 0x2680E4u);
    ctx->pc = 0x2680E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2680DCu;
    // 0x2680e0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2680DCu, 0x2680E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2680E4u;
label_2680e4:
    // 0x2680e4: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x2680e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2680e8: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x2680E8u;
    {
        const bool branch_taken_0x2680e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2680ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2680E8u;
        // 0x2680ec: 0x24020264  addiu       $v0, $zero, 0x264 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2680e8) {
            ctx->pc = 0x268268u;
            goto label_268268;
        }
    }
    ctx->pc = 0x2680F0u;
    // 0x2680f0: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x2680f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x2680f4: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2680F4u;
    {
        const bool branch_taken_0x2680f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2680F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2680F4u;
        // 0x2680f8: 0x28620265  slti        $v0, $v1, 0x265 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)613) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2680f4) {
            ctx->pc = 0x26819Cu;
            goto label_26819c;
        }
    }
    ctx->pc = 0x2680FCu;
    // 0x2680fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2680FCu;
    {
        const bool branch_taken_0x2680fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2680FCu;
        // 0x268100: 0x28620223  slti        $v0, $v1, 0x223 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)547) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2680fc) {
            ctx->pc = 0x26811Cu;
            goto label_26811c;
        }
    }
    ctx->pc = 0x268104u;
    // 0x268104: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x268104u;
    {
        const bool branch_taken_0x268104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268104u;
        // 0x268108: 0x28620220  slti        $v0, $v1, 0x220 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)544) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268104) {
            ctx->pc = 0x268128u;
            goto label_268128;
        }
    }
    ctx->pc = 0x26810Cu;
    // 0x26810c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x26810Cu;
    {
        const bool branch_taken_0x26810c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26810c) {
            ctx->pc = 0x268110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26810Cu;
            // 0x268110: 0xc6010760  lwc1        $f1, 0x760($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26812Cu;
            goto label_26812c;
        }
    }
    ctx->pc = 0x268114u;
    // 0x268114: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x268114u;
    {
        const bool branch_taken_0x268114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268114) {
            ctx->pc = 0x268180u;
            goto label_268180;
        }
    }
    ctx->pc = 0x26811Cu;
label_26811c:
    // 0x26811c: 0x24020265  addiu       $v0, $zero, 0x265
    ctx->pc = 0x26811cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 613));
    // 0x268120: 0x50620037  beql        $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x268120u;
    {
        const bool branch_taken_0x268120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x268120) {
            ctx->pc = 0x268124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268120u;
            // 0x268124: 0x8e0216d4  lw          $v0, 0x16D4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268200u;
            goto label_268200;
        }
    }
    ctx->pc = 0x268128u;
label_268128:
    // 0x268128: 0xc6010760  lwc1        $f1, 0x760($s0)
    ctx->pc = 0x268128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26812c:
    // 0x26812c: 0x3c013fa7  lui         $at, 0x3FA7
    ctx->pc = 0x26812cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16295 << 16));
    // 0x268130: 0x34218d36  ori         $at, $at, 0x8D36
    ctx->pc = 0x268130u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36150);
    // 0x268134: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x268134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268138: 0x0  nop
    ctx->pc = 0x268138u;
    // NOP
    // 0x26813c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x26813cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268140: 0x0  nop
    ctx->pc = 0x268140u;
    // NOP
    // 0x268144: 0x45020049  bc1fl       . + 4 + (0x49 << 2)
    ctx->pc = 0x268144u;
    {
        const bool branch_taken_0x268144 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x268144) {
            ctx->pc = 0x268148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268144u;
            // 0x268148: 0x920317b9  lbu         $v1, 0x17B9($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6073)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26826Cu;
            goto label_26826c;
        }
    }
    ctx->pc = 0x26814Cu;
    // 0x26814c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x26814Cu;
    SET_GPR_U32(ctx, 31, 0x268154u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x26814Cu, 0x268154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268154u;
label_268154:
    // 0x268154: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x268154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x268158: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x268158u;
    {
        const bool branch_taken_0x268158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268158u;
        // 0x26815c: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268158) {
            ctx->pc = 0x268268u;
            goto label_268268;
        }
    }
    ctx->pc = 0x268160u;
    // 0x268160: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x268160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x268164: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x268164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x268168: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x268168u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x26816c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x26816cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x268170: 0xa20402f7  sb          $a0, 0x2F7($s0)
    ctx->pc = 0x268170u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 4));
    // 0x268174: 0xae0216d4  sw          $v0, 0x16D4($s0)
    ctx->pc = 0x268174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 2));
    // 0x268178: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x268178u;
    {
        const bool branch_taken_0x268178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268178u;
        // 0x26817c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268178) {
            ctx->pc = 0x2683E0u;
            goto label_2683e0;
        }
    }
    ctx->pc = 0x268180u;
label_268180:
    // 0x268180: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x268180u;
    SET_GPR_U32(ctx, 31, 0x268188u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x268180u, 0x268188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268188u;
label_268188:
    // 0x268188: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x268188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26818c: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x26818Cu;
    {
        const bool branch_taken_0x26818c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26818Cu;
        // 0x268190: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26818c) {
            ctx->pc = 0x268268u;
            goto label_268268;
        }
    }
    ctx->pc = 0x268194u;
    // 0x268194: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x268194u;
    {
        const bool branch_taken_0x268194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268194u;
        // 0x268198: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268194) {
            ctx->pc = 0x2683F4u;
            goto label_2683f4;
        }
    }
    ctx->pc = 0x26819Cu;
label_26819c:
    // 0x26819c: 0xc6010760  lwc1        $f1, 0x760($s0)
    ctx->pc = 0x26819cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2681a0: 0x3c013fa7  lui         $at, 0x3FA7
    ctx->pc = 0x2681a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16295 << 16));
    // 0x2681a4: 0x34218d36  ori         $at, $at, 0x8D36
    ctx->pc = 0x2681a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36150);
    // 0x2681a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2681a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2681ac: 0x0  nop
    ctx->pc = 0x2681acu;
    // NOP
    // 0x2681b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2681b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2681b4: 0x0  nop
    ctx->pc = 0x2681b4u;
    // NOP
    // 0x2681b8: 0x4502002c  bc1fl       . + 4 + (0x2C << 2)
    ctx->pc = 0x2681B8u;
    {
        const bool branch_taken_0x2681b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2681b8) {
            ctx->pc = 0x2681BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2681B8u;
            // 0x2681bc: 0x920317b9  lbu         $v1, 0x17B9($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6073)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26826Cu;
            goto label_26826c;
        }
    }
    ctx->pc = 0x2681C0u;
    // 0x2681c0: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x2681c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2681c4: 0x3c014244  lui         $at, 0x4244
    ctx->pc = 0x2681c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16964 << 16));
    // 0x2681c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2681c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2681cc: 0x0  nop
    ctx->pc = 0x2681ccu;
    // NOP
    // 0x2681d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2681d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2681d4: 0x0  nop
    ctx->pc = 0x2681d4u;
    // NOP
    // 0x2681d8: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x2681D8u;
    {
        const bool branch_taken_0x2681d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2681DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2681D8u;
        // 0x2681dc: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2681d8) {
            ctx->pc = 0x268268u;
            goto label_268268;
        }
    }
    ctx->pc = 0x2681E0u;
    // 0x2681e0: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x2681e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x2681e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2681e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2681e8: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x2681e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x2681ec: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2681ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2681f0: 0xa20402f7  sb          $a0, 0x2F7($s0)
    ctx->pc = 0x2681f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 4));
    // 0x2681f4: 0xae0216d4  sw          $v0, 0x16D4($s0)
    ctx->pc = 0x2681f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 2));
    // 0x2681f8: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x2681F8u;
    {
        const bool branch_taken_0x2681f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2681FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2681F8u;
        // 0x2681fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2681f8) {
            ctx->pc = 0x2683E0u;
            goto label_2683e0;
        }
    }
    ctx->pc = 0x268200u;
label_268200:
    // 0x268200: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x268200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x268204: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x268204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x268208: 0x14400079  bnez        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x268208u;
    {
        const bool branch_taken_0x268208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268208u;
        // 0x26820c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268208) {
            ctx->pc = 0x2683F0u;
            goto label_2683f0;
        }
    }
    ctx->pc = 0x268210u;
    // 0x268210: 0xc6010760  lwc1        $f1, 0x760($s0)
    ctx->pc = 0x268210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268214: 0x3c013fa7  lui         $at, 0x3FA7
    ctx->pc = 0x268214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16295 << 16));
    // 0x268218: 0x34218d36  ori         $at, $at, 0x8D36
    ctx->pc = 0x268218u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36150);
    // 0x26821c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26821cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268220: 0x0  nop
    ctx->pc = 0x268220u;
    // NOP
    // 0x268224: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x268224u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268228: 0x0  nop
    ctx->pc = 0x268228u;
    // NOP
    // 0x26822c: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x26822Cu;
    {
        const bool branch_taken_0x26822c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26822c) {
            ctx->pc = 0x268230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26822Cu;
            // 0x268230: 0x920317b9  lbu         $v1, 0x17B9($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6073)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26826Cu;
            goto label_26826c;
        }
    }
    ctx->pc = 0x268234u;
    // 0x268234: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x268234u;
    SET_GPR_U32(ctx, 31, 0x26823Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x268234u, 0x26823Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26823Cu;
label_26823c:
    // 0x26823c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26823cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x268240: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x268240u;
    {
        const bool branch_taken_0x268240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268240u;
        // 0x268244: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268240) {
            ctx->pc = 0x268268u;
            goto label_268268;
        }
    }
    ctx->pc = 0x268248u;
    // 0x268248: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x268248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x26824c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26824cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x268250: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x268250u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x268254: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x268254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x268258: 0xa20402f7  sb          $a0, 0x2F7($s0)
    ctx->pc = 0x268258u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 4));
    // 0x26825c: 0xae0216d4  sw          $v0, 0x16D4($s0)
    ctx->pc = 0x26825cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 2));
    // 0x268260: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x268260u;
    {
        const bool branch_taken_0x268260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268260u;
        // 0x268264: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268260) {
            ctx->pc = 0x2683E0u;
            goto label_2683e0;
        }
    }
    ctx->pc = 0x268268u;
label_268268:
    // 0x268268: 0x920317b9  lbu         $v1, 0x17B9($s0)
    ctx->pc = 0x268268u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6073)));
label_26826c:
    // 0x26826c: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x26826cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x268270: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x268270u;
    {
        const bool branch_taken_0x268270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268270u;
        // 0x268274: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268270) {
            ctx->pc = 0x268328u;
            goto label_268328;
        }
    }
    ctx->pc = 0x268278u;
    // 0x268278: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x268278u;
    {
        const bool branch_taken_0x268278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268278) {
            ctx->pc = 0x26827Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268278u;
            // 0x26827c: 0x8e040564  lw          $a0, 0x564($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26832Cu;
            goto label_26832c;
        }
    }
    ctx->pc = 0x268280u;
    // 0x268280: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x268280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268284: 0x3c0140c8  lui         $at, 0x40C8
    ctx->pc = 0x268284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16584 << 16));
    // 0x268288: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x268288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26828c: 0x0  nop
    ctx->pc = 0x26828cu;
    // NOP
    // 0x268290: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x268290u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268294: 0x0  nop
    ctx->pc = 0x268294u;
    // NOP
    // 0x268298: 0x45020024  bc1fl       . + 4 + (0x24 << 2)
    ctx->pc = 0x268298u;
    {
        const bool branch_taken_0x268298 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x268298) {
            ctx->pc = 0x26829Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268298u;
            // 0x26829c: 0x8e040564  lw          $a0, 0x564($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26832Cu;
            goto label_26832c;
        }
    }
    ctx->pc = 0x2682A0u;
    // 0x2682a0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2682A0u;
    SET_GPR_U32(ctx, 31, 0x2682A8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2682A0u, 0x2682A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2682A8u;
label_2682a8:
    // 0x2682a8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2682a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2682ac: 0x8e040564  lw          $a0, 0x564($s0)
    ctx->pc = 0x2682acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x2682b0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2682b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2682b4: 0x24030256  addiu       $v1, $zero, 0x256
    ctx->pc = 0x2682b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
    // 0x2682b8: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2682B8u;
    {
        const bool branch_taken_0x2682b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2682BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2682B8u;
        // 0x2682bc: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2682b8) {
            ctx->pc = 0x2682E8u;
            goto label_2682e8;
        }
    }
    ctx->pc = 0x2682C0u;
    // 0x2682c0: 0x28820257  slti        $v0, $a0, 0x257
    ctx->pc = 0x2682c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)599) ? 1 : 0);
    // 0x2682c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2682C4u;
    {
        const bool branch_taken_0x2682c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2682C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2682C4u;
        // 0x2682c8: 0x24020252  addiu       $v0, $zero, 0x252 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 594));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2682c4) {
            ctx->pc = 0x2682DCu;
            goto label_2682dc;
        }
    }
    ctx->pc = 0x2682CCu;
    // 0x2682cc: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2682CCu;
    {
        const bool branch_taken_0x2682cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2682cc) {
            ctx->pc = 0x2682E8u;
            goto label_2682e8;
        }
    }
    ctx->pc = 0x2682D4u;
    // 0x2682d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2682D4u;
    {
        const bool branch_taken_0x2682d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2682d4) {
            ctx->pc = 0x268300u;
            goto label_268300;
        }
    }
    ctx->pc = 0x2682DCu;
label_2682dc:
    // 0x2682dc: 0x2402027e  addiu       $v0, $zero, 0x27E
    ctx->pc = 0x2682dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 638));
    // 0x2682e0: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2682E0u;
    {
        const bool branch_taken_0x2682e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2682e0) {
            ctx->pc = 0x268300u;
            goto label_268300;
        }
    }
    ctx->pc = 0x2682E8u;
label_2682e8:
    // 0x2682e8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2682E8u;
    SET_GPR_U32(ctx, 31, 0x2682F0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2682E8u, 0x2682F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2682F0u;
label_2682f0:
    // 0x2682f0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2682f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2682f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2682f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2682f8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2682f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2682fc: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x2682fcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_268300:
    // 0x268300: 0x5220000a  beql        $s1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x268300u;
    {
        const bool branch_taken_0x268300 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x268300) {
            ctx->pc = 0x268304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268300u;
            // 0x268304: 0x8e040564  lw          $a0, 0x564($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26832Cu;
            goto label_26832c;
        }
    }
    ctx->pc = 0x268308u;
    // 0x268308: 0xc09cf0e  jal         func_273C38
    ctx->pc = 0x268308u;
    SET_GPR_U32(ctx, 31, 0x268310u);
    ctx->pc = 0x26830Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268308u;
    // 0x26830c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273C38u, 0x268308u, 0x268310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268310u;
label_268310:
    // 0x268310: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x268310u;
    {
        const bool branch_taken_0x268310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268310u;
        // 0x268314: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268310) {
            ctx->pc = 0x268328u;
            goto label_268328;
        }
    }
    ctx->pc = 0x268318u;
    // 0x268318: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x268318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x26831c: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x26831cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x268320: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x268320u;
    {
        const bool branch_taken_0x268320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268320u;
        // 0x268324: 0xa20302f5  sb          $v1, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268320) {
            ctx->pc = 0x2683E0u;
            goto label_2683e0;
        }
    }
    ctx->pc = 0x268328u;
label_268328:
    // 0x268328: 0x8e040564  lw          $a0, 0x564($s0)
    ctx->pc = 0x268328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
label_26832c:
    // 0x26832c: 0x24020264  addiu       $v0, $zero, 0x264
    ctx->pc = 0x26832cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
    // 0x268330: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x268330u;
    {
        const bool branch_taken_0x268330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x268330) {
            ctx->pc = 0x268360u;
            goto label_268360;
        }
    }
    ctx->pc = 0x268338u;
    // 0x268338: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x268338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26833c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x26833cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x268340: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x268340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_268344:
    // 0x268344: 0x0  nop
    ctx->pc = 0x268344u;
    // NOP
    // 0x268348: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x268348u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26834c: 0x0  nop
    ctx->pc = 0x26834cu;
    // NOP
    // 0x268350: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x268350u;
    {
        const bool branch_taken_0x268350 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x268354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268350u;
        // 0x268354: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268350) {
            ctx->pc = 0x268370u;
            goto label_268370;
        }
    }
    ctx->pc = 0x268358u;
    // 0x268358: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x268358u;
    {
        const bool branch_taken_0x268358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26835Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268358u;
        // 0x26835c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268358) {
            ctx->pc = 0x2683F4u;
            goto label_2683f4;
        }
    }
    ctx->pc = 0x268360u;
label_268360:
    // 0x268360: 0x3c014244  lui         $at, 0x4244
    ctx->pc = 0x268360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16964 << 16));
    // 0x268364: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x268364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268368: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x268368u;
    {
        const bool branch_taken_0x268368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268368u;
        // 0x26836c: 0xc6010618  lwc1        $f1, 0x618($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x268368) {
            ctx->pc = 0x268344u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_268344;
        }
    }
    ctx->pc = 0x268370u;
label_268370:
    // 0x268370: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x268370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x268374: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x268374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x268378: 0x34420380  ori         $v0, $v0, 0x380
    ctx->pc = 0x268378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)896);
    // 0x26837c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x26837cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x268380: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x268380u;
    {
        const bool branch_taken_0x268380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x268384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268380u;
        // 0x268384: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268380) {
            ctx->pc = 0x2683F0u;
            goto label_2683f0;
        }
    }
    ctx->pc = 0x268388u;
    // 0x268388: 0x2483fdf7  addiu       $v1, $a0, -0x209
    ctx->pc = 0x268388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966775));
    // 0x26838c: 0x2c620076  sltiu       $v0, $v1, 0x76
    ctx->pc = 0x26838cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)118) ? 1 : 0);
    // 0x268390: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x268390u;
    {
        const bool branch_taken_0x268390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268390u;
        // 0x268394: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268390) {
            ctx->pc = 0x2683ECu;
            goto label_2683ec;
        }
    }
    ctx->pc = 0x268398u;
    // 0x268398: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x268398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26839c: 0x24424e20  addiu       $v0, $v0, 0x4E20
    ctx->pc = 0x26839cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20000));
    // 0x2683a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2683a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2683a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2683a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2683a8: 0x800008  jr          $a0
    ctx->pc = 0x2683A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2683B0u: goto label_2683b0;
            case 0x2683C4u: goto label_2683c4;
            case 0x2683ECu: goto label_2683ec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2683A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2683B0u;
label_2683b0:
    // 0x2683b0: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x2683b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x2683b4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2683b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2683b8: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x2683b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2683bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2683BCu;
    {
        const bool branch_taken_0x2683bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2683C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2683BCu;
        // 0x2683c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2683bc) {
            ctx->pc = 0x2683E0u;
            goto label_2683e0;
        }
    }
    ctx->pc = 0x2683C4u;
label_2683c4:
    // 0x2683c4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2683c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2683c8: 0x2403ff96  addiu       $v1, $zero, -0x6A
    ctx->pc = 0x2683c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967190));
    // 0x2683cc: 0xa0436a31  sb          $v1, 0x6A31($v0)
    ctx->pc = 0x2683ccu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x586A31u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x586A31u, _value); } while (0);
    // 0x2683d0: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x2683d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x2683d4: 0xa20402f5  sb          $a0, 0x2F5($s0)
    ctx->pc = 0x2683d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 4));
    // 0x2683d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2683d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2683dc: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2683dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_2683e0:
    // 0x2683e0: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x2683e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2683e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2683E4u;
    {
        const bool branch_taken_0x2683e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2683E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2683E4u;
        // 0x2683e8: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2683e4) {
            ctx->pc = 0x2683F0u;
            goto label_2683f0;
        }
    }
    ctx->pc = 0x2683ECu;
label_2683ec:
    // 0x2683ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2683ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2683f0:
    // 0x2683f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2683f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2683f4:
    // 0x2683f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2683f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2683f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2683f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2683fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2683FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2683FCu;
        // 0x268400: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2683FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268404u;
    // 0x268404: 0x0  nop
    ctx->pc = 0x268404u;
    // NOP
    ctx->pc = 0x268408u;
}
