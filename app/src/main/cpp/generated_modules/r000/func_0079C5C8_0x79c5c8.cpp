#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r000_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r000
{
// Function: func_0079C5C8
// Address: 0x79c5c8 - 0x79c698
void func_0079C5C8_0x79c5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079C5C8_0x79c5c8");
#endif

    switch (ctx->pc) {
        case 0x79c5c8u: goto label_79c5c8;
        case 0x79c5ccu: goto label_79c5cc;
        case 0x79c5d0u: goto label_79c5d0;
        case 0x79c5d4u: goto label_79c5d4;
        case 0x79c5d8u: goto label_79c5d8;
        case 0x79c5dcu: goto label_79c5dc;
        case 0x79c5e0u: goto label_79c5e0;
        case 0x79c5e4u: goto label_79c5e4;
        case 0x79c5e8u: goto label_79c5e8;
        case 0x79c5ecu: goto label_79c5ec;
        case 0x79c5f0u: goto label_79c5f0;
        case 0x79c5f4u: goto label_79c5f4;
        case 0x79c5f8u: goto label_79c5f8;
        case 0x79c5fcu: goto label_79c5fc;
        case 0x79c600u: goto label_79c600;
        case 0x79c604u: goto label_79c604;
        case 0x79c608u: goto label_79c608;
        case 0x79c60cu: goto label_79c60c;
        case 0x79c610u: goto label_79c610;
        case 0x79c614u: goto label_79c614;
        case 0x79c618u: goto label_79c618;
        case 0x79c61cu: goto label_79c61c;
        case 0x79c620u: goto label_79c620;
        case 0x79c624u: goto label_79c624;
        case 0x79c628u: goto label_79c628;
        case 0x79c62cu: goto label_79c62c;
        case 0x79c630u: goto label_79c630;
        case 0x79c634u: goto label_79c634;
        case 0x79c638u: goto label_79c638;
        case 0x79c63cu: goto label_79c63c;
        case 0x79c640u: goto label_79c640;
        case 0x79c644u: goto label_79c644;
        case 0x79c648u: goto label_79c648;
        case 0x79c64cu: goto label_79c64c;
        case 0x79c650u: goto label_79c650;
        case 0x79c654u: goto label_79c654;
        case 0x79c658u: goto label_79c658;
        case 0x79c65cu: goto label_79c65c;
        case 0x79c660u: goto label_79c660;
        case 0x79c664u: goto label_79c664;
        case 0x79c668u: goto label_79c668;
        case 0x79c66cu: goto label_79c66c;
        case 0x79c670u: goto label_79c670;
        case 0x79c674u: goto label_79c674;
        case 0x79c678u: goto label_79c678;
        case 0x79c67cu: goto label_79c67c;
        case 0x79c680u: goto label_79c680;
        case 0x79c684u: goto label_79c684;
        case 0x79c688u: goto label_79c688;
        case 0x79c68cu: goto label_79c68c;
        case 0x79c690u: goto label_79c690;
        case 0x79c694u: goto label_79c694;
        default: break;
    }

    ctx->pc = 0x79c5c8u;

label_79c5c8:
    // 0x79c5c8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79c5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_79c5cc:
    // 0x79c5cc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79c5ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_79c5d0:
    // 0x79c5d0: 0x8c44d6e8  lw          $a0, -0x2918($v0)
    ctx->pc = 0x79c5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956776)));
label_79c5d4:
    // 0x79c5d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79c5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_79c5d8:
    // 0x79c5d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79c5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79c5dc:
    // 0x79c5dc: 0xc051c0a  jal         func_147028
label_79c5e0:
    if (ctx->pc == 0x79C5E0u) {
        ctx->pc = 0x79C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C5DCu;
        // 0x79c5e0: 0x24841a20  addiu       $a0, $a0, 0x1A20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C5E4u;
        goto label_79c5e4;
    }
    ctx->pc = 0x79C5DCu;
    SET_GPR_U32(ctx, 31, 0x79C5E4u);
    ctx->pc = 0x79C5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C5DCu;
    // 0x79c5e0: 0x24841a20  addiu       $a0, $a0, 0x1A20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147028u, 0x79C5DCu, 0x79C5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C5E4u;
label_79c5e4:
    // 0x79c5e4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79c5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_79c5e8:
    // 0x79c5e8: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x79c5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
label_79c5ec:
    // 0x79c5ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x79c5ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79c5f0:
    // 0x79c5f0: 0x24840d20  addiu       $a0, $a0, 0xD20
    ctx->pc = 0x79c5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3360));
label_79c5f4:
    // 0x79c5f4: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x79c5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
label_79c5f8:
    // 0x79c5f8: 0xc07fa28  jal         func_1FE8A0
label_79c5fc:
    if (ctx->pc == 0x79C5FCu) {
        ctx->pc = 0x79C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C5F8u;
        // 0x79c5fc: 0x240503eb  addiu       $a1, $zero, 0x3EB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1003));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C600u;
        goto label_79c600;
    }
    ctx->pc = 0x79C5F8u;
    SET_GPR_U32(ctx, 31, 0x79C600u);
    ctx->pc = 0x79C5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C5F8u;
    // 0x79c5fc: 0x240503eb  addiu       $a1, $zero, 0x3EB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1003));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8A0u, 0x79C5F8u, 0x79C600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C600u;
label_79c600:
    // 0x79c600: 0x240403eb  addiu       $a0, $zero, 0x3EB
    ctx->pc = 0x79c600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1003));
label_79c604:
    // 0x79c604: 0xc0c3ea6  jal         func_30FA98
label_79c608:
    if (ctx->pc == 0x79C608u) {
        ctx->pc = 0x79C608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C604u;
        // 0x79c608: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C60Cu;
        goto label_79c60c;
    }
    ctx->pc = 0x79C604u;
    SET_GPR_U32(ctx, 31, 0x79C60Cu);
    ctx->pc = 0x79C608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C604u;
    // 0x79c608: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x79C604u, 0x79C60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C60Cu;
label_79c60c:
    // 0x79c60c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79c60cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79c610:
    // 0x79c610: 0x5200001d  beql        $s0, $zero, . + 4 + (0x1D << 2)
label_79c614:
    if (ctx->pc == 0x79C614u) {
        ctx->pc = 0x79C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C610u;
        // 0x79c614: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C618u;
        goto label_79c618;
    }
    ctx->pc = 0x79C610u;
    {
        const bool branch_taken_0x79c610 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x79c610) {
            ctx->pc = 0x79C614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C610u;
            // 0x79c614: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C688u;
            goto label_79c688;
        }
    }
    ctx->pc = 0x79C618u;
label_79c618:
    // 0x79c618: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x79c618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_79c61c:
    // 0x79c61c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x79c61cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_79c620:
    // 0x79c620: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x79c620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_79c624:
    // 0x79c624: 0x40f809  jalr        $v0
label_79c628:
    if (ctx->pc == 0x79C628u) {
        ctx->pc = 0x79C628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C624u;
        // 0x79c628: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C62Cu;
        goto label_79c62c;
    }
    ctx->pc = 0x79C624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79C62Cu);
        ctx->pc = 0x79C628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C624u;
        // 0x79c628: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C624u, 0x79C62Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79C62Cu;
label_79c62c:
    // 0x79c62c: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x79c62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_79c630:
    // 0x79c630: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79c630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79c634:
    // 0x79c634: 0x3c0140a8  lui         $at, 0x40A8
    ctx->pc = 0x79c634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16552 << 16));
label_79c638:
    // 0x79c638: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79c638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79c63c:
    // 0x79c63c: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x79c63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
label_79c640:
    // 0x79c640: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x79c640u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_79c644:
    // 0x79c644: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79c644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79c648:
    // 0x79c648: 0x3c01c224  lui         $at, 0xC224
    ctx->pc = 0x79c648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49700 << 16));
label_79c64c:
    // 0x79c64c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x79c64cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_79c650:
    // 0x79c650: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79c650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_79c654:
    // 0x79c654: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79c654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_79c658:
    // 0x79c658: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79c658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_79c65c:
    // 0x79c65c: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x79c65cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_79c660:
    // 0x79c660: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x79c660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_79c664:
    // 0x79c664: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x79c664u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_79c668:
    // 0x79c668: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x79c668u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_79c66c:
    // 0x79c66c: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x79c66cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_79c670:
    // 0x79c670: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x79c670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_79c674:
    // 0x79c674: 0x40f809  jalr        $v0
label_79c678:
    if (ctx->pc == 0x79C678u) {
        ctx->pc = 0x79C678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C674u;
        // 0x79c678: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C67Cu;
        goto label_79c67c;
    }
    ctx->pc = 0x79C674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79C67Cu);
        ctx->pc = 0x79C678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C674u;
        // 0x79c678: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C674u, 0x79C67Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79C67Cu;
label_79c67c:
    // 0x79c67c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x79c67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_79c680:
    // 0x79c680: 0xa2030600  sb          $v1, 0x600($s0)
    ctx->pc = 0x79c680u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1536), (uint8_t)GPR_U32(ctx, 3));
label_79c684:
    // 0x79c684: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79c684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_79c688:
    // 0x79c688: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79c688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79c68c:
    // 0x79c68c: 0x3e00008  jr          $ra
label_79c690:
    if (ctx->pc == 0x79C690u) {
        ctx->pc = 0x79C690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C68Cu;
        // 0x79c690: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C694u;
        goto label_79c694;
    }
    ctx->pc = 0x79C68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C68Cu;
        // 0x79c690: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C68Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C694u;
label_79c694:
    // 0x79c694: 0x0  nop
    ctx->pc = 0x79c694u;
    // NOP
    ctx->pc = 0x79c698u;
}
} // namespace gh_r000
