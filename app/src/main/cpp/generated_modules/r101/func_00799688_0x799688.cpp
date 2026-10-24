#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r101_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r101
{
// Function: func_00799688
// Address: 0x799688 - 0x799728
void func_00799688_0x799688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799688_0x799688");
#endif

    switch (ctx->pc) {
        case 0x7996e0u: goto label_7996e0;
        case 0x7996f0u: goto label_7996f0;
        case 0x799704u: goto label_799704;
        case 0x799714u: goto label_799714;
        default: break;
    }

    ctx->pc = 0x799688u;

    // 0x799688: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x799688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79968c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79968cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x799690: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x799690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x799694: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x799694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x799698: 0x245064f0  addiu       $s0, $v0, 0x64F0
    ctx->pc = 0x799698u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x79969c: 0x3c01bf07  lui         $at, 0xBF07
    ctx->pc = 0x79969cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48903 << 16));
    // 0x7996a0: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x7996a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
    // 0x7996a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7996a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7996a8: 0x3c01c244  lui         $at, 0xC244
    ctx->pc = 0x7996a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49732 << 16));
    // 0x7996ac: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x7996acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x7996b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7996b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7996b4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x7996b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x7996b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7996b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7996bc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x7996bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x7996c0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x7996c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x7996c4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x7996c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x7996c8: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x7996c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x7996cc: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x7996ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x7996d0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x7996d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x7996d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x7996d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x7996d8: 0xc0a421a  jal         func_290868
    ctx->pc = 0x7996D8u;
    SET_GPR_U32(ctx, 31, 0x7996E0u);
    ctx->pc = 0x7996DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996D8u;
    // 0x7996dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x7996D8u, 0x7996E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996E0u;
label_7996e0:
    // 0x7996e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7996E0u;
    {
        const bool branch_taken_0x7996e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996E0u;
        // 0x7996e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996e0) {
            ctx->pc = 0x7996F0u;
            goto label_7996f0;
        }
    }
    ctx->pc = 0x7996E8u;
    // 0x7996e8: 0xc0a240e  jal         func_289038
    ctx->pc = 0x7996E8u;
    SET_GPR_U32(ctx, 31, 0x7996F0u);
    ctx->pc = 0x7996ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996E8u;
    // 0x7996ec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289038u, 0x7996E8u, 0x7996F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996F0u;
label_7996f0:
    // 0x7996f0: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x7996f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x7996f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7996f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996f8: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x7996f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x7996fc: 0xc0a421a  jal         func_290868
    ctx->pc = 0x7996FCu;
    SET_GPR_U32(ctx, 31, 0x799704u);
    ctx->pc = 0x799700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996FCu;
    // 0x799700: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x7996FCu, 0x799704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799704u;
label_799704:
    // 0x799704: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799704u;
    {
        const bool branch_taken_0x799704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799704u;
        // 0x799708: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799704) {
            ctx->pc = 0x799714u;
            goto label_799714;
        }
    }
    ctx->pc = 0x79970Cu;
    // 0x79970c: 0xc0a240e  jal         func_289038
    ctx->pc = 0x79970Cu;
    SET_GPR_U32(ctx, 31, 0x799714u);
    ctx->pc = 0x799710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79970Cu;
    // 0x799710: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289038u, 0x79970Cu, 0x799714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799714u;
label_799714:
    // 0x799714: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x799714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799718: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x799718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79971c: 0x3e00008  jr          $ra
    ctx->pc = 0x79971Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79971Cu;
        // 0x799720: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79971Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799724u;
    // 0x799724: 0x0  nop
    ctx->pc = 0x799724u;
    // NOP
    ctx->pc = 0x799728u;
}
} // namespace gh_r101
