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

// Function: cEmSetParam_setEm
// Address: 0x2952d0 - 0x295380
void cEmSetParam_setEm_0x2952d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmSetParam_setEm_0x2952d0");
#endif

    switch (ctx->pc) {
        case 0x29530cu: goto label_29530c;
        case 0x295334u: goto label_295334;
        case 0x295368u: goto label_295368;
        default: break;
    }

    ctx->pc = 0x2952d0u;

    // 0x2952d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2952d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2952d4: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x2952d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x2952d8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2952d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2952dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2952dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2952e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2952e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2952e4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2952e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2952e8: 0x24448658  addiu       $a0, $v0, -0x79A8
    ctx->pc = 0x2952e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936152));
    // 0x2952ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2952ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2952f0: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x2952f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x2952f4: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x2952f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x2952f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2952f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2952fc: 0x441000f  bgez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2952FCu;
    {
        const bool branch_taken_0x2952fc = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x295300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2952FCu;
        // 0x295300: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2952fc) {
            ctx->pc = 0x29533Cu;
            goto label_29533c;
        }
    }
    ctx->pc = 0x295304u;
    // 0x295304: 0xc0afbd8  jal         func_2BEF60
    ctx->pc = 0x295304u;
    SET_GPR_U32(ctx, 31, 0x29530Cu);
    ctx->pc = 0x2BEF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEF60u, 0x295304u, 0x29530Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29530Cu;
label_29530c:
    // 0x29530c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29530cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295310: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x295310u;
    {
        const bool branch_taken_0x295310 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x295314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295310u;
        // 0x295314: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295310) {
            ctx->pc = 0x295368u;
            goto label_295368;
        }
    }
    ctx->pc = 0x295318u;
    // 0x295318: 0x92020014  lbu         $v0, 0x14($s0)
    ctx->pc = 0x295318u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x29531c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29531cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x295320: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x295320u;
    {
        const bool branch_taken_0x295320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295320u;
        // 0x295324: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295320) {
            ctx->pc = 0x29533Cu;
            goto label_29533c;
        }
    }
    ctx->pc = 0x295328u;
    // 0x295328: 0x92050013  lbu         $a1, 0x13($s0)
    ctx->pc = 0x295328u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 19)));
    // 0x29532c: 0xc0a421a  jal         func_290868
    ctx->pc = 0x29532Cu;
    SET_GPR_U32(ctx, 31, 0x295334u);
    ctx->pc = 0x295330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29532Cu;
    // 0x295330: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x29532Cu, 0x295334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295334u;
label_295334:
    // 0x295334: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x295334u;
    {
        const bool branch_taken_0x295334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x295334) {
            ctx->pc = 0x295338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295334u;
            // 0x295338: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295344u;
            goto label_295344;
        }
    }
    ctx->pc = 0x29533Cu;
label_29533c:
    // 0x29533c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x29533Cu;
    {
        const bool branch_taken_0x29533c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29533Cu;
        // 0x295340: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29533c) {
            ctx->pc = 0x295368u;
            goto label_295368;
        }
    }
    ctx->pc = 0x295344u;
label_295344:
    // 0x295344: 0x711024  and         $v0, $v1, $s1
    ctx->pc = 0x295344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x295348: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x295348u;
    {
        const bool branch_taken_0x295348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295348u;
        // 0x29534c: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295348) {
            ctx->pc = 0x29535Cu;
            goto label_29535c;
        }
    }
    ctx->pc = 0x295350u;
    // 0x295350: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x295350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x295354: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x295354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x295358: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x295358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_29535c:
    // 0x29535c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29535cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295360: 0xc0a546c  jal         func_2951B0
    ctx->pc = 0x295360u;
    SET_GPR_U32(ctx, 31, 0x295368u);
    ctx->pc = 0x295364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295360u;
    // 0x295364: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2951B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2951B0u, 0x295360u, 0x295368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295368u;
label_295368:
    // 0x295368: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x295368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29536c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x29536cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x295370: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x295370u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x295374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295378: 0x3e00008  jr          $ra
    ctx->pc = 0x295378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295378u;
        // 0x29537c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295380u;
}
