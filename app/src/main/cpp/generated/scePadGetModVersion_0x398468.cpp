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

// Function: scePadGetModVersion
// Address: 0x398468 - 0x3984d8
void scePadGetModVersion_0x398468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scePadGetModVersion_0x398468");
#endif

    switch (ctx->pc) {
        case 0x3984b0u: goto label_3984b0;
        default: break;
    }

    ctx->pc = 0x398468u;

    // 0x398468: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x398468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39846c: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x39846cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x398470: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x398470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x398474: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x398474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x398478: 0x2450c300  addiu       $s0, $v0, -0x3D00
    ctx->pc = 0x398478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951680));
    // 0x39847c: 0x3c040078  lui         $a0, 0x78
    ctx->pc = 0x39847cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)120 << 16));
    // 0x398480: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x398480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x398484: 0x2484c0c0  addiu       $a0, $a0, -0x3F40
    ctx->pc = 0x398484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951104));
    // 0x398488: 0xac43c300  sw          $v1, -0x3D00($v0)
    ctx->pc = 0x398488u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x77C300u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x77C300u, _value); } while (0);
    // 0x39848c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39848cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x398490: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x398490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x398494: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x398494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398498: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x398498u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39849c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x39849cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3984a0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x3984a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3984a4: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x3984a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3984a8: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x3984A8u;
    SET_GPR_U32(ctx, 31, 0x3984B0u);
    ctx->pc = 0x3984ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3984A8u;
    // 0x3984ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x3984A8u, 0x3984B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3984B0u;
label_3984b0:
    // 0x3984b0: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3984B0u;
    {
        const bool branch_taken_0x3984b0 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x3984b0) {
            ctx->pc = 0x3984B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3984B0u;
            // 0x3984b4: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3984BCu;
            goto label_3984bc;
        }
    }
    ctx->pc = 0x3984B8u;
    // 0x3984b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3984b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3984bc:
    // 0x3984bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3984bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3984c0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3984c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3984c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3984C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3984C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3984C4u;
        // 0x3984c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3984C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3984CCu;
    // 0x3984cc: 0x0  nop
    ctx->pc = 0x3984ccu;
    // NOP
    // 0x3984d0: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x3984d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3984d4: 0x0  nop
    ctx->pc = 0x3984d4u;
    // NOP
    ctx->pc = 0x3984d8u;
}
