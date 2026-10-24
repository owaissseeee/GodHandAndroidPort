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

// Function: func_0034DB60
// Address: 0x34db60 - 0x34dbc8
void func_0034DB60_0x34db60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034DB60_0x34db60");
#endif

    switch (ctx->pc) {
        case 0x34db94u: goto label_34db94;
        case 0x34db9cu: goto label_34db9c;
        case 0x34dbacu: goto label_34dbac;
        case 0x34dbb4u: goto label_34dbb4;
        default: break;
    }

    ctx->pc = 0x34db60u;

    // 0x34db60: 0x3c030076  lui         $v1, 0x76
    ctx->pc = 0x34db60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)118 << 16));
    // 0x34db64: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x34db64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x34db68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34db68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34db6c: 0x24632054  addiu       $v1, $v1, 0x2054
    ctx->pc = 0x34db6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8276));
    // 0x34db70: 0x244295c0  addiu       $v0, $v0, -0x6A40
    ctx->pc = 0x34db70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940096));
    // 0x34db74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34db74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34db78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x34db78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x34db7c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x34db7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x34db80: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34db80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x762054u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x762054u, _value); } while (0);
    // 0x34db84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34db84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34db88: 0x240437b0  addiu       $a0, $zero, 0x37B0
    ctx->pc = 0x34db88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14256));
    // 0x34db8c: 0xc0d37bc  jal         func_34DEF0
    ctx->pc = 0x34DB8Cu;
    SET_GPR_U32(ctx, 31, 0x34DB94u);
    ctx->pc = 0x34DB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DB8Cu;
    // 0x34db90: 0xaca4e2e4  sw          $a0, -0x1D1C($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294959844), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEF0u, 0x34DB8Cu, 0x34DB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DB94u;
label_34db94:
    // 0x34db94: 0xc0d36f2  jal         func_34DBC8
    ctx->pc = 0x34DB94u;
    SET_GPR_U32(ctx, 31, 0x34DB9Cu);
    ctx->pc = 0x34DB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DB94u;
    // 0x34db98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DBC8u, 0x34DB94u, 0x34DB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DB9Cu;
label_34db9c:
    // 0x34db9c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x34DB9Cu;
    {
        const bool branch_taken_0x34db9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34db9c) {
            ctx->pc = 0x34DBA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34DB9Cu;
            // 0x34dba0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34DBBCu;
            goto label_34dbbc;
        }
    }
    ctx->pc = 0x34DBA4u;
    // 0x34dba4: 0xc0d37c8  jal         func_34DF20
    ctx->pc = 0x34DBA4u;
    SET_GPR_U32(ctx, 31, 0x34DBACu);
    ctx->pc = 0x34DF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF20u, 0x34DBA4u, 0x34DBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DBACu;
label_34dbac:
    // 0x34dbac: 0xc0d37d6  jal         func_34DF58
    ctx->pc = 0x34DBACu;
    SET_GPR_U32(ctx, 31, 0x34DBB4u);
    ctx->pc = 0x34DF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF58u, 0x34DBACu, 0x34DBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DBB4u;
label_34dbb4:
    // 0x34dbb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34dbb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34dbb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34dbb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34dbbc:
    // 0x34dbbc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x34dbbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34dbc0: 0x3e00008  jr          $ra
    ctx->pc = 0x34DBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34DBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DBC0u;
        // 0x34dbc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34DBC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34DBC8u;
}
