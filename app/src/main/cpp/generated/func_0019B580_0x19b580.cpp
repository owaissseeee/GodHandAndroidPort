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

// Function: func_0019B580
// Address: 0x19b580 - 0x19b760
void func_0019B580_0x19b580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019B580_0x19b580");
#endif

    switch (ctx->pc) {
        case 0x19b580u: goto label_19b580;
        case 0x19b584u: goto label_19b584;
        case 0x19b588u: goto label_19b588;
        case 0x19b58cu: goto label_19b58c;
        case 0x19b590u: goto label_19b590;
        case 0x19b594u: goto label_19b594;
        case 0x19b598u: goto label_19b598;
        case 0x19b59cu: goto label_19b59c;
        case 0x19b5a0u: goto label_19b5a0;
        case 0x19b5a4u: goto label_19b5a4;
        case 0x19b5a8u: goto label_19b5a8;
        case 0x19b5acu: goto label_19b5ac;
        case 0x19b5b0u: goto label_19b5b0;
        case 0x19b5b4u: goto label_19b5b4;
        case 0x19b5b8u: goto label_19b5b8;
        case 0x19b5bcu: goto label_19b5bc;
        case 0x19b5c0u: goto label_19b5c0;
        case 0x19b5c4u: goto label_19b5c4;
        case 0x19b5c8u: goto label_19b5c8;
        case 0x19b5ccu: goto label_19b5cc;
        case 0x19b5d0u: goto label_19b5d0;
        case 0x19b5d4u: goto label_19b5d4;
        case 0x19b5d8u: goto label_19b5d8;
        case 0x19b5dcu: goto label_19b5dc;
        case 0x19b5e0u: goto label_19b5e0;
        case 0x19b5e4u: goto label_19b5e4;
        case 0x19b5e8u: goto label_19b5e8;
        case 0x19b5ecu: goto label_19b5ec;
        case 0x19b5f0u: goto label_19b5f0;
        case 0x19b5f4u: goto label_19b5f4;
        case 0x19b5f8u: goto label_19b5f8;
        case 0x19b5fcu: goto label_19b5fc;
        case 0x19b600u: goto label_19b600;
        case 0x19b604u: goto label_19b604;
        case 0x19b608u: goto label_19b608;
        case 0x19b60cu: goto label_19b60c;
        case 0x19b610u: goto label_19b610;
        case 0x19b614u: goto label_19b614;
        case 0x19b618u: goto label_19b618;
        case 0x19b61cu: goto label_19b61c;
        case 0x19b620u: goto label_19b620;
        case 0x19b624u: goto label_19b624;
        case 0x19b628u: goto label_19b628;
        case 0x19b62cu: goto label_19b62c;
        case 0x19b630u: goto label_19b630;
        case 0x19b634u: goto label_19b634;
        case 0x19b638u: goto label_19b638;
        case 0x19b63cu: goto label_19b63c;
        case 0x19b640u: goto label_19b640;
        case 0x19b644u: goto label_19b644;
        case 0x19b648u: goto label_19b648;
        case 0x19b64cu: goto label_19b64c;
        case 0x19b650u: goto label_19b650;
        case 0x19b654u: goto label_19b654;
        case 0x19b658u: goto label_19b658;
        case 0x19b65cu: goto label_19b65c;
        case 0x19b660u: goto label_19b660;
        case 0x19b664u: goto label_19b664;
        case 0x19b668u: goto label_19b668;
        case 0x19b66cu: goto label_19b66c;
        case 0x19b670u: goto label_19b670;
        case 0x19b674u: goto label_19b674;
        case 0x19b678u: goto label_19b678;
        case 0x19b67cu: goto label_19b67c;
        case 0x19b680u: goto label_19b680;
        case 0x19b684u: goto label_19b684;
        case 0x19b688u: goto label_19b688;
        case 0x19b68cu: goto label_19b68c;
        case 0x19b690u: goto label_19b690;
        case 0x19b694u: goto label_19b694;
        case 0x19b698u: goto label_19b698;
        case 0x19b69cu: goto label_19b69c;
        case 0x19b6a0u: goto label_19b6a0;
        case 0x19b6a4u: goto label_19b6a4;
        case 0x19b6a8u: goto label_19b6a8;
        case 0x19b6acu: goto label_19b6ac;
        case 0x19b6b0u: goto label_19b6b0;
        case 0x19b6b4u: goto label_19b6b4;
        case 0x19b6b8u: goto label_19b6b8;
        case 0x19b6bcu: goto label_19b6bc;
        case 0x19b6c0u: goto label_19b6c0;
        case 0x19b6c4u: goto label_19b6c4;
        case 0x19b6c8u: goto label_19b6c8;
        case 0x19b6ccu: goto label_19b6cc;
        case 0x19b6d0u: goto label_19b6d0;
        case 0x19b6d4u: goto label_19b6d4;
        case 0x19b6d8u: goto label_19b6d8;
        case 0x19b6dcu: goto label_19b6dc;
        case 0x19b6e0u: goto label_19b6e0;
        case 0x19b6e4u: goto label_19b6e4;
        case 0x19b6e8u: goto label_19b6e8;
        case 0x19b6ecu: goto label_19b6ec;
        case 0x19b6f0u: goto label_19b6f0;
        case 0x19b6f4u: goto label_19b6f4;
        case 0x19b6f8u: goto label_19b6f8;
        case 0x19b6fcu: goto label_19b6fc;
        case 0x19b700u: goto label_19b700;
        case 0x19b704u: goto label_19b704;
        case 0x19b708u: goto label_19b708;
        case 0x19b70cu: goto label_19b70c;
        case 0x19b710u: goto label_19b710;
        case 0x19b714u: goto label_19b714;
        case 0x19b718u: goto label_19b718;
        case 0x19b71cu: goto label_19b71c;
        case 0x19b720u: goto label_19b720;
        case 0x19b724u: goto label_19b724;
        case 0x19b728u: goto label_19b728;
        case 0x19b72cu: goto label_19b72c;
        case 0x19b730u: goto label_19b730;
        case 0x19b734u: goto label_19b734;
        case 0x19b738u: goto label_19b738;
        case 0x19b73cu: goto label_19b73c;
        case 0x19b740u: goto label_19b740;
        case 0x19b744u: goto label_19b744;
        case 0x19b748u: goto label_19b748;
        case 0x19b74cu: goto label_19b74c;
        case 0x19b750u: goto label_19b750;
        case 0x19b754u: goto label_19b754;
        case 0x19b758u: goto label_19b758;
        case 0x19b75cu: goto label_19b75c;
        default: break;
    }

    ctx->pc = 0x19b580u;

label_19b580:
    // 0x19b580: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19b580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_19b584:
    // 0x19b584: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x19b584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_19b588:
    // 0x19b588: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19b588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_19b58c:
    // 0x19b58c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19b58cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19b590:
    // 0x19b590: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19b590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19b594:
    // 0x19b594: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x19b594u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19b598:
    // 0x19b598: 0x920302f5  lbu         $v1, 0x2F5($s0)
    ctx->pc = 0x19b598u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_19b59c:
    // 0x19b59c: 0x1071004b  beq         $v1, $s1, . + 4 + (0x4B << 2)
label_19b5a0:
    if (ctx->pc == 0x19B5A0u) {
        ctx->pc = 0x19B5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B59Cu;
        // 0x19b5a0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B5A4u;
        goto label_19b5a4;
    }
    ctx->pc = 0x19B59Cu;
    {
        const bool branch_taken_0x19b59c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x19B5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B59Cu;
        // 0x19b5a0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b59c) {
            ctx->pc = 0x19B6CCu;
            goto label_19b6cc;
        }
    }
    ctx->pc = 0x19B5A4u;
label_19b5a4:
    // 0x19b5a4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_19b5a8:
    if (ctx->pc == 0x19B5A8u) {
        ctx->pc = 0x19B5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B5A4u;
        // 0x19b5a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B5ACu;
        goto label_19b5ac;
    }
    ctx->pc = 0x19B5A4u;
    {
        const bool branch_taken_0x19b5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b5a4) {
            ctx->pc = 0x19B5A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B5A4u;
            // 0x19b5a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B5BCu;
            goto label_19b5bc;
        }
    }
    ctx->pc = 0x19B5ACu;
label_19b5ac:
    // 0x19b5ac: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_19b5b0:
    if (ctx->pc == 0x19B5B0u) {
        ctx->pc = 0x19B5B4u;
        goto label_19b5b4;
    }
    ctx->pc = 0x19B5ACu;
    {
        const bool branch_taken_0x19b5ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b5ac) {
            ctx->pc = 0x19B5D4u;
            goto label_19b5d4;
        }
    }
    ctx->pc = 0x19B5B4u;
label_19b5b4:
    // 0x19b5b4: 0x10000065  b           . + 4 + (0x65 << 2)
label_19b5b8:
    if (ctx->pc == 0x19B5B8u) {
        ctx->pc = 0x19B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B5B4u;
        // 0x19b5b8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B5BCu;
        goto label_19b5bc;
    }
    ctx->pc = 0x19B5B4u;
    {
        const bool branch_taken_0x19b5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B5B4u;
        // 0x19b5b8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b5b4) {
            ctx->pc = 0x19B74Cu;
            goto label_19b74c;
        }
    }
    ctx->pc = 0x19B5BCu;
label_19b5bc:
    // 0x19b5bc: 0x1062004e  beq         $v1, $v0, . + 4 + (0x4E << 2)
label_19b5c0:
    if (ctx->pc == 0x19B5C0u) {
        ctx->pc = 0x19B5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B5BCu;
        // 0x19b5c0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B5C4u;
        goto label_19b5c4;
    }
    ctx->pc = 0x19B5BCu;
    {
        const bool branch_taken_0x19b5bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19B5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B5BCu;
        // 0x19b5c0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b5bc) {
            ctx->pc = 0x19B6F8u;
            goto label_19b6f8;
        }
    }
    ctx->pc = 0x19B5C4u;
label_19b5c4:
    // 0x19b5c4: 0x5062005d  beql        $v1, $v0, . + 4 + (0x5D << 2)
label_19b5c8:
    if (ctx->pc == 0x19B5C8u) {
        ctx->pc = 0x19B5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B5C4u;
        // 0x19b5c8: 0xa20302f4  sb          $v1, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B5CCu;
        goto label_19b5cc;
    }
    ctx->pc = 0x19B5C4u;
    {
        const bool branch_taken_0x19b5c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19b5c4) {
            ctx->pc = 0x19B5C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B5C4u;
            // 0x19b5c8: 0xa20302f4  sb          $v1, 0x2F4($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B73Cu;
            goto label_19b73c;
        }
    }
    ctx->pc = 0x19B5CCu;
label_19b5cc:
    // 0x19b5cc: 0x1000005f  b           . + 4 + (0x5F << 2)
label_19b5d0:
    if (ctx->pc == 0x19B5D0u) {
        ctx->pc = 0x19B5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B5CCu;
        // 0x19b5d0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B5D4u;
        goto label_19b5d4;
    }
    ctx->pc = 0x19B5CCu;
    {
        const bool branch_taken_0x19b5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B5CCu;
        // 0x19b5d0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b5cc) {
            ctx->pc = 0x19B74Cu;
            goto label_19b74c;
        }
    }
    ctx->pc = 0x19B5D4u;
label_19b5d4:
    // 0x19b5d4: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x19b5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_19b5d8:
    // 0x19b5d8: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x19b5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_19b5dc:
    // 0x19b5dc: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x19b5dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_19b5e0:
    // 0x19b5e0: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x19b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_19b5e4:
    // 0x19b5e4: 0x40f809  jalr        $v0
label_19b5e8:
    if (ctx->pc == 0x19B5E8u) {
        ctx->pc = 0x19B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B5E4u;
        // 0x19b5e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B5ECu;
        goto label_19b5ec;
    }
    ctx->pc = 0x19B5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19B5ECu);
        ctx->pc = 0x19B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B5E4u;
        // 0x19b5e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B5E4u, 0x19B5ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B5ECu;
label_19b5ec:
    // 0x19b5ec: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
label_19b5f0:
    if (ctx->pc == 0x19B5F0u) {
        ctx->pc = 0x19B5F4u;
        goto label_19b5f4;
    }
    ctx->pc = 0x19B5ECu;
    {
        const bool branch_taken_0x19b5ec = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x19b5ec) {
            ctx->pc = 0x19B60Cu;
            goto label_19b60c;
        }
    }
    ctx->pc = 0x19B5F4u;
label_19b5f4:
    // 0x19b5f4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x19b5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19b5f8:
    // 0x19b5f8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x19b5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_19b5fc:
    // 0x19b5fc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x19b5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19b600:
    // 0x19b600: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x19b600u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_19b604:
    // 0x19b604: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x19b604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19b608:
    // 0x19b608: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x19b608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_19b60c:
    // 0x19b60c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19b60cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19b610:
    // 0x19b610: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19b610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19b614:
    // 0x19b614: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x19b614u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19b618:
    // 0x19b618: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19b618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19b61c:
    // 0x19b61c: 0x240500cc  addiu       $a1, $zero, 0xCC
    ctx->pc = 0x19b61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
label_19b620:
    // 0x19b620: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19b620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19b624:
    // 0x19b624: 0xc0c1a0e  jal         func_306838
label_19b628:
    if (ctx->pc == 0x19B628u) {
        ctx->pc = 0x19B628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B624u;
        // 0x19b628: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B62Cu;
        goto label_19b62c;
    }
    ctx->pc = 0x19B624u;
    SET_GPR_U32(ctx, 31, 0x19B62Cu);
    ctx->pc = 0x19B628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B624u;
    // 0x19b628: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x19B624u, 0x19B62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B62Cu;
label_19b62c:
    // 0x19b62c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x19b62cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_19b630:
    // 0x19b630: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19b630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19b634:
    // 0x19b634: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x19b634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_19b638:
    // 0x19b638: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19b638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19b63c:
    // 0x19b63c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19b63cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19b640:
    // 0x19b640: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19b640u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19b644:
    // 0x19b644: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19b644u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19b648:
    // 0x19b648: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19b648u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19b64c:
    // 0x19b64c: 0xc0b2e92  jal         func_2CBA48
label_19b650:
    if (ctx->pc == 0x19B650u) {
        ctx->pc = 0x19B650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B64Cu;
        // 0x19b650: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B654u;
        goto label_19b654;
    }
    ctx->pc = 0x19B64Cu;
    SET_GPR_U32(ctx, 31, 0x19B654u);
    ctx->pc = 0x19B650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B64Cu;
    // 0x19b650: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x19B64Cu, 0x19B654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B654u;
label_19b654:
    // 0x19b654: 0x82030a92  lb          $v1, 0xA92($s0)
    ctx->pc = 0x19b654u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2706)));
label_19b658:
    // 0x19b658: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_19b65c:
    if (ctx->pc == 0x19B65Cu) {
        ctx->pc = 0x19B65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B658u;
        // 0x19b65c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B660u;
        goto label_19b660;
    }
    ctx->pc = 0x19B658u;
    {
        const bool branch_taken_0x19b658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B658u;
        // 0x19b65c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b658) {
            ctx->pc = 0x19B6A4u;
            goto label_19b6a4;
        }
    }
    ctx->pc = 0x19B660u;
label_19b660:
    // 0x19b660: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19b660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19b664:
    // 0x19b664: 0xc066e82  jal         func_19BA08
label_19b668:
    if (ctx->pc == 0x19B668u) {
        ctx->pc = 0x19B668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B664u;
        // 0x19b668: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B66Cu;
        goto label_19b66c;
    }
    ctx->pc = 0x19B664u;
    SET_GPR_U32(ctx, 31, 0x19B66Cu);
    ctx->pc = 0x19B668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B664u;
    // 0x19b668: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BA08u, 0x19B664u, 0x19B66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B66Cu;
label_19b66c:
    // 0x19b66c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x19b66cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_19b670:
    // 0x19b670: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x19b670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_19b674:
    // 0x19b674: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x19b674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
label_19b678:
    // 0x19b678: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x19b678u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_19b67c:
    // 0x19b67c: 0xc0a48fa  jal         func_2923E8
label_19b680:
    if (ctx->pc == 0x19B680u) {
        ctx->pc = 0x19B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B67Cu;
        // 0x19b680: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B684u;
        goto label_19b684;
    }
    ctx->pc = 0x19B67Cu;
    SET_GPR_U32(ctx, 31, 0x19B684u);
    ctx->pc = 0x19B680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B67Cu;
    // 0x19b680: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2923E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2923E8u, 0x19B67Cu, 0x19B684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B684u;
label_19b684:
    // 0x19b684: 0x92030a92  lbu         $v1, 0xA92($s0)
    ctx->pc = 0x19b684u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2706)));
label_19b688:
    // 0x19b688: 0x96020548  lhu         $v0, 0x548($s0)
    ctx->pc = 0x19b688u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
label_19b68c:
    // 0x19b68c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19b68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19b690:
    // 0x19b690: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x19b690u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_19b694:
    // 0x19b694: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x19b694u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
label_19b698:
    // 0x19b698: 0xa2030a92  sb          $v1, 0xA92($s0)
    ctx->pc = 0x19b698u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2706), (uint8_t)GPR_U32(ctx, 3));
label_19b69c:
    // 0x19b69c: 0x10000028  b           . + 4 + (0x28 << 2)
label_19b6a0:
    if (ctx->pc == 0x19B6A0u) {
        ctx->pc = 0x19B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B69Cu;
        // 0x19b6a0: 0xa20002f4  sb          $zero, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B6A4u;
        goto label_19b6a4;
    }
    ctx->pc = 0x19B69Cu;
    {
        const bool branch_taken_0x19b69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B69Cu;
        // 0x19b6a0: 0xa20002f4  sb          $zero, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b69c) {
            ctx->pc = 0x19B740u;
            goto label_19b740;
        }
    }
    ctx->pc = 0x19B6A4u;
label_19b6a4:
    // 0x19b6a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19b6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19b6a8:
    // 0x19b6a8: 0xc066e82  jal         func_19BA08
label_19b6ac:
    if (ctx->pc == 0x19B6ACu) {
        ctx->pc = 0x19B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B6A8u;
        // 0x19b6ac: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B6B0u;
        goto label_19b6b0;
    }
    ctx->pc = 0x19B6A8u;
    SET_GPR_U32(ctx, 31, 0x19B6B0u);
    ctx->pc = 0x19B6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B6A8u;
    // 0x19b6ac: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BA08u, 0x19B6A8u, 0x19B6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B6B0u;
label_19b6b0:
    // 0x19b6b0: 0xc06de42  jal         func_1B7908
label_19b6b4:
    if (ctx->pc == 0x19B6B4u) {
        ctx->pc = 0x19B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B6B0u;
        // 0x19b6b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B6B8u;
        goto label_19b6b8;
    }
    ctx->pc = 0x19B6B0u;
    SET_GPR_U32(ctx, 31, 0x19B6B8u);
    ctx->pc = 0x19B6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B6B0u;
    // 0x19b6b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7908u, 0x19B6B0u, 0x19B6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B6B8u;
label_19b6b8:
    // 0x19b6b8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x19b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_19b6bc:
    // 0x19b6bc: 0xa21102f5  sb          $s1, 0x2F5($s0)
    ctx->pc = 0x19b6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 17));
label_19b6c0:
    // 0x19b6c0: 0xa6020a90  sh          $v0, 0xA90($s0)
    ctx->pc = 0x19b6c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2704), (uint16_t)GPR_U32(ctx, 2));
label_19b6c4:
    // 0x19b6c4: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x19b6c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_19b6c8:
    // 0x19b6c8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x19b6c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_19b6cc:
    // 0x19b6cc: 0x96020a90  lhu         $v0, 0xA90($s0)
    ctx->pc = 0x19b6ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2704)));
label_19b6d0:
    // 0x19b6d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19b6d4:
    // 0x19b6d4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x19b6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_19b6d8:
    // 0x19b6d8: 0x1c60001b  bgtz        $v1, . + 4 + (0x1B << 2)
label_19b6dc:
    if (ctx->pc == 0x19B6DCu) {
        ctx->pc = 0x19B6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B6D8u;
        // 0x19b6dc: 0xa6020a90  sh          $v0, 0xA90($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2704), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B6E0u;
        goto label_19b6e0;
    }
    ctx->pc = 0x19B6D8u;
    {
        const bool branch_taken_0x19b6d8 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x19B6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B6D8u;
        // 0x19b6dc: 0xa6020a90  sh          $v0, 0xA90($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2704), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b6d8) {
            ctx->pc = 0x19B748u;
            goto label_19b748;
        }
    }
    ctx->pc = 0x19B6E0u;
label_19b6e0:
    // 0x19b6e0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x19b6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_19b6e4:
    // 0x19b6e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19b6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19b6e8:
    // 0x19b6e8: 0xa6020a90  sh          $v0, 0xA90($s0)
    ctx->pc = 0x19b6e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2704), (uint16_t)GPR_U32(ctx, 2));
label_19b6ec:
    // 0x19b6ec: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x19b6ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
label_19b6f0:
    // 0x19b6f0: 0x10000014  b           . + 4 + (0x14 << 2)
label_19b6f4:
    if (ctx->pc == 0x19B6F4u) {
        ctx->pc = 0x19B6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B6F0u;
        // 0x19b6f4: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B6F8u;
        goto label_19b6f8;
    }
    ctx->pc = 0x19B6F0u;
    {
        const bool branch_taken_0x19b6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B6F0u;
        // 0x19b6f4: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b6f0) {
            ctx->pc = 0x19B744u;
            goto label_19b744;
        }
    }
    ctx->pc = 0x19B6F8u;
label_19b6f8:
    // 0x19b6f8: 0x96020a90  lhu         $v0, 0xA90($s0)
    ctx->pc = 0x19b6f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2704)));
label_19b6fc:
    // 0x19b6fc: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x19b6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_19b700:
    // 0x19b700: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19b700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19b704:
    // 0x19b704: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19b704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19b708:
    // 0x19b708: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x19b708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_19b70c:
    // 0x19b70c: 0xa6020a90  sh          $v0, 0xA90($s0)
    ctx->pc = 0x19b70cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2704), (uint16_t)GPR_U32(ctx, 2));
label_19b710:
    // 0x19b710: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x19b710u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_19b714:
    // 0x19b714: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19b714u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19b718:
    // 0x19b718: 0x0  nop
    ctx->pc = 0x19b718u;
    // NOP
label_19b71c:
    // 0x19b71c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19b71cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19b720:
    // 0x19b720: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x19b720u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_19b724:
    // 0x19b724: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
label_19b728:
    if (ctx->pc == 0x19B728u) {
        ctx->pc = 0x19B728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B724u;
        // 0x19b728: 0xe600024c  swc1        $f0, 0x24C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B72Cu;
        goto label_19b72c;
    }
    ctx->pc = 0x19B724u;
    {
        const bool branch_taken_0x19b724 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x19B728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B724u;
        // 0x19b728: 0xe600024c  swc1        $f0, 0x24C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b724) {
            ctx->pc = 0x19B748u;
            goto label_19b748;
        }
    }
    ctx->pc = 0x19B72Cu;
label_19b72c:
    // 0x19b72c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19b72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19b730:
    // 0x19b730: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x19b730u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_19b734:
    // 0x19b734: 0x10000003  b           . + 4 + (0x3 << 2)
label_19b738:
    if (ctx->pc == 0x19B738u) {
        ctx->pc = 0x19B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B734u;
        // 0x19b738: 0xa20202f5  sb          $v0, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B73Cu;
        goto label_19b73c;
    }
    ctx->pc = 0x19B734u;
    {
        const bool branch_taken_0x19b734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B734u;
        // 0x19b738: 0xa20202f5  sb          $v0, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b734) {
            ctx->pc = 0x19B744u;
            goto label_19b744;
        }
    }
    ctx->pc = 0x19B73Cu;
label_19b73c:
    // 0x19b73c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x19b73cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_19b740:
    // 0x19b740: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x19b740u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
label_19b744:
    // 0x19b744: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x19b744u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_19b748:
    // 0x19b748: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x19b748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19b74c:
    // 0x19b74c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19b74cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19b750:
    // 0x19b750: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19b750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19b754:
    // 0x19b754: 0x3e00008  jr          $ra
label_19b758:
    if (ctx->pc == 0x19B758u) {
        ctx->pc = 0x19B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B754u;
        // 0x19b758: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B75Cu;
        goto label_19b75c;
    }
    ctx->pc = 0x19B754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B754u;
        // 0x19b758: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B75Cu;
label_19b75c:
    // 0x19b75c: 0x0  nop
    ctx->pc = 0x19b75cu;
    // NOP
    ctx->pc = 0x19b760u;
}
