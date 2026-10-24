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

// Function: func_002276B0
// Address: 0x2276b0 - 0x227bb0
void func_002276B0_0x2276b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002276B0_0x2276b0");
#endif

    switch (ctx->pc) {
        case 0x227738u: goto label_227738;
        case 0x227764u: goto label_227764;
        case 0x227784u: goto label_227784;
        case 0x2277a4u: goto label_2277a4;
        case 0x2277acu: goto label_2277ac;
        case 0x2277ccu: goto label_2277cc;
        case 0x2277f8u: goto label_2277f8;
        case 0x227820u: goto label_227820;
        case 0x227840u: goto label_227840;
        case 0x227848u: goto label_227848;
        case 0x227868u: goto label_227868;
        case 0x227874u: goto label_227874;
        case 0x2278a0u: goto label_2278a0;
        case 0x2278b0u: goto label_2278b0;
        case 0x2278dcu: goto label_2278dc;
        case 0x2278e8u: goto label_2278e8;
        case 0x227960u: goto label_227960;
        case 0x22796cu: goto label_22796c;
        case 0x227978u: goto label_227978;
        case 0x2279f4u: goto label_2279f4;
        case 0x227a20u: goto label_227a20;
        case 0x227a34u: goto label_227a34;
        case 0x227a78u: goto label_227a78;
        case 0x227a8cu: goto label_227a8c;
        case 0x227a98u: goto label_227a98;
        case 0x227aa8u: goto label_227aa8;
        case 0x227ad4u: goto label_227ad4;
        case 0x227afcu: goto label_227afc;
        case 0x227b1cu: goto label_227b1c;
        case 0x227b24u: goto label_227b24;
        case 0x227b34u: goto label_227b34;
        case 0x227b48u: goto label_227b48;
        case 0x227b54u: goto label_227b54;
        case 0x227b80u: goto label_227b80;
        case 0x227b98u: goto label_227b98;
        default: break;
    }

    ctx->pc = 0x2276b0u;

    // 0x2276b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2276b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2276b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2276b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2276b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2276b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2276bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2276bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2276c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2276c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2276c4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2276c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2276c8: 0xa202186a  sb          $v0, 0x186A($s0)
    ctx->pc = 0x2276c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6250), (uint8_t)GPR_U32(ctx, 2));
    // 0x2276cc: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x2276ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x2276d0: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x2276d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2276d4: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x2276d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x2276d8: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2276D8u;
    {
        const bool branch_taken_0x2276d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2276DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2276D8u;
        // 0x2276dc: 0xae0316d4  sw          $v1, 0x16D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2276d8) {
            ctx->pc = 0x227704u;
            goto label_227704;
        }
    }
    ctx->pc = 0x2276E0u;
    // 0x2276e0: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x2276e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2276e4: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x2276e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
    // 0x2276e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2276e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2276ec: 0x0  nop
    ctx->pc = 0x2276ecu;
    // NOP
    // 0x2276f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2276f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2276f4: 0x0  nop
    ctx->pc = 0x2276f4u;
    // NOP
    // 0x2276f8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2276F8u;
    {
        const bool branch_taken_0x2276f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2276FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2276F8u;
        // 0x2276fc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2276f8) {
            ctx->pc = 0x227704u;
            goto label_227704;
        }
    }
    ctx->pc = 0x227700u;
    // 0x227700: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x227700u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_227704:
    // 0x227704: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x227704u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x227708: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x227708u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x22770c: 0x10400122  beqz        $v0, . + 4 + (0x122 << 2)
    ctx->pc = 0x22770Cu;
    {
        const bool branch_taken_0x22770c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22770Cu;
        // 0x227710: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22770c) {
            ctx->pc = 0x227B98u;
            goto label_227b98;
        }
    }
    ctx->pc = 0x227714u;
    // 0x227714: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x227714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x227718: 0x24428660  addiu       $v0, $v0, -0x79A0
    ctx->pc = 0x227718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936160));
    // 0x22771c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22771cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227720: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x227720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x227724: 0x800008  jr          $a0
    ctx->pc = 0x227724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22772Cu: goto label_22772c;
            case 0x227770u: goto label_227770;
            case 0x2277C4u: goto label_2277c4;
            case 0x22780Cu: goto label_22780c;
            case 0x2278A8u: goto label_2278a8;
            case 0x227950u: goto label_227950;
            case 0x2279ECu: goto label_2279ec;
            case 0x227A2Cu: goto label_227a2c;
            case 0x227AA0u: goto label_227aa0;
            case 0x227AE8u: goto label_227ae8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227724u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22772Cu;
label_22772c:
    // 0x22772c: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x22772cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x227730: 0xc09d91a  jal         func_276468
    ctx->pc = 0x227730u;
    SET_GPR_U32(ctx, 31, 0x227738u);
    ctx->pc = 0x227734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227730u;
    // 0x227734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x227730u, 0x227738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227738u;
label_227738:
    // 0x227738: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x227738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x22773c: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x22773cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x227740: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x227740u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x227744: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227748: 0x8c651f10  lw          $a1, 0x1F10($v1)
    ctx->pc = 0x227748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7952)));
    // 0x22774c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x22774cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x227750: 0x8c661f14  lw          $a2, 0x1F14($v1)
    ctx->pc = 0x227750u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7956)));
    // 0x227754: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x227754u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227758: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x227758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x22775c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22775Cu;
    SET_GPR_U32(ctx, 31, 0x227764u);
    ctx->pc = 0x227760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22775Cu;
    // 0x227760: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22775Cu, 0x227764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227764u;
label_227764:
    // 0x227764: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x227764u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x227768: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x227768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22776c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x22776cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_227770:
    // 0x227770: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x227770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x227774: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x227774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x227778: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x227778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22777c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22777Cu;
    SET_GPR_U32(ctx, 31, 0x227784u);
    ctx->pc = 0x227780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22777Cu;
    // 0x227780: 0xae0216d4  sw          $v0, 0x16D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22777Cu, 0x227784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227784u;
label_227784:
    // 0x227784: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x227784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227788: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22778c: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x22778cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x227790: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x227790u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x227794: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x227794u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x227798: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x227798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x22779c: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22779Cu;
    SET_GPR_U32(ctx, 31, 0x2277A4u);
    ctx->pc = 0x2277A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22779Cu;
    // 0x2277a0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22779Cu, 0x2277A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2277A4u;
label_2277a4:
    // 0x2277a4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2277A4u;
    SET_GPR_U32(ctx, 31, 0x2277ACu);
    ctx->pc = 0x2277A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2277A4u;
    // 0x2277a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2277A4u, 0x2277ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2277ACu;
label_2277ac:
    // 0x2277ac: 0x104000b2  beqz        $v0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x2277ACu;
    {
        const bool branch_taken_0x2277ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2277ac) {
            ctx->pc = 0x227A78u;
            goto label_227a78;
        }
    }
    ctx->pc = 0x2277B4u;
    // 0x2277b4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2277b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2277b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2277b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2277bc: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x2277BCu;
    {
        const bool branch_taken_0x2277bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2277C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2277BCu;
        // 0x2277c0: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2277bc) {
            ctx->pc = 0x227A78u;
            goto label_227a78;
        }
    }
    ctx->pc = 0x2277C4u;
label_2277c4:
    // 0x2277c4: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2277C4u;
    SET_GPR_U32(ctx, 31, 0x2277CCu);
    ctx->pc = 0x2277C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2277C4u;
    // 0x2277c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2277C4u, 0x2277CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2277CCu;
label_2277cc:
    // 0x2277cc: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2277ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2277d0: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x2277d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2277d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2277d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2277d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2277d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2277dc: 0x8c651f18  lw          $a1, 0x1F18($v1)
    ctx->pc = 0x2277dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7960)));
    // 0x2277e0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2277e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2277e4: 0x8c661f1c  lw          $a2, 0x1F1C($v1)
    ctx->pc = 0x2277e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7964)));
    // 0x2277e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2277e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2277ec: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2277ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2277f0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2277F0u;
    SET_GPR_U32(ctx, 31, 0x2277F8u);
    ctx->pc = 0x2277F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2277F0u;
    // 0x2277f4: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2277F0u, 0x2277F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2277F8u;
label_2277f8:
    // 0x2277f8: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2277f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2277fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2277fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227800: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x227800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
    // 0x227804: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x227804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x227808: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x227808u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_22780c:
    // 0x22780c: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x22780cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x227810: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x227810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x227814: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x227814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x227818: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x227818u;
    SET_GPR_U32(ctx, 31, 0x227820u);
    ctx->pc = 0x22781Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227818u;
    // 0x22781c: 0xae0216d4  sw          $v0, 0x16D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x227818u, 0x227820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227820u;
label_227820:
    // 0x227820: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x227820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227828: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x227828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x22782c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22782cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x227830: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x227830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x227834: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x227834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x227838: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x227838u;
    SET_GPR_U32(ctx, 31, 0x227840u);
    ctx->pc = 0x22783Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227838u;
    // 0x22783c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x227838u, 0x227840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227840u;
label_227840:
    // 0x227840: 0xc055f06  jal         func_157C18
    ctx->pc = 0x227840u;
    SET_GPR_U32(ctx, 31, 0x227848u);
    ctx->pc = 0x227844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227840u;
    // 0x227844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x227840u, 0x227848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227848u;
label_227848:
    // 0x227848: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x227848u;
    {
        const bool branch_taken_0x227848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227848u;
        // 0x22784c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227848) {
            ctx->pc = 0x227854u;
            goto label_227854;
        }
    }
    ctx->pc = 0x227850u;
    // 0x227850: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x227850u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_227854:
    // 0x227854: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x227854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x227858: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x227858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22785c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22785cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227860: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x227860u;
    SET_GPR_U32(ctx, 31, 0x227868u);
    ctx->pc = 0x227864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227860u;
    // 0x227864: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x227860u, 0x227868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227868u;
label_227868:
    // 0x227868: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x227868u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22786c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22786Cu;
    SET_GPR_U32(ctx, 31, 0x227874u);
    ctx->pc = 0x227870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22786Cu;
    // 0x227870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22786Cu, 0x227874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227874u;
label_227874:
    // 0x227874: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x227874u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x227878: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x227878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22787c: 0x504000c7  beql        $v0, $zero, . + 4 + (0xC7 << 2)
    ctx->pc = 0x22787Cu;
    {
        const bool branch_taken_0x22787c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22787c) {
            ctx->pc = 0x227880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22787Cu;
            // 0x227880: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227B9Cu;
            goto label_227b9c;
        }
    }
    ctx->pc = 0x227884u;
    // 0x227884: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x227884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
    // 0x227888: 0x104000c3  beqz        $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x227888u;
    {
        const bool branch_taken_0x227888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227888u;
        // 0x22788c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227888) {
            ctx->pc = 0x227B98u;
            goto label_227b98;
        }
    }
    ctx->pc = 0x227890u;
    // 0x227890: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x227890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x227894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227898: 0xc09afbc  jal         func_26BEF0
    ctx->pc = 0x227898u;
    SET_GPR_U32(ctx, 31, 0x2278A0u);
    ctx->pc = 0x22789Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227898u;
    // 0x22789c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEF0u, 0x227898u, 0x2278A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2278A0u;
label_2278a0:
    // 0x2278a0: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x2278A0u;
    {
        const bool branch_taken_0x2278a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2278A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2278A0u;
        // 0x2278a4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2278a0) {
            ctx->pc = 0x227B9Cu;
            goto label_227b9c;
        }
    }
    ctx->pc = 0x2278A8u;
label_2278a8:
    // 0x2278a8: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2278A8u;
    SET_GPR_U32(ctx, 31, 0x2278B0u);
    ctx->pc = 0x2278ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2278A8u;
    // 0x2278ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2278A8u, 0x2278B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2278B0u;
label_2278b0:
    // 0x2278b0: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2278b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2278b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2278b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2278b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2278b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2278bc: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x2278bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2278c0: 0x8c651f2c  lw          $a1, 0x1F2C($v1)
    ctx->pc = 0x2278c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7980)));
    // 0x2278c4: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2278c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2278c8: 0x8c661f30  lw          $a2, 0x1F30($v1)
    ctx->pc = 0x2278c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7984)));
    // 0x2278cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2278ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2278d0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2278d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2278d4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2278D4u;
    SET_GPR_U32(ctx, 31, 0x2278DCu);
    ctx->pc = 0x2278D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2278D4u;
    // 0x2278d8: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2278D4u, 0x2278DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2278DCu;
label_2278dc:
    // 0x2278dc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2278dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2278e0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2278E0u;
    SET_GPR_U32(ctx, 31, 0x2278E8u);
    ctx->pc = 0x2278E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2278E0u;
    // 0x2278e4: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2278E0u, 0x2278E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2278E8u;
label_2278e8:
    // 0x2278e8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2278e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2278ec: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2278ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2278f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2278F0u;
    {
        const bool branch_taken_0x2278f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2278F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2278F0u;
        // 0x2278f4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2278f0) {
            ctx->pc = 0x227910u;
            goto label_227910;
        }
    }
    ctx->pc = 0x2278F8u;
    // 0x2278f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2278f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2278fc: 0x24428690  addiu       $v0, $v0, -0x7970
    ctx->pc = 0x2278fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936208));
    // 0x227900: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x227900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227904: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x227904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x227908: 0x800008  jr          $a0
    ctx->pc = 0x227908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x227910u: goto label_227910;
            case 0x227920u: goto label_227920;
            case 0x227930u: goto label_227930;
            case 0x227940u: goto label_227940;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227908u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x227910u;
label_227910:
    // 0x227910: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x227910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x227914: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x227914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227918: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x227918u;
    {
        const bool branch_taken_0x227918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227918u;
        // 0x22791c: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x227918) {
            ctx->pc = 0x227944u;
            goto label_227944;
        }
    }
    ctx->pc = 0x227920u;
label_227920:
    // 0x227920: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x227920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x227924: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x227924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227928: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x227928u;
    {
        const bool branch_taken_0x227928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227928u;
        // 0x22792c: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x227928) {
            ctx->pc = 0x227944u;
            goto label_227944;
        }
    }
    ctx->pc = 0x227930u;
label_227930:
    // 0x227930: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x227930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x227934: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x227934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227938: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x227938u;
    {
        const bool branch_taken_0x227938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227938u;
        // 0x22793c: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x227938) {
            ctx->pc = 0x227944u;
            goto label_227944;
        }
    }
    ctx->pc = 0x227940u;
label_227940:
    // 0x227940: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x227940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_227944:
    // 0x227944: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x227944u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x227948: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x227948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22794c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x22794cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_227950:
    // 0x227950: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x227950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x227954: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x227954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x227958: 0xc055f06  jal         func_157C18
    ctx->pc = 0x227958u;
    SET_GPR_U32(ctx, 31, 0x227960u);
    ctx->pc = 0x22795Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227958u;
    // 0x22795c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x227958u, 0x227960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227960u;
label_227960:
    // 0x227960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227964: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x227964u;
    SET_GPR_U32(ctx, 31, 0x22796Cu);
    ctx->pc = 0x227968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227964u;
    // 0x227968: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x227964u, 0x22796Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22796Cu;
label_22796c:
    // 0x22796c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22796cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x227970: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x227970u;
    SET_GPR_U32(ctx, 31, 0x227978u);
    ctx->pc = 0x227974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227970u;
    // 0x227974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x227970u, 0x227978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227978u;
label_227978:
    // 0x227978: 0xc6000600  lwc1        $f0, 0x600($s0)
    ctx->pc = 0x227978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22797c: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x22797cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227980: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x227980u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x227984: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x227984u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x227988: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x227988u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22798c: 0x0  nop
    ctx->pc = 0x22798cu;
    // NOP
    // 0x227990: 0x45000081  bc1f        . + 4 + (0x81 << 2)
    ctx->pc = 0x227990u;
    {
        const bool branch_taken_0x227990 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x227994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227990u;
        // 0x227994: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x227990) {
            ctx->pc = 0x227B98u;
            goto label_227b98;
        }
    }
    ctx->pc = 0x227998u;
    // 0x227998: 0xc6000618  lwc1        $f0, 0x618($s0)
    ctx->pc = 0x227998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22799c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22799cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2279a0: 0x3c014361  lui         $at, 0x4361
    ctx->pc = 0x2279a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17249 << 16));
    // 0x2279a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2279a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2279a8: 0x0  nop
    ctx->pc = 0x2279a8u;
    // NOP
    // 0x2279ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2279acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2279b0: 0x0  nop
    ctx->pc = 0x2279b0u;
    // NOP
    // 0x2279b4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2279B4u;
    {
        const bool branch_taken_0x2279b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2279B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2279B4u;
        // 0x2279b8: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2279b4) {
            ctx->pc = 0x2279C4u;
            goto label_2279c4;
        }
    }
    ctx->pc = 0x2279BCu;
    // 0x2279bc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2279bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2279c0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2279c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2279c4:
    // 0x2279c4: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x2279c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2279c8: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x2279c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x2279cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2279ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2279d0: 0x0  nop
    ctx->pc = 0x2279d0u;
    // NOP
    // 0x2279d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2279d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2279d8: 0x0  nop
    ctx->pc = 0x2279d8u;
    // NOP
    // 0x2279dc: 0x4500006e  bc1f        . + 4 + (0x6E << 2)
    ctx->pc = 0x2279DCu;
    {
        const bool branch_taken_0x2279dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2279E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2279DCu;
        // 0x2279e0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2279dc) {
            ctx->pc = 0x227B98u;
            goto label_227b98;
        }
    }
    ctx->pc = 0x2279E4u;
    // 0x2279e4: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2279E4u;
    {
        const bool branch_taken_0x2279e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2279E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2279E4u;
        // 0x2279e8: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2279e4) {
            ctx->pc = 0x227B98u;
            goto label_227b98;
        }
    }
    ctx->pc = 0x2279ECu;
label_2279ec:
    // 0x2279ec: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2279ECu;
    SET_GPR_U32(ctx, 31, 0x2279F4u);
    ctx->pc = 0x2279F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2279ECu;
    // 0x2279f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2279ECu, 0x2279F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2279F4u;
label_2279f4:
    // 0x2279f4: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2279f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2279f8: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x2279f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2279fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2279fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x227a00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227a04: 0x8c651f24  lw          $a1, 0x1F24($v1)
    ctx->pc = 0x227a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7972)));
    // 0x227a08: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x227a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x227a0c: 0x8c661f28  lw          $a2, 0x1F28($v1)
    ctx->pc = 0x227a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7976)));
    // 0x227a10: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x227a10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227a14: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x227a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x227a18: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x227A18u;
    SET_GPR_U32(ctx, 31, 0x227A20u);
    ctx->pc = 0x227A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227A18u;
    // 0x227a1c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x227A18u, 0x227A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227A20u;
label_227a20:
    // 0x227a20: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x227a20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x227a24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x227a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x227a28: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x227a28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_227a2c:
    // 0x227a2c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x227A2Cu;
    SET_GPR_U32(ctx, 31, 0x227A34u);
    ctx->pc = 0x227A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227A2Cu;
    // 0x227a30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x227A2Cu, 0x227A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227A34u;
label_227a34:
    // 0x227a34: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x227A34u;
    {
        const bool branch_taken_0x227a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227a34) {
            ctx->pc = 0x227A78u;
            goto label_227a78;
        }
    }
    ctx->pc = 0x227A3Cu;
    // 0x227a3c: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x227a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227a40: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x227a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x227a44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x227a44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227a48: 0x0  nop
    ctx->pc = 0x227a48u;
    // NOP
    // 0x227a4c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x227a4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227a50: 0x0  nop
    ctx->pc = 0x227a50u;
    // NOP
    // 0x227a54: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x227A54u;
    {
        const bool branch_taken_0x227a54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x227A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A54u;
        // 0x227a58: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227a54) {
            ctx->pc = 0x227A70u;
            goto label_227a70;
        }
    }
    ctx->pc = 0x227A5Cu;
    // 0x227a5c: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x227a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x227a60: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x227a60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x227a64: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x227a64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x227a68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x227A68u;
    {
        const bool branch_taken_0x227a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A68u;
        // 0x227a6c: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227a68) {
            ctx->pc = 0x227A78u;
            goto label_227a78;
        }
    }
    ctx->pc = 0x227A70u;
label_227a70:
    // 0x227a70: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x227A70u;
    SET_GPR_U32(ctx, 31, 0x227A78u);
    ctx->pc = 0x227A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227A70u;
    // 0x227a74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x227A70u, 0x227A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227A78u;
label_227a78:
    // 0x227a78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x227a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x227a7c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x227a7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x227a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227a84: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x227A84u;
    SET_GPR_U32(ctx, 31, 0x227A8Cu);
    ctx->pc = 0x227A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227A84u;
    // 0x227a88: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x227A84u, 0x227A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227A8Cu;
label_227a8c:
    // 0x227a8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227a90: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x227A90u;
    SET_GPR_U32(ctx, 31, 0x227A98u);
    ctx->pc = 0x227A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227A90u;
    // 0x227a94: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x227A90u, 0x227A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227A98u;
label_227a98:
    // 0x227a98: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x227A98u;
    {
        const bool branch_taken_0x227a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A98u;
        // 0x227a9c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227a98) {
            ctx->pc = 0x227B9Cu;
            goto label_227b9c;
        }
    }
    ctx->pc = 0x227AA0u;
label_227aa0:
    // 0x227aa0: 0xc09d91a  jal         func_276468
    ctx->pc = 0x227AA0u;
    SET_GPR_U32(ctx, 31, 0x227AA8u);
    ctx->pc = 0x227AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227AA0u;
    // 0x227aa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x227AA0u, 0x227AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227AA8u;
label_227aa8:
    // 0x227aa8: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x227aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x227aac: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x227aacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x227ab0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x227ab0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x227ab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227ab8: 0x8c651f34  lw          $a1, 0x1F34($v1)
    ctx->pc = 0x227ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7988)));
    // 0x227abc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x227abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x227ac0: 0x8c661f38  lw          $a2, 0x1F38($v1)
    ctx->pc = 0x227ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7992)));
    // 0x227ac4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x227ac4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227ac8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x227ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x227acc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x227ACCu;
    SET_GPR_U32(ctx, 31, 0x227AD4u);
    ctx->pc = 0x227AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227ACCu;
    // 0x227ad0: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x227ACCu, 0x227AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227AD4u;
label_227ad4:
    // 0x227ad4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x227ad4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x227ad8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x227ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227adc: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x227adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
    // 0x227ae0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x227ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x227ae4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x227ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_227ae8:
    // 0x227ae8: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x227ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x227aec: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x227aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x227af0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x227af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x227af4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x227AF4u;
    SET_GPR_U32(ctx, 31, 0x227AFCu);
    ctx->pc = 0x227AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227AF4u;
    // 0x227af8: 0xae0216d4  sw          $v0, 0x16D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x227AF4u, 0x227AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227AFCu;
label_227afc:
    // 0x227afc: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x227afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227b00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227b04: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x227b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x227b08: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x227b08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x227b0c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x227b0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x227b10: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x227b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x227b14: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x227B14u;
    SET_GPR_U32(ctx, 31, 0x227B1Cu);
    ctx->pc = 0x227B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227B14u;
    // 0x227b18: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x227B14u, 0x227B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227B1Cu;
label_227b1c:
    // 0x227b1c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x227B1Cu;
    SET_GPR_U32(ctx, 31, 0x227B24u);
    ctx->pc = 0x227B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227B1Cu;
    // 0x227b20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x227B1Cu, 0x227B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227B24u;
label_227b24:
    // 0x227b24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x227B24u;
    {
        const bool branch_taken_0x227b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227b24) {
            ctx->pc = 0x227B34u;
            goto label_227b34;
        }
    }
    ctx->pc = 0x227B2Cu;
    // 0x227b2c: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x227B2Cu;
    SET_GPR_U32(ctx, 31, 0x227B34u);
    ctx->pc = 0x227B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227B2Cu;
    // 0x227b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x227B2Cu, 0x227B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227B34u;
label_227b34:
    // 0x227b34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x227b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x227b38: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x227b38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x227b3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227b40: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x227B40u;
    SET_GPR_U32(ctx, 31, 0x227B48u);
    ctx->pc = 0x227B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227B40u;
    // 0x227b44: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x227B40u, 0x227B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227B48u;
label_227b48:
    // 0x227b48: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x227b48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x227b4c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x227B4Cu;
    SET_GPR_U32(ctx, 31, 0x227B54u);
    ctx->pc = 0x227B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227B4Cu;
    // 0x227b50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x227B4Cu, 0x227B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227B54u;
label_227b54:
    // 0x227b54: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x227b54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x227b58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x227b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x227b5c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x227B5Cu;
    {
        const bool branch_taken_0x227b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227b5c) {
            ctx->pc = 0x227B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227B5Cu;
            // 0x227b60: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227B84u;
            goto label_227b84;
        }
    }
    ctx->pc = 0x227B64u;
    // 0x227b64: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x227b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
    // 0x227b68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x227B68u;
    {
        const bool branch_taken_0x227b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B68u;
        // 0x227b6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227b68) {
            ctx->pc = 0x227B80u;
            goto label_227b80;
        }
    }
    ctx->pc = 0x227B70u;
    // 0x227b70: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x227b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x227b74: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x227b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x227b78: 0xc09afbc  jal         func_26BEF0
    ctx->pc = 0x227B78u;
    SET_GPR_U32(ctx, 31, 0x227B80u);
    ctx->pc = 0x227B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227B78u;
    // 0x227b7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEF0u, 0x227B78u, 0x227B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227B80u;
label_227b80:
    // 0x227b80: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x227b80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_227b84:
    // 0x227b84: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x227b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x227b88: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x227B88u;
    {
        const bool branch_taken_0x227b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227b88) {
            ctx->pc = 0x227B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227B88u;
            // 0x227b8c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227B9Cu;
            goto label_227b9c;
        }
    }
    ctx->pc = 0x227B90u;
    // 0x227b90: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x227B90u;
    SET_GPR_U32(ctx, 31, 0x227B98u);
    ctx->pc = 0x227B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227B90u;
    // 0x227b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x227B90u, 0x227B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227B98u;
label_227b98:
    // 0x227b98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x227b98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_227b9c:
    // 0x227b9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227ba0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x227ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x227ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x227BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227BA4u;
        // 0x227ba8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227BACu;
    // 0x227bac: 0x0  nop
    ctx->pc = 0x227bacu;
    // NOP
    ctx->pc = 0x227bb0u;
}
