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

// Function: func_0037D3C8
// Address: 0x37d3c8 - 0x37d558
void func_0037D3C8_0x37d3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037D3C8_0x37d3c8");
#endif

    ctx->pc = 0x37d3c8u;

    // 0x37d3c8: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x37d3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x37d3cc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x37d3ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d3d0: 0x2446a790  addiu       $a2, $v0, -0x5870
    ctx->pc = 0x37d3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944656));
    // 0x37d3d4: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x37d3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x76A7A4u));
    // 0x37d3d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37d3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37d3dc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37D3DCu;
    {
        const bool branch_taken_0x37d3dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x37D3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D3DCu;
        // 0x37d3e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d3dc) {
            ctx->pc = 0x37D3F0u;
            goto label_37d3f0;
        }
    }
    ctx->pc = 0x37D3E4u;
    // 0x37d3e4: 0x94e2003a  lhu         $v0, 0x3A($a3)
    ctx->pc = 0x37d3e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 58)));
    // 0x37d3e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37D3E8u;
    {
        const bool branch_taken_0x37d3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D3E8u;
        // 0x37d3ec: 0x94e30028  lhu         $v1, 0x28($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d3e8) {
            ctx->pc = 0x37D3F8u;
            goto label_37d3f8;
        }
    }
    ctx->pc = 0x37D3F0u;
label_37d3f0:
    // 0x37d3f0: 0x94e20038  lhu         $v0, 0x38($a3)
    ctx->pc = 0x37d3f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x37d3f4: 0x94e30026  lhu         $v1, 0x26($a3)
    ctx->pc = 0x37d3f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 38)));
label_37d3f8:
    // 0x37d3f8: 0xa4e2003c  sh          $v0, 0x3C($a3)
    ctx->pc = 0x37d3f8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 60), (uint16_t)GPR_U32(ctx, 2));
    // 0x37d3fc: 0xa4e3002a  sh          $v1, 0x2A($a3)
    ctx->pc = 0x37d3fcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x37d400: 0x84e3003c  lh          $v1, 0x3C($a3)
    ctx->pc = 0x37d400u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x37d404: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x37d404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x37d408: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37D408u;
    {
        const bool branch_taken_0x37d408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x37D40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D408u;
        // 0x37d40c: 0x94e4003c  lhu         $a0, 0x3C($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d408) {
            ctx->pc = 0x37D418u;
            goto label_37d418;
        }
    }
    ctx->pc = 0x37D410u;
    // 0x37d410: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x37D410u;
    {
        const bool branch_taken_0x37d410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D410u;
        // 0x37d414: 0x24027fff  addiu       $v0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d410) {
            ctx->pc = 0x37D41Cu;
            goto label_37d41c;
        }
    }
    ctx->pc = 0x37D418u;
label_37d418:
    // 0x37d418: 0x41200  sll         $v0, $a0, 8
    ctx->pc = 0x37d418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_37d41c:
    // 0x37d41c: 0xa4e2003c  sh          $v0, 0x3C($a3)
    ctx->pc = 0x37d41cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 60), (uint16_t)GPR_U32(ctx, 2));
    // 0x37d420: 0x90e30005  lbu         $v1, 0x5($a3)
    ctx->pc = 0x37d420u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x37d424: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37d424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37d428: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x37D428u;
    {
        const bool branch_taken_0x37d428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x37D42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D428u;
        // 0x37d42c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d428) {
            ctx->pc = 0x37D4B8u;
            goto label_37d4b8;
        }
    }
    ctx->pc = 0x37D430u;
    // 0x37d430: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37D430u;
    {
        const bool branch_taken_0x37d430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D430u;
        // 0x37d434: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d430) {
            ctx->pc = 0x37D448u;
            goto label_37d448;
        }
    }
    ctx->pc = 0x37D438u;
    // 0x37d438: 0x50620014  beql        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x37D438u;
    {
        const bool branch_taken_0x37d438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x37d438) {
            ctx->pc = 0x37D43Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D438u;
            // 0x37d43c: 0x84c2003a  lh          $v0, 0x3A($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 58)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D48Cu;
            goto label_37d48c;
        }
    }
    ctx->pc = 0x37D440u;
    // 0x37d440: 0x3e00008  jr          $ra
    ctx->pc = 0x37D440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D440u;
        // 0x37d444: 0xa4e5003e  sh          $a1, 0x3E($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 62), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D448u;
label_37d448:
    // 0x37d448: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x37d448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37d44c: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x37D44Cu;
    {
        const bool branch_taken_0x37d44c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x37D450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D44Cu;
        // 0x37d450: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d44c) {
            ctx->pc = 0x37D4F8u;
            goto label_37d4f8;
        }
    }
    ctx->pc = 0x37D454u;
    // 0x37d454: 0x5462003e  bnel        $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x37D454u;
    {
        const bool branch_taken_0x37d454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x37d454) {
            ctx->pc = 0x37D458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D454u;
            // 0x37d458: 0xa4e5003e  sh          $a1, 0x3E($a3) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 7), 62), (uint16_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D550u;
            goto label_37d550;
        }
    }
    ctx->pc = 0x37D45Cu;
    // 0x37d45c: 0x84c2003a  lh          $v0, 0x3A($a2)
    ctx->pc = 0x37d45cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 58)));
    // 0x37d460: 0x24037f00  addiu       $v1, $zero, 0x7F00
    ctx->pc = 0x37d460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32512));
    // 0x37d464: 0x84e5003c  lh          $a1, 0x3C($a3)
    ctx->pc = 0x37d464u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x37d468: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x37D468u;
    {
        const bool branch_taken_0x37d468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d468) {
            ctx->pc = 0x37D46Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D468u;
            // 0x37d46c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D470u;
            goto label_37d470;
        }
    }
    ctx->pc = 0x37D470u;
label_37d470:
    // 0x37d470: 0x84e60030  lh          $a2, 0x30($a3)
    ctx->pc = 0x37d470u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x37d474: 0x24047f00  addiu       $a0, $zero, 0x7F00
    ctx->pc = 0x37d474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32512));
    // 0x37d478: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x37d478u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x37d47c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x37d47cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x37d480: 0x1012  mflo        $v0
    ctx->pc = 0x37d480u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x37d484: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x37D484u;
    {
        const bool branch_taken_0x37d484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D484u;
        // 0x37d488: 0x461018  mult        $v0, $v0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d484) {
            ctx->pc = 0x37D540u;
            goto label_37d540;
        }
    }
    ctx->pc = 0x37D48Cu;
label_37d48c:
    // 0x37d48c: 0x24037f00  addiu       $v1, $zero, 0x7F00
    ctx->pc = 0x37d48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32512));
    // 0x37d490: 0x84e5003c  lh          $a1, 0x3C($a3)
    ctx->pc = 0x37d490u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x37d494: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x37D494u;
    {
        const bool branch_taken_0x37d494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d494) {
            ctx->pc = 0x37D498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D494u;
            // 0x37d498: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D49Cu;
            goto label_37d49c;
        }
    }
    ctx->pc = 0x37D49Cu;
label_37d49c:
    // 0x37d49c: 0x84e60030  lh          $a2, 0x30($a3)
    ctx->pc = 0x37d49cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x37d4a0: 0x24047f00  addiu       $a0, $zero, 0x7F00
    ctx->pc = 0x37d4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32512));
    // 0x37d4a4: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x37d4a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x37d4a8: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x37d4a8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x37d4ac: 0x1012  mflo        $v0
    ctx->pc = 0x37d4acu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x37d4b0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x37D4B0u;
    {
        const bool branch_taken_0x37d4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D4B0u;
        // 0x37d4b4: 0x461018  mult        $v0, $v0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d4b0) {
            ctx->pc = 0x37D540u;
            goto label_37d540;
        }
    }
    ctx->pc = 0x37D4B8u;
label_37d4b8:
    // 0x37d4b8: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x37d4b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x37d4bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x37d4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x37d4c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x37D4C0u;
    {
        const bool branch_taken_0x37d4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D4C0u;
        // 0x37d4c4: 0x24037f00  addiu       $v1, $zero, 0x7F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d4c0) {
            ctx->pc = 0x37D4E0u;
            goto label_37d4e0;
        }
    }
    ctx->pc = 0x37D4C8u;
    // 0x37d4c8: 0x84c2003c  lh          $v0, 0x3C($a2)
    ctx->pc = 0x37d4c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x37d4cc: 0x84e4002a  lh          $a0, 0x2A($a3)
    ctx->pc = 0x37d4ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 42)));
    // 0x37d4d0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x37D4D0u;
    {
        const bool branch_taken_0x37d4d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d4d0) {
            ctx->pc = 0x37D4D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D4D0u;
            // 0x37d4d4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D4D8u;
            goto label_37d4d8;
        }
    }
    ctx->pc = 0x37D4D8u;
label_37d4d8:
    // 0x37d4d8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x37D4D8u;
    {
        const bool branch_taken_0x37d4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D4D8u;
        // 0x37d4dc: 0x441018  mult        $v0, $v0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d4d8) {
            ctx->pc = 0x37D540u;
            goto label_37d540;
        }
    }
    ctx->pc = 0x37D4E0u;
label_37d4e0:
    // 0x37d4e0: 0x84c2003e  lh          $v0, 0x3E($a2)
    ctx->pc = 0x37d4e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 62)));
    // 0x37d4e4: 0x84e4002a  lh          $a0, 0x2A($a3)
    ctx->pc = 0x37d4e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 42)));
    // 0x37d4e8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x37D4E8u;
    {
        const bool branch_taken_0x37d4e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d4e8) {
            ctx->pc = 0x37D4ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D4E8u;
            // 0x37d4ec: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D4F0u;
            goto label_37d4f0;
        }
    }
    ctx->pc = 0x37D4F0u;
label_37d4f0:
    // 0x37d4f0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x37D4F0u;
    {
        const bool branch_taken_0x37d4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D4F0u;
        // 0x37d4f4: 0x441018  mult        $v0, $v0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d4f0) {
            ctx->pc = 0x37D540u;
            goto label_37d540;
        }
    }
    ctx->pc = 0x37D4F8u;
label_37d4f8:
    // 0x37d4f8: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x37d4f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x37d4fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x37d4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x37d500: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x37D500u;
    {
        const bool branch_taken_0x37d500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d500) {
            ctx->pc = 0x37D504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D500u;
            // 0x37d504: 0x84c20042  lh          $v0, 0x42($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 66)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D50Cu;
            goto label_37d50c;
        }
    }
    ctx->pc = 0x37D508u;
    // 0x37d508: 0x84c20040  lh          $v0, 0x40($a2)
    ctx->pc = 0x37d508u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 64)));
label_37d50c:
    // 0x37d50c: 0x24037f00  addiu       $v1, $zero, 0x7F00
    ctx->pc = 0x37d50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32512));
    // 0x37d510: 0x84e4002a  lh          $a0, 0x2A($a3)
    ctx->pc = 0x37d510u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 42)));
    // 0x37d514: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x37D514u;
    {
        const bool branch_taken_0x37d514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d514) {
            ctx->pc = 0x37D518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D514u;
            // 0x37d518: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D51Cu;
            goto label_37d51c;
        }
    }
    ctx->pc = 0x37D51Cu;
label_37d51c:
    // 0x37d51c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x37d51cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x37d520: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x37d520u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x37d524: 0x1012  mflo        $v0
    ctx->pc = 0x37d524u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x37d528: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37d528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d52c: 0x84e2003c  lh          $v0, 0x3C($a3)
    ctx->pc = 0x37d52cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x37d530: 0x24037f00  addiu       $v1, $zero, 0x7F00
    ctx->pc = 0x37d530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32512));
    // 0x37d534: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x37D534u;
    {
        const bool branch_taken_0x37d534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d534) {
            ctx->pc = 0x37D538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D534u;
            // 0x37d538: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D53Cu;
            goto label_37d53c;
        }
    }
    ctx->pc = 0x37D53Cu;
label_37d53c:
    // 0x37d53c: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x37d53cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_37d540:
    // 0x37d540: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x37d540u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x37d544: 0x1012  mflo        $v0
    ctx->pc = 0x37d544u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x37d548: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37d548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d54c: 0xa4e5003e  sh          $a1, 0x3E($a3)
    ctx->pc = 0x37d54cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 62), (uint16_t)GPR_U32(ctx, 5));
label_37d550:
    // 0x37d550: 0x3e00008  jr          $ra
    ctx->pc = 0x37D550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D558u;
}
