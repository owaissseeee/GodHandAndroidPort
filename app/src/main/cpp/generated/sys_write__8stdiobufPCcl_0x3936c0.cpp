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

// Function: sys_write__8stdiobufPCcl
// Address: 0x3936c0 - 0x393720
void sys_write__8stdiobufPCcl_0x3936c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sys_write__8stdiobufPCcl_0x3936c0");
#endif

    switch (ctx->pc) {
        case 0x3936f0u: goto label_3936f0;
        default: break;
    }

    ctx->pc = 0x3936c0u;

    // 0x3936c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3936c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3936c4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3936c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3936c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3936c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3936cc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3936ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3936d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3936d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3936d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3936d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3936d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3936d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3936dc: 0x11303c  dsll32      $a2, $s1, 0
    ctx->pc = 0x3936dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3936e0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x3936e0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x3936e4: 0x8e070058  lw          $a3, 0x58($s0)
    ctx->pc = 0x3936e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3936e8: 0xc0e9a32  jal         func_3A68C8
    ctx->pc = 0x3936E8u;
    SET_GPR_U32(ctx, 31, 0x3936F0u);
    ctx->pc = 0x3936ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3936E8u;
    // 0x3936ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A68C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A68C8u, 0x3936E8u, 0x3936F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3936F0u;
label_3936f0:
    // 0x3936f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3936f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3936f4: 0xde030040  ld          $v1, 0x40($s0)
    ctx->pc = 0x3936f4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x3936f8: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3936F8u;
    {
        const bool branch_taken_0x3936f8 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x3936FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3936F8u;
        // 0x3936fc: 0x2203e  dsrl32      $a0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3936f8) {
            ctx->pc = 0x393708u;
            goto label_393708;
        }
    }
    ctx->pc = 0x393700u;
    // 0x393700: 0x71102d  daddu       $v0, $v1, $s1
    ctx->pc = 0x393700u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 17));
    // 0x393704: 0xfe020040  sd          $v0, 0x40($s0)
    ctx->pc = 0x393704u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
label_393708:
    // 0x393708: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x393708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39370c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x39370cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393710: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x393710u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x393714: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x393714u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x393718: 0x3e00008  jr          $ra
    ctx->pc = 0x393718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393718u;
        // 0x39371c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x393720u;
}
