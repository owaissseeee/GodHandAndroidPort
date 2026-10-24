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

// Function: func_0035A968
// Address: 0x35a968 - 0x35a9c8
void func_0035A968_0x35a968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035A968_0x35a968");
#endif

    switch (ctx->pc) {
        case 0x35a98cu: goto label_35a98c;
        case 0x35a99cu: goto label_35a99c;
        default: break;
    }

    ctx->pc = 0x35a968u;

    // 0x35a968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35a968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35a96c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a970: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35a970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35a974: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35a974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35a978: 0xdc900158  ld          $s0, 0x158($a0)
    ctx->pc = 0x35a978u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x35a97c: 0x600000e  bltz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x35A97Cu;
    {
        const bool branch_taken_0x35a97c = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x35A980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A97Cu;
        // 0x35a980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a97c) {
            ctx->pc = 0x35A9B8u;
            goto label_35a9b8;
        }
    }
    ctx->pc = 0x35A984u;
    // 0x35a984: 0xc0c7784  jal         func_31DE10
    ctx->pc = 0x35A984u;
    SET_GPR_U32(ctx, 31, 0x35A98Cu);
    ctx->pc = 0x31DE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DE10u, 0x35A984u, 0x35A98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A98Cu;
label_35a98c:
    // 0x35a98c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x35a98cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x35a990: 0x34a55f90  ori         $a1, $a1, 0x5F90
    ctx->pc = 0x35a990u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24464);
    // 0x35a994: 0xc0edff8  jal         func_3B7FE0
    ctx->pc = 0x35A994u;
    SET_GPR_U32(ctx, 31, 0x35A99Cu);
    ctx->pc = 0x35A998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A994u;
    // 0x35a998: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7FE0u, 0x35A994u, 0x35A99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A99Cu;
label_35a99c:
    // 0x35a99c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x35a99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x35a9a0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x35a9a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35a9a4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x35a9a4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x35a9a8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x35a9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x35a9ac: 0xfc70e308  sd          $s0, -0x1CF8($v1)
    ctx->pc = 0x35a9acu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294959880), GPR_U64(ctx, 16));
    // 0x35a9b0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x35a9b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a9b4: 0xaca4e310  sw          $a0, -0x1CF0($a1)
    ctx->pc = 0x35a9b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3EE310u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EE310u, _value); } while (0);
label_35a9b8:
    // 0x35a9b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a9b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a9bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35a9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a9c0: 0x3e00008  jr          $ra
    ctx->pc = 0x35A9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A9C0u;
        // 0x35a9c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A9C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A9C8u;
}
