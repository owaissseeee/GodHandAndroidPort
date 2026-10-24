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

// Function: sceCdGetDiskType2
// Address: 0x399910 - 0x3999a8
void sceCdGetDiskType2_0x399910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceCdGetDiskType2_0x399910");
#endif

    switch (ctx->pc) {
        case 0x399924u: goto label_399924;
        case 0x399964u: goto label_399964;
        case 0x399978u: goto label_399978;
        case 0x399994u: goto label_399994;
        default: break;
    }

    ctx->pc = 0x399910u;

    // 0x399910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x399910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x399914: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x399914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x399918: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x399918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x39991c: 0xc0e63ac  jal         func_398EB0
    ctx->pc = 0x39991Cu;
    SET_GPR_U32(ctx, 31, 0x399924u);
    ctx->pc = 0x399920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39991Cu;
    // 0x399920: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398EB0u, 0x39991Cu, 0x399924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399924u;
label_399924:
    // 0x399924: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x399924u;
    {
        const bool branch_taken_0x399924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x399928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399924u;
        // 0x399928: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399924) {
            ctx->pc = 0x399934u;
            goto label_399934;
        }
    }
    ctx->pc = 0x39992Cu;
    // 0x39992c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x39992Cu;
    {
        const bool branch_taken_0x39992c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39992Cu;
        // 0x399930: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39992c) {
            ctx->pc = 0x399998u;
            goto label_399998;
        }
    }
    ctx->pc = 0x399934u;
label_399934:
    // 0x399934: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x399934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x399938: 0x24509840  addiu       $s0, $v0, -0x67C0
    ctx->pc = 0x399938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940736));
    // 0x39993c: 0x2484a1c0  addiu       $a0, $a0, -0x5E40
    ctx->pc = 0x39993cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943168));
    // 0x399940: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x399940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x399944: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x399944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x399948: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x399948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39994c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39994cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399950: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x399950u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399954: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x399954u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399958: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x399958u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x39995c: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x39995Cu;
    SET_GPR_U32(ctx, 31, 0x399964u);
    ctx->pc = 0x399960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39995Cu;
    // 0x399960: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x39995Cu, 0x399964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399964u;
label_399964:
    // 0x399964: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x399964u;
    {
        const bool branch_taken_0x399964 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x399968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399964u;
        // 0x399968: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399964) {
            ctx->pc = 0x399980u;
            goto label_399980;
        }
    }
    ctx->pc = 0x39996Cu;
    // 0x39996c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x39996cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x399970: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x399970u;
    SET_GPR_U32(ctx, 31, 0x399978u);
    ctx->pc = 0x399974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399970u;
    // 0x399974: 0x8c44866c  lw          $a0, -0x7994($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936172)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x399970u, 0x399978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399978u;
label_399978:
    // 0x399978: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x399978u;
    {
        const bool branch_taken_0x399978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399978u;
        // 0x39997c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399978) {
            ctx->pc = 0x399998u;
            goto label_399998;
        }
    }
    ctx->pc = 0x399980u;
label_399980:
    // 0x399980: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x399980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x399984: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x399984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x399988: 0x8c64866c  lw          $a0, -0x7994($v1)
    ctx->pc = 0x399988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936172)));
    // 0x39998c: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x39998Cu;
    SET_GPR_U32(ctx, 31, 0x399994u);
    ctx->pc = 0x399990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39998Cu;
    // 0x399990: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x39998Cu, 0x399994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399994u;
label_399994:
    // 0x399994: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x399994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_399998:
    // 0x399998: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x399998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39999c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x39999cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3999a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3999A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3999A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3999A0u;
        // 0x3999a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3999A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3999A8u;
}
