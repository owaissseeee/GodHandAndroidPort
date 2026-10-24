#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r040_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r040
{
// Function: PrizeDisp__12PetitDevilIdbi
// Address: 0x79a208 - 0x79a288
void PrizeDisp__12PetitDevilIdbi_0x79a208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PrizeDisp__12PetitDevilIdbi_0x79a208");
#endif

    switch (ctx->pc) {
        case 0x79a234u: goto label_79a234;
        case 0x79a244u: goto label_79a244;
        case 0x79a254u: goto label_79a254;
        case 0x79a264u: goto label_79a264;
        case 0x79a270u: goto label_79a270;
        default: break;
    }

    ctx->pc = 0x79a208u;

    // 0x79a208: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79a208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79a20c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x79a20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79a210: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x79a210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x79a214: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x79a214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a218: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x79a218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x79a21c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x79a21cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a220: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x79a220u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a228: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x79a228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a22c: 0xc1e65ac  jal         func_7996B0
    ctx->pc = 0x79A22Cu;
    SET_GPR_U32(ctx, 31, 0x79A234u);
    ctx->pc = 0x79A230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A22Cu;
    // 0x79a230: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7996B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7996B0u, 0x79A22Cu, 0x79A234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A234u;
label_79a234:
    // 0x79a234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a238: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x79a238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a23c: 0xc1e65ac  jal         func_7996B0
    ctx->pc = 0x79A23Cu;
    SET_GPR_U32(ctx, 31, 0x79A244u);
    ctx->pc = 0x79A240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A23Cu;
    // 0x79a240: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7996B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7996B0u, 0x79A23Cu, 0x79A244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A244u;
label_79a244:
    // 0x79a244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a248: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x79a248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a24c: 0xc1e65ac  jal         func_7996B0
    ctx->pc = 0x79A24Cu;
    SET_GPR_U32(ctx, 31, 0x79A254u);
    ctx->pc = 0x79A250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A24Cu;
    // 0x79a250: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7996B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7996B0u, 0x79A24Cu, 0x79A254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A254u;
label_79a254:
    // 0x79a254: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x79a254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a25c: 0xc1e65ac  jal         func_7996B0
    ctx->pc = 0x79A25Cu;
    SET_GPR_U32(ctx, 31, 0x79A264u);
    ctx->pc = 0x79A260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A25Cu;
    // 0x79a260: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7996B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7996B0u, 0x79A25Cu, 0x79A264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A264u;
label_79a264:
    // 0x79a264: 0x26040cd0  addiu       $a0, $s0, 0xCD0
    ctx->pc = 0x79a264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3280));
    // 0x79a268: 0xc0b5952  jal         func_2D6548
    ctx->pc = 0x79A268u;
    SET_GPR_U32(ctx, 31, 0x79A270u);
    ctx->pc = 0x79A26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A268u;
    // 0x79a26c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6548u, 0x79A268u, 0x79A270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A270u;
label_79a270:
    // 0x79a270: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x79a270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a274: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x79a274u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a278: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x79a278u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a27c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a27cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a280: 0x3e00008  jr          $ra
    ctx->pc = 0x79A280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A280u;
        // 0x79a284: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A288u;
}
} // namespace gh_r040
