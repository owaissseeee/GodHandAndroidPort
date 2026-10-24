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

// Function: func_0025C5D8
// Address: 0x25c5d8 - 0x25c830
void func_0025C5D8_0x25c5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0025C5D8_0x25c5d8");
#endif

    switch (ctx->pc) {
        case 0x25c5d8u: goto label_25c5d8;
        case 0x25c5dcu: goto label_25c5dc;
        case 0x25c5e0u: goto label_25c5e0;
        case 0x25c5e4u: goto label_25c5e4;
        case 0x25c5e8u: goto label_25c5e8;
        case 0x25c5ecu: goto label_25c5ec;
        case 0x25c5f0u: goto label_25c5f0;
        case 0x25c5f4u: goto label_25c5f4;
        case 0x25c5f8u: goto label_25c5f8;
        case 0x25c5fcu: goto label_25c5fc;
        case 0x25c600u: goto label_25c600;
        case 0x25c604u: goto label_25c604;
        case 0x25c608u: goto label_25c608;
        case 0x25c60cu: goto label_25c60c;
        case 0x25c610u: goto label_25c610;
        case 0x25c614u: goto label_25c614;
        case 0x25c618u: goto label_25c618;
        case 0x25c61cu: goto label_25c61c;
        case 0x25c620u: goto label_25c620;
        case 0x25c624u: goto label_25c624;
        case 0x25c628u: goto label_25c628;
        case 0x25c62cu: goto label_25c62c;
        case 0x25c630u: goto label_25c630;
        case 0x25c634u: goto label_25c634;
        case 0x25c638u: goto label_25c638;
        case 0x25c63cu: goto label_25c63c;
        case 0x25c640u: goto label_25c640;
        case 0x25c644u: goto label_25c644;
        case 0x25c648u: goto label_25c648;
        case 0x25c64cu: goto label_25c64c;
        case 0x25c650u: goto label_25c650;
        case 0x25c654u: goto label_25c654;
        case 0x25c658u: goto label_25c658;
        case 0x25c65cu: goto label_25c65c;
        case 0x25c660u: goto label_25c660;
        case 0x25c664u: goto label_25c664;
        case 0x25c668u: goto label_25c668;
        case 0x25c66cu: goto label_25c66c;
        case 0x25c670u: goto label_25c670;
        case 0x25c674u: goto label_25c674;
        case 0x25c678u: goto label_25c678;
        case 0x25c67cu: goto label_25c67c;
        case 0x25c680u: goto label_25c680;
        case 0x25c684u: goto label_25c684;
        case 0x25c688u: goto label_25c688;
        case 0x25c68cu: goto label_25c68c;
        case 0x25c690u: goto label_25c690;
        case 0x25c694u: goto label_25c694;
        case 0x25c698u: goto label_25c698;
        case 0x25c69cu: goto label_25c69c;
        case 0x25c6a0u: goto label_25c6a0;
        case 0x25c6a4u: goto label_25c6a4;
        case 0x25c6a8u: goto label_25c6a8;
        case 0x25c6acu: goto label_25c6ac;
        case 0x25c6b0u: goto label_25c6b0;
        case 0x25c6b4u: goto label_25c6b4;
        case 0x25c6b8u: goto label_25c6b8;
        case 0x25c6bcu: goto label_25c6bc;
        case 0x25c6c0u: goto label_25c6c0;
        case 0x25c6c4u: goto label_25c6c4;
        case 0x25c6c8u: goto label_25c6c8;
        case 0x25c6ccu: goto label_25c6cc;
        case 0x25c6d0u: goto label_25c6d0;
        case 0x25c6d4u: goto label_25c6d4;
        case 0x25c6d8u: goto label_25c6d8;
        case 0x25c6dcu: goto label_25c6dc;
        case 0x25c6e0u: goto label_25c6e0;
        case 0x25c6e4u: goto label_25c6e4;
        case 0x25c6e8u: goto label_25c6e8;
        case 0x25c6ecu: goto label_25c6ec;
        case 0x25c6f0u: goto label_25c6f0;
        case 0x25c6f4u: goto label_25c6f4;
        case 0x25c6f8u: goto label_25c6f8;
        case 0x25c6fcu: goto label_25c6fc;
        case 0x25c700u: goto label_25c700;
        case 0x25c704u: goto label_25c704;
        case 0x25c708u: goto label_25c708;
        case 0x25c70cu: goto label_25c70c;
        case 0x25c710u: goto label_25c710;
        case 0x25c714u: goto label_25c714;
        case 0x25c718u: goto label_25c718;
        case 0x25c71cu: goto label_25c71c;
        case 0x25c720u: goto label_25c720;
        case 0x25c724u: goto label_25c724;
        case 0x25c728u: goto label_25c728;
        case 0x25c72cu: goto label_25c72c;
        case 0x25c730u: goto label_25c730;
        case 0x25c734u: goto label_25c734;
        case 0x25c738u: goto label_25c738;
        case 0x25c73cu: goto label_25c73c;
        case 0x25c740u: goto label_25c740;
        case 0x25c744u: goto label_25c744;
        case 0x25c748u: goto label_25c748;
        case 0x25c74cu: goto label_25c74c;
        case 0x25c750u: goto label_25c750;
        case 0x25c754u: goto label_25c754;
        case 0x25c758u: goto label_25c758;
        case 0x25c75cu: goto label_25c75c;
        case 0x25c760u: goto label_25c760;
        case 0x25c764u: goto label_25c764;
        case 0x25c768u: goto label_25c768;
        case 0x25c76cu: goto label_25c76c;
        case 0x25c770u: goto label_25c770;
        case 0x25c774u: goto label_25c774;
        case 0x25c778u: goto label_25c778;
        case 0x25c77cu: goto label_25c77c;
        case 0x25c780u: goto label_25c780;
        case 0x25c784u: goto label_25c784;
        case 0x25c788u: goto label_25c788;
        case 0x25c78cu: goto label_25c78c;
        case 0x25c790u: goto label_25c790;
        case 0x25c794u: goto label_25c794;
        case 0x25c798u: goto label_25c798;
        case 0x25c79cu: goto label_25c79c;
        case 0x25c7a0u: goto label_25c7a0;
        case 0x25c7a4u: goto label_25c7a4;
        case 0x25c7a8u: goto label_25c7a8;
        case 0x25c7acu: goto label_25c7ac;
        case 0x25c7b0u: goto label_25c7b0;
        case 0x25c7b4u: goto label_25c7b4;
        case 0x25c7b8u: goto label_25c7b8;
        case 0x25c7bcu: goto label_25c7bc;
        case 0x25c7c0u: goto label_25c7c0;
        case 0x25c7c4u: goto label_25c7c4;
        case 0x25c7c8u: goto label_25c7c8;
        case 0x25c7ccu: goto label_25c7cc;
        case 0x25c7d0u: goto label_25c7d0;
        case 0x25c7d4u: goto label_25c7d4;
        case 0x25c7d8u: goto label_25c7d8;
        case 0x25c7dcu: goto label_25c7dc;
        case 0x25c7e0u: goto label_25c7e0;
        case 0x25c7e4u: goto label_25c7e4;
        case 0x25c7e8u: goto label_25c7e8;
        case 0x25c7ecu: goto label_25c7ec;
        case 0x25c7f0u: goto label_25c7f0;
        case 0x25c7f4u: goto label_25c7f4;
        case 0x25c7f8u: goto label_25c7f8;
        case 0x25c7fcu: goto label_25c7fc;
        case 0x25c800u: goto label_25c800;
        case 0x25c804u: goto label_25c804;
        case 0x25c808u: goto label_25c808;
        case 0x25c80cu: goto label_25c80c;
        case 0x25c810u: goto label_25c810;
        case 0x25c814u: goto label_25c814;
        case 0x25c818u: goto label_25c818;
        case 0x25c81cu: goto label_25c81c;
        case 0x25c820u: goto label_25c820;
        case 0x25c824u: goto label_25c824;
        case 0x25c828u: goto label_25c828;
        case 0x25c82cu: goto label_25c82c;
        default: break;
    }

    ctx->pc = 0x25c5d8u;

label_25c5d8:
    // 0x25c5d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25c5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_25c5dc:
    // 0x25c5dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25c5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_25c5e0:
    // 0x25c5e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25c5e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25c5e4:
    // 0x25c5e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25c5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_25c5e8:
    // 0x25c5e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25c5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25c5ec:
    // 0x25c5ec: 0xc0b6dac  jal         func_2DB6B0
label_25c5f0:
    if (ctx->pc == 0x25C5F0u) {
        ctx->pc = 0x25C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C5ECu;
        // 0x25c5f0: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C5F4u;
        goto label_25c5f4;
    }
    ctx->pc = 0x25C5ECu;
    SET_GPR_U32(ctx, 31, 0x25C5F4u);
    ctx->pc = 0x25C5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C5ECu;
    // 0x25c5f0: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x25C5ECu, 0x25C5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C5F4u;
label_25c5f4:
    // 0x25c5f4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x25c5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_25c5f8:
    // 0x25c5f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25c5f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25c5fc:
    // 0x25c5fc: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x25c5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
label_25c600:
    // 0x25c600: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25c600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c604:
    // 0x25c604: 0xc04d476  jal         func_1351D8
label_25c608:
    if (ctx->pc == 0x25C608u) {
        ctx->pc = 0x25C608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C604u;
        // 0x25c608: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C60Cu;
        goto label_25c60c;
    }
    ctx->pc = 0x25C604u;
    SET_GPR_U32(ctx, 31, 0x25C60Cu);
    ctx->pc = 0x25C608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C604u;
    // 0x25c608: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x25C604u, 0x25C60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C60Cu;
label_25c60c:
    // 0x25c60c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x25c60cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_25c610:
    // 0x25c610: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25c614:
    // 0x25c614: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x25c614u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25c618:
    // 0x25c618: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_25c61c:
    if (ctx->pc == 0x25C61Cu) {
        ctx->pc = 0x25C61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C618u;
        // 0x25c61c: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C620u;
        goto label_25c620;
    }
    ctx->pc = 0x25C618u;
    {
        const bool branch_taken_0x25c618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C618u;
        // 0x25c61c: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c618) {
            ctx->pc = 0x25C634u;
            goto label_25c634;
        }
    }
    ctx->pc = 0x25C620u;
label_25c620:
    // 0x25c620: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25c620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25c624:
    // 0x25c624: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
label_25c628:
    if (ctx->pc == 0x25C628u) {
        ctx->pc = 0x25C628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C624u;
        // 0x25c628: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C62Cu;
        goto label_25c62c;
    }
    ctx->pc = 0x25C624u;
    {
        const bool branch_taken_0x25c624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25C628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C624u;
        // 0x25c628: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c624) {
            ctx->pc = 0x25C694u;
            goto label_25c694;
        }
    }
    ctx->pc = 0x25C62Cu;
label_25c62c:
    // 0x25c62c: 0x10000075  b           . + 4 + (0x75 << 2)
label_25c630:
    if (ctx->pc == 0x25C630u) {
        ctx->pc = 0x25C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C62Cu;
        // 0x25c630: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C634u;
        goto label_25c634;
    }
    ctx->pc = 0x25C62Cu;
    {
        const bool branch_taken_0x25c62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C62Cu;
        // 0x25c630: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c62c) {
            ctx->pc = 0x25C804u;
            goto label_25c804;
        }
    }
    ctx->pc = 0x25C634u;
label_25c634:
    // 0x25c634: 0xc09ac7a  jal         func_26B1E8
label_25c638:
    if (ctx->pc == 0x25C638u) {
        ctx->pc = 0x25C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C634u;
        // 0x25c638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C63Cu;
        goto label_25c63c;
    }
    ctx->pc = 0x25C634u;
    SET_GPR_U32(ctx, 31, 0x25C63Cu);
    ctx->pc = 0x25C638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C634u;
    // 0x25c638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x25C634u, 0x25C63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C63Cu;
label_25c63c:
    // 0x25c63c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25c63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_25c640:
    // 0x25c640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25c640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c644:
    // 0x25c644: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25c644u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25c648:
    // 0x25c648: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25c648u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c64c:
    // 0x25c64c: 0x8c453bfc  lw          $a1, 0x3BFC($v0)
    ctx->pc = 0x25c64cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15356)));
label_25c650:
    // 0x25c650: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25c650u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c654:
    // 0x25c654: 0x8c463c00  lw          $a2, 0x3C00($v0)
    ctx->pc = 0x25c654u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15360)));
label_25c658:
    // 0x25c658: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25c658u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c65c:
    // 0x25c65c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25c65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_25c660:
    // 0x25c660: 0xc0aa15e  jal         func_2A8578
label_25c664:
    if (ctx->pc == 0x25C664u) {
        ctx->pc = 0x25C664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C660u;
        // 0x25c664: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C668u;
        goto label_25c668;
    }
    ctx->pc = 0x25C660u;
    SET_GPR_U32(ctx, 31, 0x25C668u);
    ctx->pc = 0x25C664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C660u;
    // 0x25c664: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25C660u, 0x25C668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C668u;
label_25c668:
    // 0x25c668: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25c668u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25c66c:
    // 0x25c66c: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x25c66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_25c670:
    // 0x25c670: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x25c670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25c674:
    // 0x25c674: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x25c674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_25c678:
    // 0x25c678: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25c678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25c67c:
    // 0x25c67c: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x25c67cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
label_25c680:
    // 0x25c680: 0xae0405f4  sw          $a0, 0x5F4($s0)
    ctx->pc = 0x25c680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 4));
label_25c684:
    // 0x25c684: 0xa605056e  sh          $a1, 0x56E($s0)
    ctx->pc = 0x25c684u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 5));
label_25c688:
    // 0x25c688: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x25c688u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_25c68c:
    // 0x25c68c: 0xae0016ec  sw          $zero, 0x16EC($s0)
    ctx->pc = 0x25c68cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5868), GPR_U32(ctx, 0));
label_25c690:
    // 0x25c690: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x25c690u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_25c694:
    // 0x25c694: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x25c694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_25c698:
    // 0x25c698: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_25c69c:
    if (ctx->pc == 0x25C69Cu) {
        ctx->pc = 0x25C69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C698u;
        // 0x25c69c: 0x8602056e  lh          $v0, 0x56E($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C6A0u;
        goto label_25c6a0;
    }
    ctx->pc = 0x25C698u;
    {
        const bool branch_taken_0x25c698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c698) {
            ctx->pc = 0x25C69Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C698u;
            // 0x25c69c: 0x8602056e  lh          $v0, 0x56E($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C6E8u;
            goto label_25c6e8;
        }
    }
    ctx->pc = 0x25C6A0u;
label_25c6a0:
    // 0x25c6a0: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x25c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
label_25c6a4:
    // 0x25c6a4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x25c6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_25c6a8:
    // 0x25c6a8: 0xc6010114  lwc1        $f1, 0x114($s0)
    ctx->pc = 0x25c6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25c6ac:
    // 0x25c6ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25c6acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25c6b0:
    // 0x25c6b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c6b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25c6b4:
    // 0x25c6b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25c6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_25c6b8:
    // 0x25c6b8: 0xae0216d0  sw          $v0, 0x16D0($s0)
    ctx->pc = 0x25c6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
label_25c6bc:
    // 0x25c6bc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x25c6bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25c6c0:
    // 0x25c6c0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x25c6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_25c6c4:
    // 0x25c6c4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x25c6c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_25c6c8:
    // 0x25c6c8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x25c6c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_25c6cc:
    // 0x25c6cc: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x25c6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_25c6d0:
    // 0x25c6d0: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x25c6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_25c6d4:
    // 0x25c6d4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x25c6d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_25c6d8:
    // 0x25c6d8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x25c6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c6dc:
    // 0x25c6dc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25c6dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_25c6e0:
    // 0x25c6e0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x25c6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_25c6e4:
    // 0x25c6e4: 0x8602056e  lh          $v0, 0x56E($s0)
    ctx->pc = 0x25c6e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
label_25c6e8:
    // 0x25c6e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_25c6ec:
    if (ctx->pc == 0x25C6ECu) {
        ctx->pc = 0x25C6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C6E8u;
        // 0x25c6ec: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C6F0u;
        goto label_25c6f0;
    }
    ctx->pc = 0x25C6E8u;
    {
        const bool branch_taken_0x25c6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C6E8u;
        // 0x25c6ec: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c6e8) {
            ctx->pc = 0x25C710u;
            goto label_25c710;
        }
    }
    ctx->pc = 0x25C6F0u;
label_25c6f0:
    // 0x25c6f0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x25c6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_25c6f4:
    // 0x25c6f4: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x25c6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_25c6f8:
    // 0x25c6f8: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x25c6f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
label_25c6fc:
    // 0x25c6fc: 0x26230550  addiu       $v1, $s1, 0x550
    ctx->pc = 0x25c6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
label_25c700:
    // 0x25c700: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x25c700u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_25c704:
    // 0x25c704: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x25c704u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_25c708:
    // 0x25c708: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x25c708u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_25c70c:
    // 0x25c70c: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x25c70cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_25c710:
    // 0x25c710: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x25c710u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_25c714:
    // 0x25c714: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x25c714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_25c718:
    // 0x25c718: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_25c71c:
    if (ctx->pc == 0x25C71Cu) {
        ctx->pc = 0x25C720u;
        goto label_25c720;
    }
    ctx->pc = 0x25C718u;
    {
        const bool branch_taken_0x25c718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c718) {
            ctx->pc = 0x25C768u;
            goto label_25c768;
        }
    }
    ctx->pc = 0x25C720u;
label_25c720:
    // 0x25c720: 0x8e0205f4  lw          $v0, 0x5F4($s0)
    ctx->pc = 0x25c720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1524)));
label_25c724:
    // 0x25c724: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_25c728:
    if (ctx->pc == 0x25C728u) {
        ctx->pc = 0x25C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C724u;
        // 0x25c728: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C72Cu;
        goto label_25c72c;
    }
    ctx->pc = 0x25C724u;
    {
        const bool branch_taken_0x25c724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C724u;
        // 0x25c728: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c724) {
            ctx->pc = 0x25C768u;
            goto label_25c768;
        }
    }
    ctx->pc = 0x25C72Cu;
label_25c72c:
    // 0x25c72c: 0xae0005f4  sw          $zero, 0x5F4($s0)
    ctx->pc = 0x25c72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 0));
label_25c730:
    // 0x25c730: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x25c730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_25c734:
    // 0x25c734: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25c734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25c738:
    // 0x25c738: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x25c738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25c73c:
    // 0x25c73c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25c73cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c740:
    // 0x25c740: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x25c740u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_25c744:
    // 0x25c744: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x25c744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_25c748:
    // 0x25c748: 0x40f809  jalr        $v0
label_25c74c:
    if (ctx->pc == 0x25C74Cu) {
        ctx->pc = 0x25C74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C748u;
        // 0x25c74c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C750u;
        goto label_25c750;
    }
    ctx->pc = 0x25C748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25C750u);
        ctx->pc = 0x25C74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C748u;
        // 0x25c74c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C748u, 0x25C750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25C750u;
label_25c750:
    // 0x25c750: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x25c750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_25c754:
    // 0x25c754: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x25c754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_25c758:
    // 0x25c758: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25c758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25c75c:
    // 0x25c75c: 0x2484b000  addiu       $a0, $a0, -0x5000
    ctx->pc = 0x25c75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
label_25c760:
    // 0x25c760: 0xc0aa65e  jal         func_2A9978
label_25c764:
    if (ctx->pc == 0x25C764u) {
        ctx->pc = 0x25C764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C760u;
        // 0x25c764: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C768u;
        goto label_25c768;
    }
    ctx->pc = 0x25C760u;
    SET_GPR_U32(ctx, 31, 0x25C768u);
    ctx->pc = 0x25C764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C760u;
    // 0x25c764: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9978u, 0x25C760u, 0x25C768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C768u;
label_25c768:
    // 0x25c768: 0xc055f06  jal         func_157C18
label_25c76c:
    if (ctx->pc == 0x25C76Cu) {
        ctx->pc = 0x25C76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C768u;
        // 0x25c76c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C770u;
        goto label_25c770;
    }
    ctx->pc = 0x25C768u;
    SET_GPR_U32(ctx, 31, 0x25C770u);
    ctx->pc = 0x25C76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C768u;
    // 0x25c76c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25C768u, 0x25C770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C770u;
label_25c770:
    // 0x25c770: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_25c774:
    if (ctx->pc == 0x25C774u) {
        ctx->pc = 0x25C778u;
        goto label_25c778;
    }
    ctx->pc = 0x25C770u;
    {
        const bool branch_taken_0x25c770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c770) {
            ctx->pc = 0x25C7DCu;
            goto label_25c7dc;
        }
    }
    ctx->pc = 0x25C778u;
label_25c778:
    // 0x25c778: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x25c778u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_25c77c:
    // 0x25c77c: 0x1c400015  bgtz        $v0, . + 4 + (0x15 << 2)
label_25c780:
    if (ctx->pc == 0x25C780u) {
        ctx->pc = 0x25C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C77Cu;
        // 0x25c780: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C784u;
        goto label_25c784;
    }
    ctx->pc = 0x25C77Cu;
    {
        const bool branch_taken_0x25c77c = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x25C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C77Cu;
        // 0x25c780: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c77c) {
            ctx->pc = 0x25C7D4u;
            goto label_25c7d4;
        }
    }
    ctx->pc = 0x25C784u;
label_25c784:
    // 0x25c784: 0x8e021644  lw          $v0, 0x1644($s0)
    ctx->pc = 0x25c784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5700)));
label_25c788:
    // 0x25c788: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25c788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_25c78c:
    // 0x25c78c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_25c790:
    if (ctx->pc == 0x25C790u) {
        ctx->pc = 0x25C790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C78Cu;
        // 0x25c790: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C794u;
        goto label_25c794;
    }
    ctx->pc = 0x25C78Cu;
    {
        const bool branch_taken_0x25c78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C78Cu;
        // 0x25c790: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c78c) {
            ctx->pc = 0x25C7ACu;
            goto label_25c7ac;
        }
    }
    ctx->pc = 0x25C794u;
label_25c794:
    // 0x25c794: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x25c794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_25c798:
    // 0x25c798: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x25c798u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
label_25c79c:
    // 0x25c79c: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x25c79cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
label_25c7a0:
    // 0x25c7a0: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x25c7a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_25c7a4:
    // 0x25c7a4: 0x1000001b  b           . + 4 + (0x1B << 2)
label_25c7a8:
    if (ctx->pc == 0x25C7A8u) {
        ctx->pc = 0x25C7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C7A4u;
        // 0x25c7a8: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C7ACu;
        goto label_25c7ac;
    }
    ctx->pc = 0x25C7A4u;
    {
        const bool branch_taken_0x25c7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C7A4u;
        // 0x25c7a8: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c7a4) {
            ctx->pc = 0x25C814u;
            goto label_25c814;
        }
    }
    ctx->pc = 0x25C7ACu;
label_25c7ac:
    // 0x25c7ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25c7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c7b0:
    // 0x25c7b0: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x25c7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_25c7b4:
    // 0x25c7b4: 0xc097f8c  jal         func_25FE30
label_25c7b8:
    if (ctx->pc == 0x25C7B8u) {
        ctx->pc = 0x25C7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C7B4u;
        // 0x25c7b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C7BCu;
        goto label_25c7bc;
    }
    ctx->pc = 0x25C7B4u;
    SET_GPR_U32(ctx, 31, 0x25C7BCu);
    ctx->pc = 0x25C7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C7B4u;
    // 0x25c7b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FE30u, 0x25C7B4u, 0x25C7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C7BCu;
label_25c7bc:
    // 0x25c7bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x25c7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25c7c0:
    // 0x25c7c0: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x25c7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_25c7c4:
    // 0x25c7c4: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x25c7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
label_25c7c8:
    // 0x25c7c8: 0xa20302f4  sb          $v1, 0x2F4($s0)
    ctx->pc = 0x25c7c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 3));
label_25c7cc:
    // 0x25c7cc: 0x10000003  b           . + 4 + (0x3 << 2)
label_25c7d0:
    if (ctx->pc == 0x25C7D0u) {
        ctx->pc = 0x25C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C7CCu;
        // 0x25c7d0: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C7D4u;
        goto label_25c7d4;
    }
    ctx->pc = 0x25C7CCu;
    {
        const bool branch_taken_0x25c7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C7CCu;
        // 0x25c7d0: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c7cc) {
            ctx->pc = 0x25C7DCu;
            goto label_25c7dc;
        }
    }
    ctx->pc = 0x25C7D4u;
label_25c7d4:
    // 0x25c7d4: 0xc09d3fa  jal         func_274FE8
label_25c7d8:
    if (ctx->pc == 0x25C7D8u) {
        ctx->pc = 0x25C7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C7D4u;
        // 0x25c7d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C7DCu;
        goto label_25c7dc;
    }
    ctx->pc = 0x25C7D4u;
    SET_GPR_U32(ctx, 31, 0x25C7DCu);
    ctx->pc = 0x25C7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C7D4u;
    // 0x25c7d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274FE8u, 0x25C7D4u, 0x25C7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C7DCu;
label_25c7dc:
    // 0x25c7dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25c7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25c7e0:
    // 0x25c7e0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25c7e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25c7e4:
    // 0x25c7e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25c7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c7e8:
    // 0x25c7e8: 0xc053e7c  jal         func_14F9F0
label_25c7ec:
    if (ctx->pc == 0x25C7ECu) {
        ctx->pc = 0x25C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C7E8u;
        // 0x25c7ec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C7F0u;
        goto label_25c7f0;
    }
    ctx->pc = 0x25C7E8u;
    SET_GPR_U32(ctx, 31, 0x25C7F0u);
    ctx->pc = 0x25C7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C7E8u;
    // 0x25c7ec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25C7E8u, 0x25C7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C7F0u;
label_25c7f0:
    // 0x25c7f0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25c7f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_25c7f4:
    // 0x25c7f4: 0xc053e4a  jal         func_14F928
label_25c7f8:
    if (ctx->pc == 0x25C7F8u) {
        ctx->pc = 0x25C7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C7F4u;
        // 0x25c7f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C7FCu;
        goto label_25c7fc;
    }
    ctx->pc = 0x25C7F4u;
    SET_GPR_U32(ctx, 31, 0x25C7FCu);
    ctx->pc = 0x25C7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C7F4u;
    // 0x25c7f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25C7F4u, 0x25C7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C7FCu;
label_25c7fc:
    // 0x25c7fc: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x25c7fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_25c800:
    // 0x25c800: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25c800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_25c804:
    // 0x25c804: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_25c808:
    if (ctx->pc == 0x25C808u) {
        ctx->pc = 0x25C808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C804u;
        // 0x25c808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C80Cu;
        goto label_25c80c;
    }
    ctx->pc = 0x25C804u;
    {
        const bool branch_taken_0x25c804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C804u;
        // 0x25c808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c804) {
            ctx->pc = 0x25C814u;
            goto label_25c814;
        }
    }
    ctx->pc = 0x25C80Cu;
label_25c80c:
    // 0x25c80c: 0xc0989d4  jal         func_262750
label_25c810:
    if (ctx->pc == 0x25C810u) {
        ctx->pc = 0x25C810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C80Cu;
        // 0x25c810: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C814u;
        goto label_25c814;
    }
    ctx->pc = 0x25C80Cu;
    SET_GPR_U32(ctx, 31, 0x25C814u);
    ctx->pc = 0x25C810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C80Cu;
    // 0x25c810: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262750u, 0x25C80Cu, 0x25C814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C814u;
label_25c814:
    // 0x25c814: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25c814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25c818:
    // 0x25c818: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25c818u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25c81c:
    // 0x25c81c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25c81cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25c820:
    // 0x25c820: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x25c820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25c824:
    // 0x25c824: 0x3e00008  jr          $ra
label_25c828:
    if (ctx->pc == 0x25C828u) {
        ctx->pc = 0x25C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C824u;
        // 0x25c828: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C82Cu;
        goto label_25c82c;
    }
    ctx->pc = 0x25C824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C824u;
        // 0x25c828: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C82Cu;
label_25c82c:
    // 0x25c82c: 0x0  nop
    ctx->pc = 0x25c82cu;
    // NOP
    ctx->pc = 0x25c830u;
}
