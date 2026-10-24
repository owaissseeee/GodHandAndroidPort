#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r020_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r020
{
// Function: Quit__5cR020
// Address: 0x799600 - 0x7996d0
void Quit__5cR020_0x799600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Quit__5cR020_0x799600");
#endif

    switch (ctx->pc) {
        case 0x79969cu: goto label_79969c;
        case 0x7996c0u: goto label_7996c0;
        default: break;
    }

    ctx->pc = 0x799600u;

    // 0x799600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x799604: 0x3c080074  lui         $t0, 0x74
    ctx->pc = 0x799604u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)116 << 16));
    // 0x799608: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x799608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79960c: 0x25097a84  addiu       $t1, $t0, 0x7A84
    ctx->pc = 0x79960cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 31364));
    // 0x799610: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799614: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x799614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x799618: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x799618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x79961c: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x79961cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
    // 0x799620: 0x8d22fffc  lw          $v0, -0x4($t1)
    ctx->pc = 0x799620u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A80u));
    // 0x799624: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x799624u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x799628: 0x3c06bfff  lui         $a2, 0xBFFF
    ctx->pc = 0x799628u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49151 << 16));
    // 0x79962c: 0x8d077a84  lw          $a3, 0x7A84($t0)
    ctx->pc = 0x79962cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x747A84u));
    // 0x799630: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x799630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x799634: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x799634u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x799638: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x799638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x79963c: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x79963cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x799640: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x799640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x799644: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x799644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x799648: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x799648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79964c: 0x3c05efff  lui         $a1, 0xEFFF
    ctx->pc = 0x79964cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61439 << 16));
    // 0x799650: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x799650u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x799654: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x799654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x799658: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x799658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x79965c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79965cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x799660: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x799660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x799664: 0x3c05fbff  lui         $a1, 0xFBFF
    ctx->pc = 0x799664u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64511 << 16));
    // 0x799668: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x799668u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x79966c: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x79966cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x799670: 0x3c06f7ff  lui         $a2, 0xF7FF
    ctx->pc = 0x799670u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63487 << 16));
    // 0x799674: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x799674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x799678: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x799678u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x79967c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x79967cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x799680: 0xad077a84  sw          $a3, 0x7A84($t0)
    ctx->pc = 0x799680u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 31364), GPR_U32(ctx, 7));
    // 0x799684: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x799684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x799688: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x799688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79968c: 0xad22fffc  sw          $v0, -0x4($t1)
    ctx->pc = 0x79968cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294967292), GPR_U32(ctx, 2));
    // 0x799690: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x799690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x799694: 0xc0aa81e  jal         func_2AA078
    ctx->pc = 0x799694u;
    SET_GPR_U32(ctx, 31, 0x79969Cu);
    ctx->pc = 0x799698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799694u;
    // 0x799698: 0xad20fa2c  sw          $zero, -0x5D4($t1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294965804), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA078u, 0x799694u, 0x79969Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79969Cu;
label_79969c:
    // 0x79969c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79969cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x7996a0: 0x8c622388  lw          $v0, 0x2388($v1)
    ctx->pc = 0x7996a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2388u));
    // 0x7996a4: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x7996a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x7996a8: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x7996a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x7996ac: 0x8e0500d0  lw          $a1, 0xD0($s0)
    ctx->pc = 0x7996acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x7996b0: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7996B0u;
    {
        const bool branch_taken_0x7996b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996B0u;
        // 0x7996b4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996b0) {
            ctx->pc = 0x7996C4u;
            goto label_7996c4;
        }
    }
    ctx->pc = 0x7996B8u;
    // 0x7996b8: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x7996B8u;
    SET_GPR_U32(ctx, 31, 0x7996C0u);
    ctx->pc = 0x7996BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996B8u;
    // 0x7996bc: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x7996B8u, 0x7996C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996C0u;
label_7996c0:
    // 0x7996c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7996c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7996c4:
    // 0x7996c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7996c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7996c8: 0x3e00008  jr          $ra
    ctx->pc = 0x7996C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7996CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996C8u;
        // 0x7996cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7996C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7996D0u;
}
} // namespace gh_r020
