#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r205_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r205
{
// Function: func_0079A080
// Address: 0x79a080 - 0x79a168
void func_0079A080_0x79a080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A080_0x79a080");
#endif

    switch (ctx->pc) {
        case 0x79a0a8u: goto label_79a0a8;
        case 0x79a0b8u: goto label_79a0b8;
        case 0x79a0c4u: goto label_79a0c4;
        case 0x79a0ccu: goto label_79a0cc;
        case 0x79a0dcu: goto label_79a0dc;
        case 0x79a0ecu: goto label_79a0ec;
        case 0x79a100u: goto label_79a100;
        case 0x79a108u: goto label_79a108;
        case 0x79a114u: goto label_79a114;
        case 0x79a120u: goto label_79a120;
        case 0x79a12cu: goto label_79a12c;
        case 0x79a134u: goto label_79a134;
        case 0x79a148u: goto label_79a148;
        case 0x79a154u: goto label_79a154;
        default: break;
    }

    ctx->pc = 0x79a080u;

    // 0x79a080: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79a080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79a084: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x79a084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x79a088: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x79a088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79a08c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a090: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79a090u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x79a094: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x79a094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x79a098: 0x8e04a680  lw          $a0, -0x5980($s0)
    ctx->pc = 0x79a098u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x79A680u));
    // 0x79a09c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79a09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79a0a0: 0xc0b038a  jal         func_2C0E28
    ctx->pc = 0x79A0A0u;
    SET_GPR_U32(ctx, 31, 0x79A0A8u);
    ctx->pc = 0x79A0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0A0u;
    // 0x79a0a4: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0E28u, 0x79A0A0u, 0x79A0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0A8u;
label_79a0a8:
    // 0x79a0a8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x79a0a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0ac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79A0ACu;
    {
        const bool branch_taken_0x79a0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0ACu;
        // 0x79a0b0: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0ac) {
            ctx->pc = 0x79A0C4u;
            goto label_79a0c4;
        }
    }
    ctx->pc = 0x79A0B4u;
    // 0x79a0b4: 0x0  nop
    ctx->pc = 0x79a0b4u;
    // NOP
label_79a0b8:
    // 0x79a0b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a0bc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A0BCu;
    SET_GPR_U32(ctx, 31, 0x79A0C4u);
    ctx->pc = 0x79A0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0BCu;
    // 0x79a0c0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A0BCu, 0x79A0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0C4u;
label_79a0c4:
    // 0x79a0c4: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79A0C4u;
    SET_GPR_U32(ctx, 31, 0x79A0CCu);
    ctx->pc = 0x79A0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0C4u;
    // 0x79a0c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A0C4u, 0x79A0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0CCu;
label_79a0cc:
    // 0x79a0cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A0CCu;
    {
        const bool branch_taken_0x79a0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0CCu;
        // 0x79a0d0: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0cc) {
            ctx->pc = 0x79A0E4u;
            goto label_79a0e4;
        }
    }
    ctx->pc = 0x79A0D4u;
    // 0x79a0d4: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A0D4u;
    SET_GPR_U32(ctx, 31, 0x79A0DCu);
    ctx->pc = 0x79A0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0D4u;
    // 0x79a0d8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A0D4u, 0x79A0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0DCu;
label_79a0dc:
    // 0x79a0dc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x79A0DCu;
    {
        const bool branch_taken_0x79a0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0DCu;
        // 0x79a0e0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0dc) {
            ctx->pc = 0x79A158u;
            goto label_79a158;
        }
    }
    ctx->pc = 0x79A0E4u;
label_79a0e4:
    // 0x79a0e4: 0xc1e685a  jal         func_79A168
    ctx->pc = 0x79A0E4u;
    SET_GPR_U32(ctx, 31, 0x79A0ECu);
    ctx->pc = 0x79A168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A168u, 0x79A0E4u, 0x79A0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0ECu;
label_79a0ec:
    // 0x79a0ec: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x79A0ECu;
    {
        const bool branch_taken_0x79a0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0ECu;
        // 0x79a0f0: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0ec) {
            ctx->pc = 0x79A0B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a0b8;
        }
    }
    ctx->pc = 0x79A0F4u;
    // 0x79a0f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0f8: 0xc0a578e  jal         func_295E38
    ctx->pc = 0x79A0F8u;
    SET_GPR_U32(ctx, 31, 0x79A100u);
    ctx->pc = 0x79A0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0F8u;
    // 0x79a0fc: 0x24050919  addiu       $a1, $zero, 0x919 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2329));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x79A0F8u, 0x79A100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A100u;
label_79a100:
    // 0x79a100: 0xc0a5860  jal         func_296180
    ctx->pc = 0x79A100u;
    SET_GPR_U32(ctx, 31, 0x79A108u);
    ctx->pc = 0x79A104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A100u;
    // 0x79a104: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296180u, 0x79A100u, 0x79A108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A108u;
label_79a108:
    // 0x79a108: 0x8e24a680  lw          $a0, -0x5980($s1)
    ctx->pc = 0x79a108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294944384)));
    // 0x79a10c: 0xc0b037a  jal         func_2C0DE8
    ctx->pc = 0x79A10Cu;
    SET_GPR_U32(ctx, 31, 0x79A114u);
    ctx->pc = 0x79A110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A10Cu;
    // 0x79a110: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DE8u, 0x79A10Cu, 0x79A114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A114u;
label_79a114:
    // 0x79a114: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79A114u;
    {
        const bool branch_taken_0x79a114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a114) {
            ctx->pc = 0x79A12Cu;
            goto label_79a12c;
        }
    }
    ctx->pc = 0x79A11Cu;
    // 0x79a11c: 0x0  nop
    ctx->pc = 0x79a11cu;
    // NOP
label_79a120:
    // 0x79a120: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a124: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A124u;
    SET_GPR_U32(ctx, 31, 0x79A12Cu);
    ctx->pc = 0x79A128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A124u;
    // 0x79a128: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A124u, 0x79A12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A12Cu;
label_79a12c:
    // 0x79a12c: 0xc0a5772  jal         func_295DC8
    ctx->pc = 0x79A12Cu;
    SET_GPR_U32(ctx, 31, 0x79A134u);
    ctx->pc = 0x79A130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A12Cu;
    // 0x79a130: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DC8u, 0x79A12Cu, 0x79A134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A134u;
label_79a134:
    // 0x79a134: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79A134u;
    {
        const bool branch_taken_0x79a134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A134u;
        // 0x79a138: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a134) {
            ctx->pc = 0x79A120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a120;
        }
    }
    ctx->pc = 0x79A13Cu;
    // 0x79a13c: 0x8e24a680  lw          $a0, -0x5980($s1)
    ctx->pc = 0x79a13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294944384)));
    // 0x79a140: 0xc0b038a  jal         func_2C0E28
    ctx->pc = 0x79A140u;
    SET_GPR_U32(ctx, 31, 0x79A148u);
    ctx->pc = 0x79A144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A140u;
    // 0x79a144: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0E28u, 0x79A140u, 0x79A148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A148u;
label_79a148:
    // 0x79a148: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79a148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a14c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A14Cu;
    SET_GPR_U32(ctx, 31, 0x79A154u);
    ctx->pc = 0x79A150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A14Cu;
    // 0x79a150: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A14Cu, 0x79A154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A154u;
label_79a154:
    // 0x79a154: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x79a154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_79a158:
    // 0x79a158: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x79a158u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a15c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79a15cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a160: 0x3e00008  jr          $ra
    ctx->pc = 0x79A160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A160u;
        // 0x79a164: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A168u;
}
} // namespace gh_r205
