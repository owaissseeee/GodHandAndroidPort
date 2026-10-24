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

// Function: ChargeObj_updateAuraEffect
// Address: 0x268508 - 0x2685d0
void ChargeObj_updateAuraEffect_0x268508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ChargeObj_updateAuraEffect_0x268508");
#endif

    switch (ctx->pc) {
        case 0x268590u: goto label_268590;
        case 0x2685c0u: goto label_2685c0;
        default: break;
    }

    ctx->pc = 0x268508u;

    // 0x268508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x268508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26850c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x26850cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268510: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x268510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x268514: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x268514u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x268518: 0xc4e017cc  lwc1        $f0, 0x17CC($a3)
    ctx->pc = 0x268518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 6092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26851c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x26851cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268520: 0x0  nop
    ctx->pc = 0x268520u;
    // NOP
    // 0x268524: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x268524u;
    {
        const bool branch_taken_0x268524 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x268528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268524u;
        // 0x268528: 0x8ce316d0  lw          $v1, 0x16D0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 5840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268524) {
            ctx->pc = 0x268598u;
            goto label_268598;
        }
    }
    ctx->pc = 0x26852Cu;
    // 0x26852c: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x26852cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x268530: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x268530u;
    {
        const bool branch_taken_0x268530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x268534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268530u;
        // 0x268534: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268530) {
            ctx->pc = 0x2685C4u;
            goto label_2685c4;
        }
    }
    ctx->pc = 0x268538u;
    // 0x268538: 0x34620080  ori         $v0, $v1, 0x80
    ctx->pc = 0x268538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x26853c: 0x8ce40564  lw          $a0, 0x564($a3)
    ctx->pc = 0x26853cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1380)));
    // 0x268540: 0x24030223  addiu       $v1, $zero, 0x223
    ctx->pc = 0x268540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
    // 0x268544: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x268544u;
    {
        const bool branch_taken_0x268544 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x268548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268544u;
        // 0x268548: 0xace216d0  sw          $v0, 0x16D0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268544) {
            ctx->pc = 0x268568u;
            goto label_268568;
        }
    }
    ctx->pc = 0x26854Cu;
    // 0x26854c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x26854cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268550: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x268550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x268554: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x268554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x268558: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x268558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26855c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x26855cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x268560: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x268560u;
    {
        const bool branch_taken_0x268560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268560u;
        // 0x268564: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268560) {
            ctx->pc = 0x268580u;
            goto label_268580;
        }
    }
    ctx->pc = 0x268568u;
label_268568:
    // 0x268568: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x268568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26856c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26856cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x268570: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x268570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x268574: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x268574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268578: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x268578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26857c: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x26857cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_268580:
    // 0x268580: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x268580u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x268584: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x268584u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x268588: 0xc0c1a40  jal         func_306900
    ctx->pc = 0x268588u;
    SET_GPR_U32(ctx, 31, 0x268590u);
    ctx->pc = 0x26858Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268588u;
    // 0x26858c: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306900u, 0x268588u, 0x268590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268590u;
label_268590:
    // 0x268590: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x268590u;
    {
        const bool branch_taken_0x268590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268590u;
        // 0x268594: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268590) {
            ctx->pc = 0x2685C4u;
            goto label_2685c4;
        }
    }
    ctx->pc = 0x268598u;
label_268598:
    // 0x268598: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x268598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x26859c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26859Cu;
    {
        const bool branch_taken_0x26859c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2685A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26859Cu;
        // 0x2685a0: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26859c) {
            ctx->pc = 0x2685C0u;
            goto label_2685c0;
        }
    }
    ctx->pc = 0x2685A4u;
    // 0x2685a4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2685a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2685a8: 0x3442ff7f  ori         $v0, $v0, 0xFF7F
    ctx->pc = 0x2685a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65407);
    // 0x2685ac: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2685acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2685b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2685b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2685b4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2685b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2685b8: 0xc0c1880  jal         func_306200
    ctx->pc = 0x2685B8u;
    SET_GPR_U32(ctx, 31, 0x2685C0u);
    ctx->pc = 0x2685BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2685B8u;
    // 0x2685bc: 0xace216d0  sw          $v0, 0x16D0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x2685B8u, 0x2685C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2685C0u;
label_2685c0:
    // 0x2685c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2685c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2685c4:
    // 0x2685c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2685C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2685C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2685C4u;
        // 0x2685c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2685C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2685CCu;
    // 0x2685cc: 0x0  nop
    ctx->pc = 0x2685ccu;
    // NOP
    ctx->pc = 0x2685d0u;
}
