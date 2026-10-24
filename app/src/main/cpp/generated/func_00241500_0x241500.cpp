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

// Function: func_00241500
// Address: 0x241500 - 0x241908
void func_00241500_0x241500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00241500_0x241500");
#endif

    switch (ctx->pc) {
        case 0x241570u: goto label_241570;
        case 0x2416c8u: goto label_2416c8;
        case 0x241744u: goto label_241744;
        case 0x24178cu: goto label_24178c;
        case 0x241798u: goto label_241798;
        case 0x2417a4u: goto label_2417a4;
        case 0x241864u: goto label_241864;
        case 0x241870u: goto label_241870;
        case 0x24187cu: goto label_24187c;
        default: break;
    }

    ctx->pc = 0x241500u;

    // 0x241500: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x241500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x241504: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241508: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x241508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x24150c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x24150cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x241510: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x241510u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241514: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x241514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x241518: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x241518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x24151c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x24151cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x241520: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x241520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x241524: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x241524u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x241528: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x241528u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x24152c: 0x10620088  beq         $v1, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x24152Cu;
    {
        const bool branch_taken_0x24152c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x241530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24152Cu;
        // 0x241530: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24152c) {
            ctx->pc = 0x241750u;
            goto label_241750;
        }
    }
    ctx->pc = 0x241534u;
    // 0x241534: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x241534u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x241538: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x241538u;
    {
        const bool branch_taken_0x241538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241538) {
            ctx->pc = 0x24153Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241538u;
            // 0x24153c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241550u;
            goto label_241550;
        }
    }
    ctx->pc = 0x241540u;
    // 0x241540: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x241540u;
    {
        const bool branch_taken_0x241540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x241544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241540u;
        // 0x241544: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241540) {
            ctx->pc = 0x241568u;
            goto label_241568;
        }
    }
    ctx->pc = 0x241548u;
    // 0x241548: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x241548u;
    {
        const bool branch_taken_0x241548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241548u;
        // 0x24154c: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241548) {
            ctx->pc = 0x2418E8u;
            goto label_2418e8;
        }
    }
    ctx->pc = 0x241550u;
label_241550:
    // 0x241550: 0x106200af  beq         $v1, $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x241550u;
    {
        const bool branch_taken_0x241550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x241554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241550u;
        // 0x241554: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241550) {
            ctx->pc = 0x241810u;
            goto label_241810;
        }
    }
    ctx->pc = 0x241558u;
    // 0x241558: 0x106200b3  beq         $v1, $v0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x241558u;
    {
        const bool branch_taken_0x241558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241558u;
        // 0x24155c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241558) {
            ctx->pc = 0x241828u;
            goto label_241828;
        }
    }
    ctx->pc = 0x241560u;
    // 0x241560: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x241560u;
    {
        const bool branch_taken_0x241560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241560u;
        // 0x241564: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241560) {
            ctx->pc = 0x2418E8u;
            goto label_2418e8;
        }
    }
    ctx->pc = 0x241568u;
label_241568:
    // 0x241568: 0xc09d91a  jal         func_276468
    ctx->pc = 0x241568u;
    SET_GPR_U32(ctx, 31, 0x241570u);
    ctx->pc = 0x24156Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241568u;
    // 0x24156c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x241568u, 0x241570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241570u;
label_241570:
    // 0x241570: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x241570u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x241574: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x241574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x241578: 0x2444fdfe  addiu       $a0, $v0, -0x202
    ctx->pc = 0x241578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966782));
    // 0x24157c: 0x2c83007d  sltiu       $v1, $a0, 0x7D
    ctx->pc = 0x24157cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x241580: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x241580u;
    {
        const bool branch_taken_0x241580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x241584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241580u;
        // 0x241584: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241580) {
            ctx->pc = 0x2415A0u;
            goto label_2415a0;
        }
    }
    ctx->pc = 0x241588u;
    // 0x241588: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x241588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x24158c: 0x2442c600  addiu       $v0, $v0, -0x3A00
    ctx->pc = 0x24158cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952448));
    // 0x241590: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x241590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241594: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x241594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x241598: 0x800008  jr          $a0
    ctx->pc = 0x241598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2415A0u: goto label_2415a0;
            case 0x2415B0u: goto label_2415b0;
            case 0x2415C0u: goto label_2415c0;
            case 0x2415D0u: goto label_2415d0;
            case 0x2415E0u: goto label_2415e0;
            case 0x2415F0u: goto label_2415f0;
            case 0x241600u: goto label_241600;
            case 0x241610u: goto label_241610;
            case 0x241620u: goto label_241620;
            case 0x241630u: goto label_241630;
            case 0x241640u: goto label_241640;
            case 0x241650u: goto label_241650;
            case 0x241660u: goto label_241660;
            case 0x241670u: goto label_241670;
            case 0x241680u: goto label_241680;
            case 0x241690u: goto label_241690;
            case 0x2416A0u: goto label_2416a0;
            case 0x2416D0u: goto label_2416d0;
            case 0x2416E0u: goto label_2416e0;
            case 0x2416F0u: goto label_2416f0;
            case 0x241700u: goto label_241700;
            case 0x241710u: goto label_241710;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241598u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2415A0u;
label_2415a0:
    // 0x2415a0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2415a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2415a4: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x2415a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x2415a8: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x2415A8u;
    {
        const bool branch_taken_0x2415a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2415ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2415A8u;
        // 0x2415ac: 0x8c44009c  lw          $a0, 0x9C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2415a8) {
            ctx->pc = 0x24171Cu;
            goto label_24171c;
        }
    }
    ctx->pc = 0x2415B0u;
label_2415b0:
    // 0x2415b0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2415b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2415b4: 0x8c430648  lw          $v1, 0x648($v0)
    ctx->pc = 0x2415b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1608)));
    // 0x2415b8: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x2415B8u;
    {
        const bool branch_taken_0x2415b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2415BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2415B8u;
        // 0x2415bc: 0x8c44064c  lw          $a0, 0x64C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2415b8) {
            ctx->pc = 0x24171Cu;
            goto label_24171c;
        }
    }
    ctx->pc = 0x2415C0u;
label_2415c0:
    // 0x2415c0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2415c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2415c4: 0x8c4335cc  lw          $v1, 0x35CC($v0)
    ctx->pc = 0x2415c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13772)));
    // 0x2415c8: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x2415C8u;
    {
        const bool branch_taken_0x2415c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2415CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2415C8u;
        // 0x2415cc: 0x8c4435d0  lw          $a0, 0x35D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2415c8) {
            ctx->pc = 0x24171Cu;
            goto label_24171c;
        }
    }
    ctx->pc = 0x2415D0u;
label_2415d0:
    // 0x2415d0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2415d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2415d4: 0x8c4325ac  lw          $v1, 0x25AC($v0)
    ctx->pc = 0x2415d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9644)));
    // 0x2415d8: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x2415D8u;
    {
        const bool branch_taken_0x2415d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2415DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2415D8u;
        // 0x2415dc: 0x8c4425b0  lw          $a0, 0x25B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2415d8) {
            ctx->pc = 0x24171Cu;
            goto label_24171c;
        }
    }
    ctx->pc = 0x2415E0u;
label_2415e0:
    // 0x2415e0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2415e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2415e4: 0x8c4310a8  lw          $v1, 0x10A8($v0)
    ctx->pc = 0x2415e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4264)));
    // 0x2415e8: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2415E8u;
    {
        const bool branch_taken_0x2415e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2415ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2415E8u;
        // 0x2415ec: 0x8c4410ac  lw          $a0, 0x10AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2415e8) {
            ctx->pc = 0x24171Cu;
            goto label_24171c;
        }
    }
    ctx->pc = 0x2415F0u;
label_2415f0:
    // 0x2415f0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2415f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2415f4: 0x8c433c88  lw          $v1, 0x3C88($v0)
    ctx->pc = 0x2415f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15496)));
    // 0x2415f8: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2415F8u;
    {
        const bool branch_taken_0x2415f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2415FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2415F8u;
        // 0x2415fc: 0x8c443c8c  lw          $a0, 0x3C8C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2415f8) {
            ctx->pc = 0x24171Cu;
            goto label_24171c;
        }
    }
    ctx->pc = 0x241600u;
label_241600:
    // 0x241600: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x241600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x241604: 0x8c4324ec  lw          $v1, 0x24EC($v0)
    ctx->pc = 0x241604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9452)));
    // 0x241608: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x241608u;
    {
        const bool branch_taken_0x241608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241608u;
        // 0x24160c: 0x8c4424f0  lw          $a0, 0x24F0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241608) {
            ctx->pc = 0x24171Cu;
            goto label_24171c;
        }
    }
    ctx->pc = 0x241610u;
label_241610:
    // 0x241610: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x241610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x241614: 0x8c430828  lw          $v1, 0x828($v0)
    ctx->pc = 0x241614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2088)));
    // 0x241618: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x241618u;
    {
        const bool branch_taken_0x241618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241618u;
        // 0x24161c: 0x8c44082c  lw          $a0, 0x82C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241618) {
            ctx->pc = 0x24171Cu;
            goto label_24171c;
        }
    }
    ctx->pc = 0x241620u;
label_241620:
    // 0x241620: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x241620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x241624: 0x8c431fb0  lw          $v1, 0x1FB0($v0)
    ctx->pc = 0x241624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8112)));
    // 0x241628: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x241628u;
    {
        const bool branch_taken_0x241628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241628u;
        // 0x24162c: 0x8c441fb4  lw          $a0, 0x1FB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241628) {
            ctx->pc = 0x24171Cu;
            goto label_24171c;
        }
    }
    ctx->pc = 0x241630u;
label_241630:
    // 0x241630: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x241630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x241634: 0x8c431eac  lw          $v1, 0x1EAC($v0)
    ctx->pc = 0x241634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7852)));
    // 0x241638: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x241638u;
    {
        const bool branch_taken_0x241638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241638u;
        // 0x24163c: 0x8c441eb0  lw          $a0, 0x1EB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241638) {
            ctx->pc = 0x24171Cu;
            goto label_24171c;
        }
    }
    ctx->pc = 0x241640u;
label_241640:
    // 0x241640: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x241640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x241644: 0x8c431560  lw          $v1, 0x1560($v0)
    ctx->pc = 0x241644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5472)));
    // 0x241648: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x241648u;
    {
        const bool branch_taken_0x241648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241648u;
        // 0x24164c: 0x8c441564  lw          $a0, 0x1564($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241648) {
            ctx->pc = 0x24171Cu;
            goto label_24171c;
        }
    }
    ctx->pc = 0x241650u;
label_241650:
    // 0x241650: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x241650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x241654: 0x8c433a00  lw          $v1, 0x3A00($v0)
    ctx->pc = 0x241654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14848)));
    // 0x241658: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x241658u;
    {
        const bool branch_taken_0x241658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241658u;
        // 0x24165c: 0x8c443a04  lw          $a0, 0x3A04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14852)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241658) {
            ctx->pc = 0x24171Cu;
            goto label_24171c;
        }
    }
    ctx->pc = 0x241660u;
label_241660:
    // 0x241660: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x241660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x241664: 0x8c433418  lw          $v1, 0x3418($v0)
    ctx->pc = 0x241664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13336)));
    // 0x241668: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x241668u;
    {
        const bool branch_taken_0x241668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241668u;
        // 0x24166c: 0x8c44341c  lw          $a0, 0x341C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241668) {
            ctx->pc = 0x24171Cu;
            goto label_24171c;
        }
    }
    ctx->pc = 0x241670u;
label_241670:
    // 0x241670: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x241670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x241674: 0x8c4318f0  lw          $v1, 0x18F0($v0)
    ctx->pc = 0x241674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6384)));
    // 0x241678: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x241678u;
    {
        const bool branch_taken_0x241678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241678u;
        // 0x24167c: 0x8c4418f4  lw          $a0, 0x18F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241678) {
            ctx->pc = 0x24171Cu;
            goto label_24171c;
        }
    }
    ctx->pc = 0x241680u;
label_241680:
    // 0x241680: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x241680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x241684: 0x8c433038  lw          $v1, 0x3038($v0)
    ctx->pc = 0x241684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12344)));
    // 0x241688: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x241688u;
    {
        const bool branch_taken_0x241688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241688u;
        // 0x24168c: 0x8c44303c  lw          $a0, 0x303C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241688) {
            ctx->pc = 0x24171Cu;
            goto label_24171c;
        }
    }
    ctx->pc = 0x241690u;
label_241690:
    // 0x241690: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x241690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x241694: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x241694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x241698: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x241698u;
    {
        const bool branch_taken_0x241698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241698u;
        // 0x24169c: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241698) {
            ctx->pc = 0x24171Cu;
            goto label_24171c;
        }
    }
    ctx->pc = 0x2416A0u;
label_2416a0:
    // 0x2416a0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2416a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2416a4: 0x8e470744  lw          $a3, 0x744($s2)
    ctx->pc = 0x2416a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1860)));
    // 0x2416a8: 0x8c433724  lw          $v1, 0x3724($v0)
    ctx->pc = 0x2416a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14116)));
    // 0x2416ac: 0x8c443728  lw          $a0, 0x3728($v0)
    ctx->pc = 0x2416acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14120)));
    // 0x2416b0: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x2416b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2416b4: 0x10e0001b  beqz        $a3, . + 4 + (0x1B << 2)
    ctx->pc = 0x2416B4u;
    {
        const bool branch_taken_0x2416b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2416B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2416B4u;
        // 0x2416b8: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2416b4) {
            ctx->pc = 0x241724u;
            goto label_241724;
        }
    }
    ctx->pc = 0x2416BCu;
    // 0x2416bc: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2416bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2416c0: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x2416C0u;
    SET_GPR_U32(ctx, 31, 0x2416C8u);
    ctx->pc = 0x2416C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2416C0u;
    // 0x2416c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x2416C0u, 0x2416C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2416C8u;
label_2416c8:
    // 0x2416c8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2416C8u;
    {
        const bool branch_taken_0x2416c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2416c8) {
            ctx->pc = 0x241724u;
            goto label_241724;
        }
    }
    ctx->pc = 0x2416D0u;
label_2416d0:
    // 0x2416d0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2416d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2416d4: 0x8c430cf8  lw          $v1, 0xCF8($v0)
    ctx->pc = 0x2416d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3320)));
    // 0x2416d8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2416D8u;
    {
        const bool branch_taken_0x2416d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2416DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2416D8u;
        // 0x2416dc: 0x8c440cfc  lw          $a0, 0xCFC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2416d8) {
            ctx->pc = 0x24171Cu;
            goto label_24171c;
        }
    }
    ctx->pc = 0x2416E0u;
label_2416e0:
    // 0x2416e0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2416e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2416e4: 0x8c43244c  lw          $v1, 0x244C($v0)
    ctx->pc = 0x2416e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9292)));
    // 0x2416e8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2416E8u;
    {
        const bool branch_taken_0x2416e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2416ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2416E8u;
        // 0x2416ec: 0x8c442450  lw          $a0, 0x2450($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2416e8) {
            ctx->pc = 0x24171Cu;
            goto label_24171c;
        }
    }
    ctx->pc = 0x2416F0u;
label_2416f0:
    // 0x2416f0: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2416f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2416f4: 0x8c431bc0  lw          $v1, 0x1BC0($v0)
    ctx->pc = 0x2416f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7104)));
    // 0x2416f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2416F8u;
    {
        const bool branch_taken_0x2416f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2416FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2416F8u;
        // 0x2416fc: 0x8c441bc4  lw          $a0, 0x1BC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2416f8) {
            ctx->pc = 0x24171Cu;
            goto label_24171c;
        }
    }
    ctx->pc = 0x241700u;
label_241700:
    // 0x241700: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x241700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x241704: 0x8c432d38  lw          $v1, 0x2D38($v0)
    ctx->pc = 0x241704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11576)));
    // 0x241708: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x241708u;
    {
        const bool branch_taken_0x241708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241708u;
        // 0x24170c: 0x8c442d3c  lw          $a0, 0x2D3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241708) {
            ctx->pc = 0x24171Cu;
            goto label_24171c;
        }
    }
    ctx->pc = 0x241710u;
label_241710:
    // 0x241710: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x241710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x241714: 0x8c432274  lw          $v1, 0x2274($v0)
    ctx->pc = 0x241714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8820)));
    // 0x241718: 0x8c442278  lw          $a0, 0x2278($v0)
    ctx->pc = 0x241718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8824)));
label_24171c:
    // 0x24171c: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x24171cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241720: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x241720u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_241724:
    // 0x241724: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x241724u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x241728: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x241728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24172c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x24172cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241730: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x241730u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241734: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x241734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241738: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x241738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x24173c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x24173Cu;
    SET_GPR_U32(ctx, 31, 0x241744u);
    ctx->pc = 0x241740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24173Cu;
    // 0x241740: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x24173Cu, 0x241744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241744u;
label_241744:
    // 0x241744: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x241744u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x241748: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x241748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24174c: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x24174cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_241750:
    // 0x241750: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x241750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x241754: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x241754u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x241758: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x241758u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x24175c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x24175cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x241760: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x241760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241764: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x241764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x241768: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x241768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24176c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x24176cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x241770: 0xa2430617  sb          $v1, 0x617($s2)
    ctx->pc = 0x241770u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1559), (uint8_t)GPR_U32(ctx, 3));
    // 0x241774: 0xe640054c  swc1        $f0, 0x54C($s2)
    ctx->pc = 0x241774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
    // 0x241778: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x241778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24177c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24177cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x241780: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x241780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x241784: 0xc055f06  jal         func_157C18
    ctx->pc = 0x241784u;
    SET_GPR_U32(ctx, 31, 0x24178Cu);
    ctx->pc = 0x241788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241784u;
    // 0x241788: 0xae4216d0  sw          $v0, 0x16D0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x241784u, 0x24178Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24178Cu;
label_24178c:
    // 0x24178c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24178cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241790: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x241790u;
    SET_GPR_U32(ctx, 31, 0x241798u);
    ctx->pc = 0x241794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241790u;
    // 0x241794: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x241790u, 0x241798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241798u;
label_241798:
    // 0x241798: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x241798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24179c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x24179Cu;
    SET_GPR_U32(ctx, 31, 0x2417A4u);
    ctx->pc = 0x2417A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24179Cu;
    // 0x2417a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x24179Cu, 0x2417A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2417A4u;
label_2417a4:
    // 0x2417a4: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x2417a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x2417a8: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2417a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x2417ac: 0x8e460564  lw          $a2, 0x564($s2)
    ctx->pc = 0x2417acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x2417b0: 0x24040208  addiu       $a0, $zero, 0x208
    ctx->pc = 0x2417b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x2417b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2417b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2417b8: 0x10c40006  beq         $a2, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2417B8u;
    {
        const bool branch_taken_0x2417b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x2417BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2417B8u;
        // 0x2417bc: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2417b8) {
            ctx->pc = 0x2417D4u;
            goto label_2417d4;
        }
    }
    ctx->pc = 0x2417C0u;
    // 0x2417c0: 0x2402021c  addiu       $v0, $zero, 0x21C
    ctx->pc = 0x2417c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
    // 0x2417c4: 0x10c20006  beq         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2417C4u;
    {
        const bool branch_taken_0x2417c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2417C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2417C4u;
        // 0x2417c8: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2417c4) {
            ctx->pc = 0x2417E0u;
            goto label_2417e0;
        }
    }
    ctx->pc = 0x2417CCu;
    // 0x2417cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2417CCu;
    {
        const bool branch_taken_0x2417cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2417cc) {
            ctx->pc = 0x2417E4u;
            goto label_2417e4;
        }
    }
    ctx->pc = 0x2417D4u;
label_2417d4:
    // 0x2417d4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2417d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2417d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2417D8u;
    {
        const bool branch_taken_0x2417d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2417DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2417D8u;
        // 0x2417dc: 0x8c536a5c  lw          $s3, 0x6A5C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2417d8) {
            ctx->pc = 0x2417E4u;
            goto label_2417e4;
        }
    }
    ctx->pc = 0x2417E0u;
label_2417e0:
    // 0x2417e0: 0x8c536a58  lw          $s3, 0x6A58($v0)
    ctx->pc = 0x2417e0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27224)));
label_2417e4:
    // 0x2417e4: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2417E4u;
    {
        const bool branch_taken_0x2417e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2417E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2417E4u;
        // 0x2417e8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2417e4) {
            ctx->pc = 0x2417FCu;
            goto label_2417fc;
        }
    }
    ctx->pc = 0x2417ECu;
    // 0x2417ec: 0x8662054a  lh          $v0, 0x54A($s3)
    ctx->pc = 0x2417ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1354)));
    // 0x2417f0: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2417f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2417f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2417F4u;
    {
        const bool branch_taken_0x2417f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2417F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2417F4u;
        // 0x2417f8: 0x62280a  movz        $a1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2417f4) {
            ctx->pc = 0x241800u;
            goto label_241800;
        }
    }
    ctx->pc = 0x2417FCu;
label_2417fc:
    // 0x2417fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2417fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241800:
    // 0x241800: 0x10a00037  beqz        $a1, . + 4 + (0x37 << 2)
    ctx->pc = 0x241800u;
    {
        const bool branch_taken_0x241800 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x241804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241800u;
        // 0x241804: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241800) {
            ctx->pc = 0x2418E0u;
            goto label_2418e0;
        }
    }
    ctx->pc = 0x241808u;
    // 0x241808: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x241808u;
    {
        const bool branch_taken_0x241808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241808u;
        // 0x24180c: 0xa24202f6  sb          $v0, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241808) {
            ctx->pc = 0x2418E0u;
            goto label_2418e0;
        }
    }
    ctx->pc = 0x241810u;
label_241810:
    // 0x241810: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x241810u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x241814: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x241814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x241818: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x241818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24181c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24181cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x241820: 0xe6400600  swc1        $f0, 0x600($s2)
    ctx->pc = 0x241820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
    // 0x241824: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x241824u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_241828:
    // 0x241828: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x241828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x24182c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x24182cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x241830: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x241830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x241834: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x241834u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241838: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x241838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x24183c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x24183cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x241840: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x241840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241844: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x241844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x241848: 0xe640054c  swc1        $f0, 0x54C($s2)
    ctx->pc = 0x241848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
    // 0x24184c: 0xa2430617  sb          $v1, 0x617($s2)
    ctx->pc = 0x24184cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1559), (uint8_t)GPR_U32(ctx, 3));
    // 0x241850: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x241850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241854: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x241854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x241858: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x241858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24185c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x24185Cu;
    SET_GPR_U32(ctx, 31, 0x241864u);
    ctx->pc = 0x241860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24185Cu;
    // 0x241860: 0xae4216d0  sw          $v0, 0x16D0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x24185Cu, 0x241864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241864u;
label_241864:
    // 0x241864: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x241864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241868: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x241868u;
    SET_GPR_U32(ctx, 31, 0x241870u);
    ctx->pc = 0x24186Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241868u;
    // 0x24186c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x241868u, 0x241870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241870u;
label_241870:
    // 0x241870: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x241870u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x241874: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x241874u;
    SET_GPR_U32(ctx, 31, 0x24187Cu);
    ctx->pc = 0x241878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241874u;
    // 0x241878: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x241874u, 0x24187Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24187Cu;
label_24187c:
    // 0x24187c: 0xc6400600  lwc1        $f0, 0x600($s2)
    ctx->pc = 0x24187cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241880: 0xc64105a8  lwc1        $f1, 0x5A8($s2)
    ctx->pc = 0x241880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x241884: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x241884u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x241888: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x241888u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24188c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x24188cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x241890: 0x0  nop
    ctx->pc = 0x241890u;
    // NOP
    // 0x241894: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x241894u;
    {
        const bool branch_taken_0x241894 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x241898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241894u;
        // 0x241898: 0xe6400600  swc1        $f0, 0x600($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x241894) {
            ctx->pc = 0x2418E0u;
            goto label_2418e0;
        }
    }
    ctx->pc = 0x24189Cu;
    // 0x24189c: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x24189cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x2418a0: 0x264306d0  addiu       $v1, $s2, 0x6D0
    ctx->pc = 0x2418a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1744));
    // 0x2418a4: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2418A4u;
    {
        const bool branch_taken_0x2418a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2418a4) {
            ctx->pc = 0x2418A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2418A4u;
            // 0x2418a8: 0xc6400104  lwc1        $f0, 0x104($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2418C8u;
            goto label_2418c8;
        }
    }
    ctx->pc = 0x2418ACu;
    // 0x2418ac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2418acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2418b0: 0xe64006d0  swc1        $f0, 0x6D0($s2)
    ctx->pc = 0x2418b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1744), bits); }
    // 0x2418b4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2418b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2418b8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2418b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2418bc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2418bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2418c0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2418c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2418c4: 0xc6400104  lwc1        $f0, 0x104($s2)
    ctx->pc = 0x2418c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2418c8:
    // 0x2418c8: 0x24020075  addiu       $v0, $zero, 0x75
    ctx->pc = 0x2418c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x2418cc: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x2418ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2418d0: 0xe64006e0  swc1        $f0, 0x6E0($s2)
    ctx->pc = 0x2418d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1760), bits); }
    // 0x2418d4: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x2418d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2418d8: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x2418d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2418dc: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x2418dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_2418e0:
    // 0x2418e0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2418e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2418e4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2418e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2418e8:
    // 0x2418e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2418e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2418ec: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2418ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2418f0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2418f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2418f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2418f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2418f8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2418f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2418fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2418FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2418FCu;
        // 0x241900: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2418FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241904u;
    // 0x241904: 0x0  nop
    ctx->pc = 0x241904u;
    // NOP
    ctx->pc = 0x241908u;
}
