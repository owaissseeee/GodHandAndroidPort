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

// Function: _sceMpegDispatchMpegCbNodata
// Address: 0x39ab98 - 0x39ac10
void _sceMpegDispatchMpegCbNodata_0x39ab98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceMpegDispatchMpegCbNodata_0x39ab98");
#endif

    switch (ctx->pc) {
        case 0x39ab98u: goto label_39ab98;
        case 0x39ab9cu: goto label_39ab9c;
        case 0x39aba0u: goto label_39aba0;
        case 0x39aba4u: goto label_39aba4;
        case 0x39aba8u: goto label_39aba8;
        case 0x39abacu: goto label_39abac;
        case 0x39abb0u: goto label_39abb0;
        case 0x39abb4u: goto label_39abb4;
        case 0x39abb8u: goto label_39abb8;
        case 0x39abbcu: goto label_39abbc;
        case 0x39abc0u: goto label_39abc0;
        case 0x39abc4u: goto label_39abc4;
        case 0x39abc8u: goto label_39abc8;
        case 0x39abccu: goto label_39abcc;
        case 0x39abd0u: goto label_39abd0;
        case 0x39abd4u: goto label_39abd4;
        case 0x39abd8u: goto label_39abd8;
        case 0x39abdcu: goto label_39abdc;
        case 0x39abe0u: goto label_39abe0;
        case 0x39abe4u: goto label_39abe4;
        case 0x39abe8u: goto label_39abe8;
        case 0x39abecu: goto label_39abec;
        case 0x39abf0u: goto label_39abf0;
        case 0x39abf4u: goto label_39abf4;
        case 0x39abf8u: goto label_39abf8;
        case 0x39abfcu: goto label_39abfc;
        case 0x39ac00u: goto label_39ac00;
        case 0x39ac04u: goto label_39ac04;
        case 0x39ac08u: goto label_39ac08;
        case 0x39ac0cu: goto label_39ac0c;
        default: break;
    }

    ctx->pc = 0x39ab98u;

label_39ab98:
    // 0x39ab98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x39ab98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_39ab9c:
    // 0x39ab9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39aba0:
    // 0x39aba0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x39aba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_39aba4:
    // 0x39aba4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x39aba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_39aba8:
    // 0x39aba8: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_39abac:
    if (ctx->pc == 0x39ABACu) {
        ctx->pc = 0x39ABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ABA8u;
        // 0x39abac: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39ABB0u;
        goto label_39abb0;
    }
    ctx->pc = 0x39ABA8u;
    {
        const bool branch_taken_0x39aba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39ABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ABA8u;
        // 0x39abac: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39aba8) {
            ctx->pc = 0x39ABF8u;
            goto label_39abf8;
        }
    }
    ctx->pc = 0x39ABB0u;
label_39abb0:
    // 0x39abb0: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x39abb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_39abb4:
    // 0x39abb4: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_39abb8:
    if (ctx->pc == 0x39ABB8u) {
        ctx->pc = 0x39ABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ABB4u;
        // 0x39abb8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39ABBCu;
        goto label_39abbc;
    }
    ctx->pc = 0x39ABB4u;
    {
        const bool branch_taken_0x39abb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x39ABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ABB4u;
        // 0x39abb8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39abb4) {
            ctx->pc = 0x39AC00u;
            goto label_39ac00;
        }
    }
    ctx->pc = 0x39ABBCu;
label_39abbc:
    // 0x39abbc: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x39abbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_39abc0:
    // 0x39abc0: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
label_39abc4:
    if (ctx->pc == 0x39ABC4u) {
        ctx->pc = 0x39ABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ABC0u;
        // 0x39abc4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39ABC8u;
        goto label_39abc8;
    }
    ctx->pc = 0x39ABC0u;
    {
        const bool branch_taken_0x39abc0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x39ABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ABC0u;
        // 0x39abc4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39abc0) {
            ctx->pc = 0x39AC04u;
            goto label_39ac04;
        }
    }
    ctx->pc = 0x39ABC8u;
label_39abc8:
    // 0x39abc8: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x39abc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_39abcc:
    // 0x39abcc: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x39abccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_39abd0:
    // 0x39abd0: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x39abd0u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39abd4:
    // 0x39abd4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x39abd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39abd8:
    // 0x39abd8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x39abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_39abdc:
    // 0x39abdc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x39abdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39abe0:
    // 0x39abe0: 0x624018  mult        $t0, $v1, $v0
    ctx->pc = 0x39abe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_39abe4:
    // 0x39abe4: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x39abe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_39abe8:
    // 0x39abe8: 0xe0f809  jalr        $a3
label_39abec:
    if (ctx->pc == 0x39ABECu) {
        ctx->pc = 0x39ABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ABE8u;
        // 0x39abec: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39ABF0u;
        goto label_39abf0;
    }
    ctx->pc = 0x39ABE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x39ABF0u);
        ctx->pc = 0x39ABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ABE8u;
        // 0x39abec: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39ABE8u, 0x39ABF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39ABF0u;
label_39abf0:
    // 0x39abf0: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x39abf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_39abf4:
    // 0x39abf4: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x39abf4u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39abf8:
    // 0x39abf8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x39abf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_39abfc:
    // 0x39abfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39abfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39ac00:
    // 0x39ac00: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x39ac00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39ac04:
    // 0x39ac04: 0x3e00008  jr          $ra
label_39ac08:
    if (ctx->pc == 0x39AC08u) {
        ctx->pc = 0x39AC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AC04u;
        // 0x39ac08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AC0Cu;
        goto label_39ac0c;
    }
    ctx->pc = 0x39AC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39AC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AC04u;
        // 0x39ac08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39AC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39AC0Cu;
label_39ac0c:
    // 0x39ac0c: 0x0  nop
    ctx->pc = 0x39ac0cu;
    // NOP
    ctx->pc = 0x39ac10u;
}
