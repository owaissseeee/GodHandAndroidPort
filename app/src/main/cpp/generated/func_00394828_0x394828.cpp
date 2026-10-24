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

// Function: func_00394828
// Address: 0x394828 - 0x394c18
void func_00394828_0x394828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00394828_0x394828");
#endif

    switch (ctx->pc) {
        case 0x3948e0u: goto label_3948e0;
        case 0x394940u: goto label_394940;
        case 0x39495cu: goto label_39495c;
        case 0x394978u: goto label_394978;
        case 0x394988u: goto label_394988;
        case 0x3949c0u: goto label_3949c0;
        case 0x3949c8u: goto label_3949c8;
        case 0x394a30u: goto label_394a30;
        case 0x394aa0u: goto label_394aa0;
        case 0x394accu: goto label_394acc;
        case 0x394ae4u: goto label_394ae4;
        case 0x394b40u: goto label_394b40;
        case 0x394b74u: goto label_394b74;
        case 0x394b98u: goto label_394b98;
        case 0x394bd0u: goto label_394bd0;
        case 0x394bf0u: goto label_394bf0;
        default: break;
    }

    ctx->pc = 0x394828u;

    // 0x394828: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x394828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x39482c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x39482cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x394830: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x394830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x394834: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x394834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x394838: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x394838u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39483c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x39483cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x394840: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x394840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x394844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x394844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x394848: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x394848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x39484c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39484Cu;
    {
        const bool branch_taken_0x39484c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x394850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39484Cu;
        // 0x394850: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39484c) {
            ctx->pc = 0x39485Cu;
            goto label_39485c;
        }
    }
    ctx->pc = 0x394854u;
    // 0x394854: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x394854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x394858: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x394858u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_39485c:
    // 0x39485c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x39485cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x394860: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x394860u;
    {
        const bool branch_taken_0x394860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x394864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394860u;
        // 0x394864: 0x521021  addu        $v0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394860) {
            ctx->pc = 0x39486Cu;
            goto label_39486c;
        }
    }
    ctx->pc = 0x394868u;
    // 0x394868: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x394868u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_39486c:
    // 0x39486c: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x39486cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x394870: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x394870u;
    {
        const bool branch_taken_0x394870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x394874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394870u;
        // 0x394874: 0x521021  addu        $v0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394870) {
            ctx->pc = 0x39487Cu;
            goto label_39487c;
        }
    }
    ctx->pc = 0x394878u;
    // 0x394878: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x394878u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
label_39487c:
    // 0x39487c: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x39487cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x394880: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x394880u;
    {
        const bool branch_taken_0x394880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x394884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394880u;
        // 0x394884: 0x521021  addu        $v0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394880) {
            ctx->pc = 0x39488Cu;
            goto label_39488c;
        }
    }
    ctx->pc = 0x394888u;
    // 0x394888: 0xae620018  sw          $v0, 0x18($s3)
    ctx->pc = 0x394888u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
label_39488c:
    // 0x39488c: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x39488cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x394890: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x394890u;
    {
        const bool branch_taken_0x394890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x394894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394890u;
        // 0x394894: 0x521021  addu        $v0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394890) {
            ctx->pc = 0x39489Cu;
            goto label_39489c;
        }
    }
    ctx->pc = 0x394898u;
    // 0x394898: 0xae62001c  sw          $v0, 0x1C($s3)
    ctx->pc = 0x394898u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
label_39489c:
    // 0x39489c: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x39489cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x3948a0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3948A0u;
    {
        const bool branch_taken_0x3948a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3948A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3948A0u;
        // 0x3948a4: 0x521021  addu        $v0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3948a0) {
            ctx->pc = 0x3948ACu;
            goto label_3948ac;
        }
    }
    ctx->pc = 0x3948A8u;
    // 0x3948a8: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x3948a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
label_3948ac:
    // 0x3948ac: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x3948acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x3948b0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3948B0u;
    {
        const bool branch_taken_0x3948b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3948B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3948B0u;
        // 0x3948b4: 0x521021  addu        $v0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3948b0) {
            ctx->pc = 0x3948BCu;
            goto label_3948bc;
        }
    }
    ctx->pc = 0x3948B8u;
    // 0x3948b8: 0xae620034  sw          $v0, 0x34($s3)
    ctx->pc = 0x3948b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 2));
label_3948bc:
    // 0x3948bc: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x3948bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x3948c0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3948C0u;
    {
        const bool branch_taken_0x3948c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3948C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3948C0u;
        // 0x3948c4: 0x521021  addu        $v0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3948c0) {
            ctx->pc = 0x3948CCu;
            goto label_3948cc;
        }
    }
    ctx->pc = 0x3948C8u;
    // 0x3948c8: 0xae620038  sw          $v0, 0x38($s3)
    ctx->pc = 0x3948c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 2));
label_3948cc:
    // 0x3948cc: 0x8e710010  lw          $s1, 0x10($s3)
    ctx->pc = 0x3948ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x3948d0: 0xae600030  sw          $zero, 0x30($s3)
    ctx->pc = 0x3948d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
    // 0x3948d4: 0x12200034  beqz        $s1, . + 4 + (0x34 << 2)
    ctx->pc = 0x3948D4u;
    {
        const bool branch_taken_0x3948d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3948D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3948D4u;
        // 0x3948d8: 0x8e70000c  lw          $s0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3948d4) {
            ctx->pc = 0x3949A8u;
            goto label_3949a8;
        }
    }
    ctx->pc = 0x3948DCu;
    // 0x3948dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3948dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3948e0:
    // 0x3948e0: 0x9204000a  lbu         $a0, 0xA($s0)
    ctx->pc = 0x3948e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x3948e4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3948e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3948e8: 0xa200000b  sb          $zero, 0xB($s0)
    ctx->pc = 0x3948e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x3948ec: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x3948ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x3948f0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3948F0u;
    {
        const bool branch_taken_0x3948f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3948F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3948F0u;
        // 0x3948f4: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3948f0) {
            ctx->pc = 0x394914u;
            goto label_394914;
        }
    }
    ctx->pc = 0x3948F8u;
    // 0x3948f8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3948f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3948fc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3948fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x394900: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x394900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x394904: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x394904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x394908: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x394908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39490c: 0x800008  jr          $a0
    ctx->pc = 0x39490Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x39491Cu: goto label_39491c;
            case 0x39492Cu: goto label_39492c;
            case 0x394950u: goto label_394950;
            case 0x394964u: goto label_394964;
            case 0x394980u: goto label_394980;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39490Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x394914u;
label_394914:
    // 0x394914: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x394914u;
    {
        const bool branch_taken_0x394914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394914u;
        // 0x394918: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394914) {
            ctx->pc = 0x394BF4u;
            goto label_394bf4;
        }
    }
    ctx->pc = 0x39491Cu;
label_39491c:
    // 0x39491c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x39491cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x394920: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x394920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x394924: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x394924u;
    {
        const bool branch_taken_0x394924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394924u;
        // 0x394928: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394924) {
            ctx->pc = 0x394998u;
            goto label_394998;
        }
    }
    ctx->pc = 0x39492Cu;
label_39492c:
    // 0x39492c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x39492cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x394930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x394930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394934: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x394934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x394938: 0xc0e513a  jal         func_3944E8
    ctx->pc = 0x394938u;
    SET_GPR_U32(ctx, 31, 0x394940u);
    ctx->pc = 0x39493Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394938u;
    // 0x39493c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3944E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3944E8u, 0x394938u, 0x394940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394940u;
label_394940:
    // 0x394940: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x394940u;
    {
        const bool branch_taken_0x394940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x394944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394940u;
        // 0x394944: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394940) {
            ctx->pc = 0x39499Cu;
            goto label_39499c;
        }
    }
    ctx->pc = 0x394948u;
    // 0x394948: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x394948u;
    {
        const bool branch_taken_0x394948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394948u;
        // 0x39494c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394948) {
            ctx->pc = 0x394BF4u;
            goto label_394bf4;
        }
    }
    ctx->pc = 0x394950u;
label_394950:
    // 0x394950: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x394950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x394954: 0xc0e4ff6  jal         func_393FD8
    ctx->pc = 0x394954u;
    SET_GPR_U32(ctx, 31, 0x39495Cu);
    ctx->pc = 0x394958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394954u;
    // 0x394958: 0x96050008  lhu         $a1, 0x8($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393FD8u, 0x394954u, 0x39495Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39495Cu;
label_39495c:
    // 0x39495c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x39495Cu;
    {
        const bool branch_taken_0x39495c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39495Cu;
        // 0x394960: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39495c) {
            ctx->pc = 0x394998u;
            goto label_394998;
        }
    }
    ctx->pc = 0x394964u;
label_394964:
    // 0x394964: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x394964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x394968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x394968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39496c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x39496cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x394970: 0xc0e5170  jal         func_3945C0
    ctx->pc = 0x394970u;
    SET_GPR_U32(ctx, 31, 0x394978u);
    ctx->pc = 0x394974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394970u;
    // 0x394974: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3945C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3945C0u, 0x394970u, 0x394978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394978u;
label_394978:
    // 0x394978: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x394978u;
    {
        const bool branch_taken_0x394978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394978u;
        // 0x39497c: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394978) {
            ctx->pc = 0x39499Cu;
            goto label_39499c;
        }
    }
    ctx->pc = 0x394980u;
label_394980:
    // 0x394980: 0xc0e513a  jal         func_3944E8
    ctx->pc = 0x394980u;
    SET_GPR_U32(ctx, 31, 0x394988u);
    ctx->pc = 0x394984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394980u;
    // 0x394984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3944E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3944E8u, 0x394980u, 0x394988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394988u;
label_394988:
    // 0x394988: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x394988u;
    {
        const bool branch_taken_0x394988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394988u;
        // 0x39498c: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394988) {
            ctx->pc = 0x39499Cu;
            goto label_39499c;
        }
    }
    ctx->pc = 0x394990u;
    // 0x394990: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x394990u;
    {
        const bool branch_taken_0x394990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394990u;
        // 0x394994: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394990) {
            ctx->pc = 0x394BF4u;
            goto label_394bf4;
        }
    }
    ctx->pc = 0x394998u;
label_394998:
    // 0x394998: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x394998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_39499c:
    // 0x39499c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x39499cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3949a0: 0x5620ffcf  bnel        $s1, $zero, . + 4 + (-0x31 << 2)
    ctx->pc = 0x3949A0u;
    {
        const bool branch_taken_0x3949a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3949a0) {
            ctx->pc = 0x3949A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3949A0u;
            // 0x3949a4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3948E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3948e0;
        }
    }
    ctx->pc = 0x3949A8u;
label_3949a8:
    // 0x3949a8: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x3949a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x3949ac: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x3949ACu;
    {
        const bool branch_taken_0x3949ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3949B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3949ACu;
        // 0x3949b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3949ac) {
            ctx->pc = 0x394B2Cu;
            goto label_394b2c;
        }
    }
    ctx->pc = 0x3949B4u;
    // 0x3949b4: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x3949B4u;
    {
        const bool branch_taken_0x3949b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3949B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3949B4u;
        // 0x3949b8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3949b4) {
            ctx->pc = 0x394AE4u;
            goto label_394ae4;
        }
    }
    ctx->pc = 0x3949BCu;
    // 0x3949bc: 0x0  nop
    ctx->pc = 0x3949bcu;
    // NOP
label_3949c0:
    // 0x3949c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3949C0u;
    {
        const bool branch_taken_0x3949c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3949C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3949C0u;
        // 0x3949c4: 0x728821  addu        $s1, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3949c0) {
            ctx->pc = 0x3949CCu;
            goto label_3949cc;
        }
    }
    ctx->pc = 0x3949C8u;
label_3949c8:
    // 0x3949c8: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x3949c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_3949cc:
    // 0x3949cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3949ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3949d0: 0x10c20010  beq         $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3949D0u;
    {
        const bool branch_taken_0x3949d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3949D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3949D0u;
        // 0x3949d4: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3949d0) {
            ctx->pc = 0x394A14u;
            goto label_394a14;
        }
    }
    ctx->pc = 0x3949D8u;
    // 0x3949d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3949D8u;
    {
        const bool branch_taken_0x3949d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3949DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3949D8u;
        // 0x3949dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3949d8) {
            ctx->pc = 0x3949F0u;
            goto label_3949f0;
        }
    }
    ctx->pc = 0x3949E0u;
    // 0x3949e0: 0x50c00009  beql        $a2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3949E0u;
    {
        const bool branch_taken_0x3949e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3949e0) {
            ctx->pc = 0x3949E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3949E0u;
            // 0x3949e4: 0x96260000  lhu         $a2, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394A08u;
            goto label_394a08;
        }
    }
    ctx->pc = 0x3949E8u;
    // 0x3949e8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x3949E8u;
    {
        const bool branch_taken_0x3949e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3949ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3949E8u;
        // 0x3949ec: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3949e8) {
            ctx->pc = 0x394AE8u;
            goto label_394ae8;
        }
    }
    ctx->pc = 0x3949F0u;
label_3949f0:
    // 0x3949f0: 0x10c2002d  beq         $a2, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x3949F0u;
    {
        const bool branch_taken_0x3949f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3949F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3949F0u;
        // 0x3949f4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3949f0) {
            ctx->pc = 0x394AA8u;
            goto label_394aa8;
        }
    }
    ctx->pc = 0x3949F8u;
    // 0x3949f8: 0x50c20036  beql        $a2, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x3949F8u;
    {
        const bool branch_taken_0x3949f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x3949f8) {
            ctx->pc = 0x3949FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3949F8u;
            // 0x3949fc: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394AD4u;
            goto label_394ad4;
        }
    }
    ctx->pc = 0x394A00u;
    // 0x394a00: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x394A00u;
    {
        const bool branch_taken_0x394a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394A00u;
        // 0x394a04: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394a00) {
            ctx->pc = 0x394AE8u;
            goto label_394ae8;
        }
    }
    ctx->pc = 0x394A08u;
label_394a08:
    // 0x394a08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x394a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394a0c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x394A0Cu;
    {
        const bool branch_taken_0x394a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394A0Cu;
        // 0x394a10: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394a0c) {
            ctx->pc = 0x394AC4u;
            goto label_394ac4;
        }
    }
    ctx->pc = 0x394A14u;
label_394a14:
    // 0x394a14: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x394a14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x394a18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x394a18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394a1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x394a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394a20: 0x2409fffc  addiu       $t1, $zero, -0x4
    ctx->pc = 0x394a20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x394a24: 0x23c00  sll         $a3, $v0, 16
    ctx->pc = 0x394a24u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x394a28: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x394a28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x394a2c: 0x0  nop
    ctx->pc = 0x394a2cu;
    // NOP
label_394a30:
    // 0x394a30: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x394a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x394a34: 0x30480003  andi        $t0, $v0, 0x3
    ctx->pc = 0x394a34u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x394a38: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x394a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x394a3c: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x394A3Cu;
    {
        const bool branch_taken_0x394a3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x394A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394A3Cu;
        // 0x394a40: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394a3c) {
            ctx->pc = 0x394A7Cu;
            goto label_394a7c;
        }
    }
    ctx->pc = 0x394A44u;
    // 0x394a44: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x394a44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x394a48: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x394a48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x394a4c: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x394a4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x394a50: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x394a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x394a54: 0x90c50003  lbu         $a1, 0x3($a2)
    ctx->pc = 0x394a54u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x394a58: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x394a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x394a5c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x394a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x394a60: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x394a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x394a64: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x394a64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x394a68: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x394a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x394a6c: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x394A6Cu;
    {
        const bool branch_taken_0x394a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x394A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394A6Cu;
        // 0x394a70: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394a6c) {
            ctx->pc = 0x394B7Cu;
            goto label_394b7c;
        }
    }
    ctx->pc = 0x394A74u;
    // 0x394a74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x394A74u;
    {
        const bool branch_taken_0x394a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394A74u;
        // 0x394a78: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394a74) {
            ctx->pc = 0x394A80u;
            goto label_394a80;
        }
    }
    ctx->pc = 0x394A7Cu;
label_394a7c:
    // 0x394a7c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x394a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_394a80:
    // 0x394a80: 0x5500ffeb  bnel        $t0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x394A80u;
    {
        const bool branch_taken_0x394a80 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x394a80) {
            ctx->pc = 0x394A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394A80u;
            // 0x394a84: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394a30;
        }
    }
    ctx->pc = 0x394A88u;
    // 0x394a88: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x394a88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x394a8c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x394a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x394a90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x394a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394a94: 0x2473021  addu        $a2, $s2, $a3
    ctx->pc = 0x394a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x394a98: 0xc0e5022  jal         func_394088
    ctx->pc = 0x394A98u;
    SET_GPR_U32(ctx, 31, 0x394AA0u);
    ctx->pc = 0x394A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394A98u;
    // 0x394a9c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394088u, 0x394A98u, 0x394AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394AA0u;
label_394aa0:
    // 0x394aa0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x394AA0u;
    {
        const bool branch_taken_0x394aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394AA0u;
        // 0x394aa4: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394aa0) {
            ctx->pc = 0x394AE8u;
            goto label_394ae8;
        }
    }
    ctx->pc = 0x394AA8u;
label_394aa8:
    // 0x394aa8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x394aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x394aac: 0x3c0203ff  lui         $v0, 0x3FF
    ctx->pc = 0x394aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1023 << 16));
    // 0x394ab0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x394ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x394ab4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x394ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394ab8: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x394ab8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x394abc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x394abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x394ac0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x394ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_394ac4:
    // 0x394ac4: 0xc0e5022  jal         func_394088
    ctx->pc = 0x394AC4u;
    SET_GPR_U32(ctx, 31, 0x394ACCu);
    ctx->pc = 0x394AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394AC4u;
    // 0x394ac8: 0x2463021  addu        $a2, $s2, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394088u, 0x394AC4u, 0x394ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394ACCu;
label_394acc:
    // 0x394acc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x394ACCu;
    {
        const bool branch_taken_0x394acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394ACCu;
        // 0x394ad0: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394acc) {
            ctx->pc = 0x394AE8u;
            goto label_394ae8;
        }
    }
    ctx->pc = 0x394AD4u;
label_394ad4:
    // 0x394ad4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x394ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394ad8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x394ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x394adc: 0xc0e5022  jal         func_394088
    ctx->pc = 0x394ADCu;
    SET_GPR_U32(ctx, 31, 0x394AE4u);
    ctx->pc = 0x394AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394ADCu;
    // 0x394ae0: 0x2463021  addu        $a2, $s2, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394088u, 0x394ADCu, 0x394AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394AE4u;
label_394ae4:
    // 0x394ae4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x394ae4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_394ae8:
    // 0x394ae8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x394ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x394aec: 0x30460003  andi        $a2, $v0, 0x3
    ctx->pc = 0x394aecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x394af0: 0x306300fc  andi        $v1, $v1, 0xFC
    ctx->pc = 0x394af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)252);
    // 0x394af4: 0x1460ffb4  bnez        $v1, . + 4 + (-0x4C << 2)
    ctx->pc = 0x394AF4u;
    {
        const bool branch_taken_0x394af4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x394AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394AF4u;
        // 0x394af8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394af4) {
            ctx->pc = 0x3949C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3949c8;
        }
    }
    ctx->pc = 0x394AFCu;
    // 0x394afc: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x394afcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x394b00: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x394b00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x394b04: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x394b04u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x394b08: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x394b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x394b0c: 0x92050003  lbu         $a1, 0x3($s0)
    ctx->pc = 0x394b0cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x394b10: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x394b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x394b14: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x394b14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x394b18: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x394b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x394b1c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x394b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x394b20: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x394b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x394b24: 0x1460ffa6  bnez        $v1, . + 4 + (-0x5A << 2)
    ctx->pc = 0x394B24u;
    {
        const bool branch_taken_0x394b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x394B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394B24u;
        // 0x394b28: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394b24) {
            ctx->pc = 0x3949C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3949c0;
        }
    }
    ctx->pc = 0x394B2Cu;
label_394b2c:
    // 0x394b2c: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x394b2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x394b30: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x394B30u;
    {
        const bool branch_taken_0x394b30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x394B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394B30u;
        // 0x394b34: 0x8e700004  lw          $s0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394b30) {
            ctx->pc = 0x394B8Cu;
            goto label_394b8c;
        }
    }
    ctx->pc = 0x394B38u;
    // 0x394b38: 0x2414000c  addiu       $s4, $zero, 0xC
    ctx->pc = 0x394b38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x394b3c: 0x0  nop
    ctx->pc = 0x394b3cu;
    // NOP
label_394b40:
    // 0x394b40: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x394b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x394b44: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x394b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x394b48: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x394b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x394b4c: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x394b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x394b50: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x394b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x394b54: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x394b54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x394b58: 0x541018  mult        $v0, $v0, $s4
    ctx->pc = 0x394b58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x394b5c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x394b5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x394b60: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x394b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x394b64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x394b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x394b68: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x394b68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x394b6c: 0xc0e5022  jal         func_394088
    ctx->pc = 0x394B6Cu;
    SET_GPR_U32(ctx, 31, 0x394B74u);
    ctx->pc = 0x394B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394B6Cu;
    // 0x394b70: 0xc73021  addu        $a2, $a2, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394088u, 0x394B6Cu, 0x394B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394B74u;
label_394b74:
    // 0x394b74: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x394B74u;
    {
        const bool branch_taken_0x394b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x394B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394B74u;
        // 0x394b78: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394b74) {
            ctx->pc = 0x394B84u;
            goto label_394b84;
        }
    }
    ctx->pc = 0x394B7Cu;
label_394b7c:
    // 0x394b7c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x394B7Cu;
    {
        const bool branch_taken_0x394b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394B7Cu;
        // 0x394b80: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394b7c) {
            ctx->pc = 0x394BF4u;
            goto label_394bf4;
        }
    }
    ctx->pc = 0x394B84u;
label_394b84:
    // 0x394b84: 0x1620ffee  bnez        $s1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x394B84u;
    {
        const bool branch_taken_0x394b84 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x394B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394B84u;
        // 0x394b88: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394b84) {
            ctx->pc = 0x394B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394b40;
        }
    }
    ctx->pc = 0x394B8Cu;
label_394b8c:
    // 0x394b8c: 0x8e710024  lw          $s1, 0x24($s3)
    ctx->pc = 0x394b8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x394b90: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x394B90u;
    {
        const bool branch_taken_0x394b90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x394B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394B90u;
        // 0x394b94: 0x8e630020  lw          $v1, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394b90) {
            ctx->pc = 0x394BB4u;
            goto label_394bb4;
        }
    }
    ctx->pc = 0x394B98u;
label_394b98:
    // 0x394b98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x394b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x394b9c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x394B9Cu;
    {
        const bool branch_taken_0x394b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x394BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394B9Cu;
        // 0x394ba0: 0x521021  addu        $v0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394b9c) {
            ctx->pc = 0x394BA8u;
            goto label_394ba8;
        }
    }
    ctx->pc = 0x394BA4u;
    // 0x394ba4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x394ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_394ba8:
    // 0x394ba8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x394ba8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x394bac: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x394BACu;
    {
        const bool branch_taken_0x394bac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x394BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394BACu;
        // 0x394bb0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394bac) {
            ctx->pc = 0x394B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394b98;
        }
    }
    ctx->pc = 0x394BB4u;
label_394bb4:
    // 0x394bb4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x394bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x394bb8: 0x8c44852c  lw          $a0, -0x7AD4($v0)
    ctx->pc = 0x394bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3F852Cu));
    // 0x394bbc: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x394bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x394bc0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x394BC0u;
    {
        const bool branch_taken_0x394bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x394bc0) {
            ctx->pc = 0x394BE8u;
            goto label_394be8;
        }
    }
    ctx->pc = 0x394BC8u;
    // 0x394bc8: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x394bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x394bcc: 0x0  nop
    ctx->pc = 0x394bccu;
    // NOP
label_394bd0:
    // 0x394bd0: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x394bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x394bd4: 0x0  nop
    ctx->pc = 0x394bd4u;
    // NOP
    // 0x394bd8: 0x0  nop
    ctx->pc = 0x394bd8u;
    // NOP
    // 0x394bdc: 0x0  nop
    ctx->pc = 0x394bdcu;
    // NOP
    // 0x394be0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x394BE0u;
    {
        const bool branch_taken_0x394be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x394be0) {
            ctx->pc = 0x394BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394BE0u;
            // 0x394be4: 0x8c840030  lw          $a0, 0x30($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394bd0;
        }
    }
    ctx->pc = 0x394BE8u;
label_394be8:
    // 0x394be8: 0xc0e5460  jal         func_395180
    ctx->pc = 0x394BE8u;
    SET_GPR_U32(ctx, 31, 0x394BF0u);
    ctx->pc = 0x394BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394BE8u;
    // 0x394bec: 0xac930030  sw          $s3, 0x30($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395180u, 0x394BE8u, 0x394BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394BF0u;
label_394bf0:
    // 0x394bf0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x394bf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_394bf4:
    // 0x394bf4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x394bf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x394bf8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x394bf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x394bfc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x394bfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x394c00: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x394c00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x394c04: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x394c04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x394c08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x394c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x394c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x394C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394C0Cu;
        // 0x394c10: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x394C14u;
    // 0x394c14: 0x0  nop
    ctx->pc = 0x394c14u;
    // NOP
    ctx->pc = 0x394c18u;
}
