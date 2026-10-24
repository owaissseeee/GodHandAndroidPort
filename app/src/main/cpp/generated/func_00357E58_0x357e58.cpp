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

// Function: func_00357E58
// Address: 0x357e58 - 0x357ed8
void func_00357E58_0x357e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00357E58_0x357e58");
#endif

    switch (ctx->pc) {
        case 0x357e58u: goto label_357e58;
        case 0x357e5cu: goto label_357e5c;
        case 0x357e60u: goto label_357e60;
        case 0x357e64u: goto label_357e64;
        case 0x357e68u: goto label_357e68;
        case 0x357e6cu: goto label_357e6c;
        case 0x357e70u: goto label_357e70;
        case 0x357e74u: goto label_357e74;
        case 0x357e78u: goto label_357e78;
        case 0x357e7cu: goto label_357e7c;
        case 0x357e80u: goto label_357e80;
        case 0x357e84u: goto label_357e84;
        case 0x357e88u: goto label_357e88;
        case 0x357e8cu: goto label_357e8c;
        case 0x357e90u: goto label_357e90;
        case 0x357e94u: goto label_357e94;
        case 0x357e98u: goto label_357e98;
        case 0x357e9cu: goto label_357e9c;
        case 0x357ea0u: goto label_357ea0;
        case 0x357ea4u: goto label_357ea4;
        case 0x357ea8u: goto label_357ea8;
        case 0x357eacu: goto label_357eac;
        case 0x357eb0u: goto label_357eb0;
        case 0x357eb4u: goto label_357eb4;
        case 0x357eb8u: goto label_357eb8;
        case 0x357ebcu: goto label_357ebc;
        case 0x357ec0u: goto label_357ec0;
        case 0x357ec4u: goto label_357ec4;
        case 0x357ec8u: goto label_357ec8;
        case 0x357eccu: goto label_357ecc;
        case 0x357ed0u: goto label_357ed0;
        case 0x357ed4u: goto label_357ed4;
        default: break;
    }

    ctx->pc = 0x357e58u;

label_357e58:
    // 0x357e58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x357e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_357e5c:
    // 0x357e5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x357e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_357e60:
    // 0x357e60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x357e60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_357e64:
    // 0x357e64: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x357e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_357e68:
    // 0x357e68: 0x8e03200c  lw          $v1, 0x200C($s0)
    ctx->pc = 0x357e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8204)));
label_357e6c:
    // 0x357e6c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x357e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_357e70:
    // 0x357e70: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x357e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_357e74:
    // 0x357e74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x357e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_357e78:
    // 0x357e78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x357e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_357e7c:
    // 0x357e7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x357e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_357e80:
    // 0x357e80: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x357e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_357e84:
    // 0x357e84: 0x26101320  addiu       $s0, $s0, 0x1320
    ctx->pc = 0x357e84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4896));
label_357e88:
    // 0x357e88: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x357e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_357e8c:
    // 0x357e8c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x357e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_357e90:
    // 0x357e90: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x357e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_357e94:
    // 0x357e94: 0x40f809  jalr        $v0
label_357e98:
    if (ctx->pc == 0x357E98u) {
        ctx->pc = 0x357E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357E94u;
        // 0x357e98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357E9Cu;
        goto label_357e9c;
    }
    ctx->pc = 0x357E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x357E9Cu);
        ctx->pc = 0x357E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357E94u;
        // 0x357e98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357E94u, 0x357E9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x357E9Cu;
label_357e9c:
    // 0x357e9c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x357e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_357ea0:
    // 0x357ea0: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x357ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_357ea4:
    // 0x357ea4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x357ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_357ea8:
    // 0x357ea8: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_357eac:
    if (ctx->pc == 0x357EACu) {
        ctx->pc = 0x357EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357EA8u;
        // 0x357eac: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x357EB0u;
        goto label_357eb0;
    }
    ctx->pc = 0x357EA8u;
    {
        const bool branch_taken_0x357ea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x357ea8) {
            ctx->pc = 0x357EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357EA8u;
            // 0x357eac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x357EB0u;
            goto label_357eb0;
        }
    }
    ctx->pc = 0x357EB0u;
label_357eb0:
    // 0x357eb0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x357eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_357eb4:
    // 0x357eb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x357eb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_357eb8:
    // 0x357eb8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x357eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_357ebc:
    // 0x357ebc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x357ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_357ec0:
    // 0x357ec0: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x357ec0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_357ec4:
    // 0x357ec4: 0x1812  mflo        $v1
    ctx->pc = 0x357ec4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_357ec8:
    // 0x357ec8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x357ec8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_357ecc:
    // 0x357ecc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x357eccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_357ed0:
    // 0x357ed0: 0x3e00008  jr          $ra
label_357ed4:
    if (ctx->pc == 0x357ED4u) {
        ctx->pc = 0x357ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357ED0u;
        // 0x357ed4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357ED8u;
        goto label_fallthrough_0x357ed0;
    }
    ctx->pc = 0x357ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357ED0u;
        // 0x357ed4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x357ed0:
    ctx->pc = 0x357ED8u;
}
