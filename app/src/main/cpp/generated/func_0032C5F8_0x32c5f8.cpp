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

// Function: func_0032C5F8
// Address: 0x32c5f8 - 0x32ca10
void func_0032C5F8_0x32c5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032C5F8_0x32c5f8");
#endif

    switch (ctx->pc) {
        case 0x32c5f8u: goto label_32c5f8;
        case 0x32c5fcu: goto label_32c5fc;
        case 0x32c600u: goto label_32c600;
        case 0x32c604u: goto label_32c604;
        case 0x32c608u: goto label_32c608;
        case 0x32c60cu: goto label_32c60c;
        case 0x32c610u: goto label_32c610;
        case 0x32c614u: goto label_32c614;
        case 0x32c618u: goto label_32c618;
        case 0x32c61cu: goto label_32c61c;
        case 0x32c620u: goto label_32c620;
        case 0x32c624u: goto label_32c624;
        case 0x32c628u: goto label_32c628;
        case 0x32c62cu: goto label_32c62c;
        case 0x32c630u: goto label_32c630;
        case 0x32c634u: goto label_32c634;
        case 0x32c638u: goto label_32c638;
        case 0x32c63cu: goto label_32c63c;
        case 0x32c640u: goto label_32c640;
        case 0x32c644u: goto label_32c644;
        case 0x32c648u: goto label_32c648;
        case 0x32c64cu: goto label_32c64c;
        case 0x32c650u: goto label_32c650;
        case 0x32c654u: goto label_32c654;
        case 0x32c658u: goto label_32c658;
        case 0x32c65cu: goto label_32c65c;
        case 0x32c660u: goto label_32c660;
        case 0x32c664u: goto label_32c664;
        case 0x32c668u: goto label_32c668;
        case 0x32c66cu: goto label_32c66c;
        case 0x32c670u: goto label_32c670;
        case 0x32c674u: goto label_32c674;
        case 0x32c678u: goto label_32c678;
        case 0x32c67cu: goto label_32c67c;
        case 0x32c680u: goto label_32c680;
        case 0x32c684u: goto label_32c684;
        case 0x32c688u: goto label_32c688;
        case 0x32c68cu: goto label_32c68c;
        case 0x32c690u: goto label_32c690;
        case 0x32c694u: goto label_32c694;
        case 0x32c698u: goto label_32c698;
        case 0x32c69cu: goto label_32c69c;
        case 0x32c6a0u: goto label_32c6a0;
        case 0x32c6a4u: goto label_32c6a4;
        case 0x32c6a8u: goto label_32c6a8;
        case 0x32c6acu: goto label_32c6ac;
        case 0x32c6b0u: goto label_32c6b0;
        case 0x32c6b4u: goto label_32c6b4;
        case 0x32c6b8u: goto label_32c6b8;
        case 0x32c6bcu: goto label_32c6bc;
        case 0x32c6c0u: goto label_32c6c0;
        case 0x32c6c4u: goto label_32c6c4;
        case 0x32c6c8u: goto label_32c6c8;
        case 0x32c6ccu: goto label_32c6cc;
        case 0x32c6d0u: goto label_32c6d0;
        case 0x32c6d4u: goto label_32c6d4;
        case 0x32c6d8u: goto label_32c6d8;
        case 0x32c6dcu: goto label_32c6dc;
        case 0x32c6e0u: goto label_32c6e0;
        case 0x32c6e4u: goto label_32c6e4;
        case 0x32c6e8u: goto label_32c6e8;
        case 0x32c6ecu: goto label_32c6ec;
        case 0x32c6f0u: goto label_32c6f0;
        case 0x32c6f4u: goto label_32c6f4;
        case 0x32c6f8u: goto label_32c6f8;
        case 0x32c6fcu: goto label_32c6fc;
        case 0x32c700u: goto label_32c700;
        case 0x32c704u: goto label_32c704;
        case 0x32c708u: goto label_32c708;
        case 0x32c70cu: goto label_32c70c;
        case 0x32c710u: goto label_32c710;
        case 0x32c714u: goto label_32c714;
        case 0x32c718u: goto label_32c718;
        case 0x32c71cu: goto label_32c71c;
        case 0x32c720u: goto label_32c720;
        case 0x32c724u: goto label_32c724;
        case 0x32c728u: goto label_32c728;
        case 0x32c72cu: goto label_32c72c;
        case 0x32c730u: goto label_32c730;
        case 0x32c734u: goto label_32c734;
        case 0x32c738u: goto label_32c738;
        case 0x32c73cu: goto label_32c73c;
        case 0x32c740u: goto label_32c740;
        case 0x32c744u: goto label_32c744;
        case 0x32c748u: goto label_32c748;
        case 0x32c74cu: goto label_32c74c;
        case 0x32c750u: goto label_32c750;
        case 0x32c754u: goto label_32c754;
        case 0x32c758u: goto label_32c758;
        case 0x32c75cu: goto label_32c75c;
        case 0x32c760u: goto label_32c760;
        case 0x32c764u: goto label_32c764;
        case 0x32c768u: goto label_32c768;
        case 0x32c76cu: goto label_32c76c;
        case 0x32c770u: goto label_32c770;
        case 0x32c774u: goto label_32c774;
        case 0x32c778u: goto label_32c778;
        case 0x32c77cu: goto label_32c77c;
        case 0x32c780u: goto label_32c780;
        case 0x32c784u: goto label_32c784;
        case 0x32c788u: goto label_32c788;
        case 0x32c78cu: goto label_32c78c;
        case 0x32c790u: goto label_32c790;
        case 0x32c794u: goto label_32c794;
        case 0x32c798u: goto label_32c798;
        case 0x32c79cu: goto label_32c79c;
        case 0x32c7a0u: goto label_32c7a0;
        case 0x32c7a4u: goto label_32c7a4;
        case 0x32c7a8u: goto label_32c7a8;
        case 0x32c7acu: goto label_32c7ac;
        case 0x32c7b0u: goto label_32c7b0;
        case 0x32c7b4u: goto label_32c7b4;
        case 0x32c7b8u: goto label_32c7b8;
        case 0x32c7bcu: goto label_32c7bc;
        case 0x32c7c0u: goto label_32c7c0;
        case 0x32c7c4u: goto label_32c7c4;
        case 0x32c7c8u: goto label_32c7c8;
        case 0x32c7ccu: goto label_32c7cc;
        case 0x32c7d0u: goto label_32c7d0;
        case 0x32c7d4u: goto label_32c7d4;
        case 0x32c7d8u: goto label_32c7d8;
        case 0x32c7dcu: goto label_32c7dc;
        case 0x32c7e0u: goto label_32c7e0;
        case 0x32c7e4u: goto label_32c7e4;
        case 0x32c7e8u: goto label_32c7e8;
        case 0x32c7ecu: goto label_32c7ec;
        case 0x32c7f0u: goto label_32c7f0;
        case 0x32c7f4u: goto label_32c7f4;
        case 0x32c7f8u: goto label_32c7f8;
        case 0x32c7fcu: goto label_32c7fc;
        case 0x32c800u: goto label_32c800;
        case 0x32c804u: goto label_32c804;
        case 0x32c808u: goto label_32c808;
        case 0x32c80cu: goto label_32c80c;
        case 0x32c810u: goto label_32c810;
        case 0x32c814u: goto label_32c814;
        case 0x32c818u: goto label_32c818;
        case 0x32c81cu: goto label_32c81c;
        case 0x32c820u: goto label_32c820;
        case 0x32c824u: goto label_32c824;
        case 0x32c828u: goto label_32c828;
        case 0x32c82cu: goto label_32c82c;
        case 0x32c830u: goto label_32c830;
        case 0x32c834u: goto label_32c834;
        case 0x32c838u: goto label_32c838;
        case 0x32c83cu: goto label_32c83c;
        case 0x32c840u: goto label_32c840;
        case 0x32c844u: goto label_32c844;
        case 0x32c848u: goto label_32c848;
        case 0x32c84cu: goto label_32c84c;
        case 0x32c850u: goto label_32c850;
        case 0x32c854u: goto label_32c854;
        case 0x32c858u: goto label_32c858;
        case 0x32c85cu: goto label_32c85c;
        case 0x32c860u: goto label_32c860;
        case 0x32c864u: goto label_32c864;
        case 0x32c868u: goto label_32c868;
        case 0x32c86cu: goto label_32c86c;
        case 0x32c870u: goto label_32c870;
        case 0x32c874u: goto label_32c874;
        case 0x32c878u: goto label_32c878;
        case 0x32c87cu: goto label_32c87c;
        case 0x32c880u: goto label_32c880;
        case 0x32c884u: goto label_32c884;
        case 0x32c888u: goto label_32c888;
        case 0x32c88cu: goto label_32c88c;
        case 0x32c890u: goto label_32c890;
        case 0x32c894u: goto label_32c894;
        case 0x32c898u: goto label_32c898;
        case 0x32c89cu: goto label_32c89c;
        case 0x32c8a0u: goto label_32c8a0;
        case 0x32c8a4u: goto label_32c8a4;
        case 0x32c8a8u: goto label_32c8a8;
        case 0x32c8acu: goto label_32c8ac;
        case 0x32c8b0u: goto label_32c8b0;
        case 0x32c8b4u: goto label_32c8b4;
        case 0x32c8b8u: goto label_32c8b8;
        case 0x32c8bcu: goto label_32c8bc;
        case 0x32c8c0u: goto label_32c8c0;
        case 0x32c8c4u: goto label_32c8c4;
        case 0x32c8c8u: goto label_32c8c8;
        case 0x32c8ccu: goto label_32c8cc;
        case 0x32c8d0u: goto label_32c8d0;
        case 0x32c8d4u: goto label_32c8d4;
        case 0x32c8d8u: goto label_32c8d8;
        case 0x32c8dcu: goto label_32c8dc;
        case 0x32c8e0u: goto label_32c8e0;
        case 0x32c8e4u: goto label_32c8e4;
        case 0x32c8e8u: goto label_32c8e8;
        case 0x32c8ecu: goto label_32c8ec;
        case 0x32c8f0u: goto label_32c8f0;
        case 0x32c8f4u: goto label_32c8f4;
        case 0x32c8f8u: goto label_32c8f8;
        case 0x32c8fcu: goto label_32c8fc;
        case 0x32c900u: goto label_32c900;
        case 0x32c904u: goto label_32c904;
        case 0x32c908u: goto label_32c908;
        case 0x32c90cu: goto label_32c90c;
        case 0x32c910u: goto label_32c910;
        case 0x32c914u: goto label_32c914;
        case 0x32c918u: goto label_32c918;
        case 0x32c91cu: goto label_32c91c;
        case 0x32c920u: goto label_32c920;
        case 0x32c924u: goto label_32c924;
        case 0x32c928u: goto label_32c928;
        case 0x32c92cu: goto label_32c92c;
        case 0x32c930u: goto label_32c930;
        case 0x32c934u: goto label_32c934;
        case 0x32c938u: goto label_32c938;
        case 0x32c93cu: goto label_32c93c;
        case 0x32c940u: goto label_32c940;
        case 0x32c944u: goto label_32c944;
        case 0x32c948u: goto label_32c948;
        case 0x32c94cu: goto label_32c94c;
        case 0x32c950u: goto label_32c950;
        case 0x32c954u: goto label_32c954;
        case 0x32c958u: goto label_32c958;
        case 0x32c95cu: goto label_32c95c;
        case 0x32c960u: goto label_32c960;
        case 0x32c964u: goto label_32c964;
        case 0x32c968u: goto label_32c968;
        case 0x32c96cu: goto label_32c96c;
        case 0x32c970u: goto label_32c970;
        case 0x32c974u: goto label_32c974;
        case 0x32c978u: goto label_32c978;
        case 0x32c97cu: goto label_32c97c;
        case 0x32c980u: goto label_32c980;
        case 0x32c984u: goto label_32c984;
        case 0x32c988u: goto label_32c988;
        case 0x32c98cu: goto label_32c98c;
        case 0x32c990u: goto label_32c990;
        case 0x32c994u: goto label_32c994;
        case 0x32c998u: goto label_32c998;
        case 0x32c99cu: goto label_32c99c;
        case 0x32c9a0u: goto label_32c9a0;
        case 0x32c9a4u: goto label_32c9a4;
        case 0x32c9a8u: goto label_32c9a8;
        case 0x32c9acu: goto label_32c9ac;
        case 0x32c9b0u: goto label_32c9b0;
        case 0x32c9b4u: goto label_32c9b4;
        case 0x32c9b8u: goto label_32c9b8;
        case 0x32c9bcu: goto label_32c9bc;
        case 0x32c9c0u: goto label_32c9c0;
        case 0x32c9c4u: goto label_32c9c4;
        case 0x32c9c8u: goto label_32c9c8;
        case 0x32c9ccu: goto label_32c9cc;
        case 0x32c9d0u: goto label_32c9d0;
        case 0x32c9d4u: goto label_32c9d4;
        case 0x32c9d8u: goto label_32c9d8;
        case 0x32c9dcu: goto label_32c9dc;
        case 0x32c9e0u: goto label_32c9e0;
        case 0x32c9e4u: goto label_32c9e4;
        case 0x32c9e8u: goto label_32c9e8;
        case 0x32c9ecu: goto label_32c9ec;
        case 0x32c9f0u: goto label_32c9f0;
        case 0x32c9f4u: goto label_32c9f4;
        case 0x32c9f8u: goto label_32c9f8;
        case 0x32c9fcu: goto label_32c9fc;
        case 0x32ca00u: goto label_32ca00;
        case 0x32ca04u: goto label_32ca04;
        case 0x32ca08u: goto label_32ca08;
        case 0x32ca0cu: goto label_32ca0c;
        default: break;
    }

    ctx->pc = 0x32c5f8u;

label_32c5f8:
    // 0x32c5f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x32c5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_32c5fc:
    // 0x32c5fc: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x32c5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_32c600:
    // 0x32c600: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32c600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32c604:
    // 0x32c604: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x32c604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_32c608:
    // 0x32c608: 0x24130800  addiu       $s3, $zero, 0x800
    ctx->pc = 0x32c608u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_32c60c:
    // 0x32c60c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x32c60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_32c610:
    // 0x32c610: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x32c610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_32c614:
    // 0x32c614: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x32c614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_32c618:
    // 0x32c618: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x32c618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_32c61c:
    // 0x32c61c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x32c61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_32c620:
    // 0x32c620: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x32c620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_32c624:
    // 0x32c624: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x32c624u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_32c628:
    // 0x32c628: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x32c628u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_32c62c:
    // 0x32c62c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x32c62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_32c630:
    // 0x32c630: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x32c630u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_32c634:
    // 0x32c634: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_32c638:
    if (ctx->pc == 0x32C638u) {
        ctx->pc = 0x32C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C634u;
        // 0x32c638: 0xae0000a8  sw          $zero, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C63Cu;
        goto label_32c63c;
    }
    ctx->pc = 0x32C634u;
    {
        const bool branch_taken_0x32c634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C634u;
        // 0x32c638: 0xae0000a8  sw          $zero, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c634) {
            ctx->pc = 0x32C698u;
            goto label_32c698;
        }
    }
    ctx->pc = 0x32C63Cu;
label_32c63c:
    // 0x32c63c: 0x820300ac  lb          $v1, 0xAC($s0)
    ctx->pc = 0x32c63cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 172)));
label_32c640:
    // 0x32c640: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32c640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32c644:
    // 0x32c644: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_32c648:
    if (ctx->pc == 0x32C648u) {
        ctx->pc = 0x32C64Cu;
        goto label_32c64c;
    }
    ctx->pc = 0x32C644u;
    {
        const bool branch_taken_0x32c644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32c644) {
            ctx->pc = 0x32C698u;
            goto label_32c698;
        }
    }
    ctx->pc = 0x32C64Cu;
label_32c64c:
    // 0x32c64c: 0xc0ca026  jal         func_328098
label_32c650:
    if (ctx->pc == 0x32C650u) {
        ctx->pc = 0x32C650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C64Cu;
        // 0x32c650: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C654u;
        goto label_32c654;
    }
    ctx->pc = 0x32C64Cu;
    SET_GPR_U32(ctx, 31, 0x32C654u);
    ctx->pc = 0x32C650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C64Cu;
    // 0x32c650: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328098u, 0x32C64Cu, 0x32C654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C654u;
label_32c654:
    // 0x32c654: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32c654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32c658:
    // 0x32c658: 0x504300e2  beql        $v0, $v1, . + 4 + (0xE2 << 2)
label_32c65c:
    if (ctx->pc == 0x32C65Cu) {
        ctx->pc = 0x32C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C658u;
        // 0x32c65c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C660u;
        goto label_32c660;
    }
    ctx->pc = 0x32C658u;
    {
        const bool branch_taken_0x32c658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x32c658) {
            ctx->pc = 0x32C65Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C658u;
            // 0x32c65c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C9E4u;
            goto label_32c9e4;
        }
    }
    ctx->pc = 0x32C660u;
label_32c660:
    // 0x32c660: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x32c660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_32c664:
    // 0x32c664: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_32c668:
    if (ctx->pc == 0x32C668u) {
        ctx->pc = 0x32C668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C664u;
        // 0x32c668: 0x8e0500b4  lw          $a1, 0xB4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C66Cu;
        goto label_32c66c;
    }
    ctx->pc = 0x32C664u;
    {
        const bool branch_taken_0x32c664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c664) {
            ctx->pc = 0x32C668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C664u;
            // 0x32c668: 0x8e0500b4  lw          $a1, 0xB4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C680u;
            goto label_32c680;
        }
    }
    ctx->pc = 0x32C66Cu;
label_32c66c:
    // 0x32c66c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x32c66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32c670:
    // 0x32c670: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x32c670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_32c674:
    // 0x32c674: 0x40f809  jalr        $v0
label_32c678:
    if (ctx->pc == 0x32C678u) {
        ctx->pc = 0x32C67Cu;
        goto label_32c67c;
    }
    ctx->pc = 0x32C674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32C67Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C674u, 0x32C67Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32C67Cu;
label_32c67c:
    // 0x32c67c: 0x8e0500b4  lw          $a1, 0xB4($s0)
    ctx->pc = 0x32c67cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_32c680:
    // 0x32c680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32c680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32c684:
    // 0x32c684: 0x8e0600b8  lw          $a2, 0xB8($s0)
    ctx->pc = 0x32c684u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_32c688:
    // 0x32c688: 0x8e0700bc  lw          $a3, 0xBC($s0)
    ctx->pc = 0x32c688u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_32c68c:
    // 0x32c68c: 0xc0ca71a  jal         func_329C68
label_32c690:
    if (ctx->pc == 0x32C690u) {
        ctx->pc = 0x32C690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C68Cu;
        // 0x32c690: 0x8e0800c0  lw          $t0, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C694u;
        goto label_32c694;
    }
    ctx->pc = 0x32C68Cu;
    SET_GPR_U32(ctx, 31, 0x32C694u);
    ctx->pc = 0x32C690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C68Cu;
    // 0x32c690: 0x8e0800c0  lw          $t0, 0xC0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329C68u, 0x32C68Cu, 0x32C694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C694u;
label_32c694:
    // 0x32c694: 0xa20000ac  sb          $zero, 0xAC($s0)
    ctx->pc = 0x32c694u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 172), (uint8_t)GPR_U32(ctx, 0));
label_32c698:
    // 0x32c698: 0xc0c99de  jal         func_326778
label_32c69c:
    if (ctx->pc == 0x32C69Cu) {
        ctx->pc = 0x32C69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C698u;
        // 0x32c69c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C6A0u;
        goto label_32c6a0;
    }
    ctx->pc = 0x32C698u;
    SET_GPR_U32(ctx, 31, 0x32C6A0u);
    ctx->pc = 0x32C69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C698u;
    // 0x32c69c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326778u, 0x32C698u, 0x32C6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C6A0u;
label_32c6a0:
    // 0x32c6a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x32c6a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32c6a4:
    // 0x32c6a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32c6a8:
    // 0x32c6a8: 0x546200c9  bnel        $v1, $v0, . + 4 + (0xC9 << 2)
label_32c6ac:
    if (ctx->pc == 0x32C6ACu) {
        ctx->pc = 0x32C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C6A8u;
        // 0x32c6ac: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C6B0u;
        goto label_32c6b0;
    }
    ctx->pc = 0x32C6A8u;
    {
        const bool branch_taken_0x32c6a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32c6a8) {
            ctx->pc = 0x32C6ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C6A8u;
            // 0x32c6ac: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C9D0u;
            goto label_32c9d0;
        }
    }
    ctx->pc = 0x32C6B0u;
label_32c6b0:
    // 0x32c6b0: 0xc0c9de8  jal         func_3277A0
label_32c6b4:
    if (ctx->pc == 0x32C6B4u) {
        ctx->pc = 0x32C6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C6B0u;
        // 0x32c6b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C6B8u;
        goto label_32c6b8;
    }
    ctx->pc = 0x32C6B0u;
    SET_GPR_U32(ctx, 31, 0x32C6B8u);
    ctx->pc = 0x32C6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C6B0u;
    // 0x32c6b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3277A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3277A0u, 0x32C6B0u, 0x32C6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C6B8u;
label_32c6b8:
    // 0x32c6b8: 0x82050003  lb          $a1, 0x3($s0)
    ctx->pc = 0x32c6b8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_32c6bc:
    // 0x32c6bc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x32c6bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32c6c0:
    // 0x32c6c0: 0xb4102a  slt         $v0, $a1, $s4
    ctx->pc = 0x32c6c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_32c6c4:
    // 0x32c6c4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_32c6c8:
    if (ctx->pc == 0x32C6C8u) {
        ctx->pc = 0x32C6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C6C4u;
        // 0x32c6c8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C6CCu;
        goto label_32c6cc;
    }
    ctx->pc = 0x32C6C4u;
    {
        const bool branch_taken_0x32c6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C6C4u;
        // 0x32c6c8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c6c4) {
            ctx->pc = 0x32C6F8u;
            goto label_32c6f8;
        }
    }
    ctx->pc = 0x32C6CCu;
label_32c6cc:
    // 0x32c6cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32c6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32c6d0:
    // 0x32c6d0: 0xc0cfcd2  jal         func_33F348
label_32c6d4:
    if (ctx->pc == 0x32C6D4u) {
        ctx->pc = 0x32C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C6D0u;
        // 0x32c6d4: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C6D8u;
        goto label_32c6d8;
    }
    ctx->pc = 0x32C6D0u;
    SET_GPR_U32(ctx, 31, 0x32C6D8u);
    ctx->pc = 0x32C6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C6D0u;
    // 0x32c6d4: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F348u, 0x32C6D0u, 0x32C6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C6D8u;
label_32c6d8:
    // 0x32c6d8: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32c6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_32c6dc:
    // 0x32c6dc: 0x248428c0  addiu       $a0, $a0, 0x28C0
    ctx->pc = 0x32c6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10432));
label_32c6e0:
    // 0x32c6e0: 0xc0cfc6a  jal         func_33F1A8
label_32c6e4:
    if (ctx->pc == 0x32C6E4u) {
        ctx->pc = 0x32C6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C6E0u;
        // 0x32c6e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C6E8u;
        goto label_32c6e8;
    }
    ctx->pc = 0x32C6E0u;
    SET_GPR_U32(ctx, 31, 0x32C6E8u);
    ctx->pc = 0x32C6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C6E0u;
    // 0x32c6e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F1A8u, 0x32C6E0u, 0x32C6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C6E8u;
label_32c6e8:
    // 0x32c6e8: 0xc0ca7aa  jal         func_329EA8
label_32c6ec:
    if (ctx->pc == 0x32C6ECu) {
        ctx->pc = 0x32C6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C6E8u;
        // 0x32c6ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C6F0u;
        goto label_32c6f0;
    }
    ctx->pc = 0x32C6E8u;
    SET_GPR_U32(ctx, 31, 0x32C6F0u);
    ctx->pc = 0x32C6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C6E8u;
    // 0x32c6ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329EA8u, 0x32C6E8u, 0x32C6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C6F0u;
label_32c6f0:
    // 0x32c6f0: 0x100000bc  b           . + 4 + (0xBC << 2)
label_32c6f4:
    if (ctx->pc == 0x32C6F4u) {
        ctx->pc = 0x32C6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C6F0u;
        // 0x32c6f4: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C6F8u;
        goto label_32c6f8;
    }
    ctx->pc = 0x32C6F0u;
    {
        const bool branch_taken_0x32c6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C6F0u;
        // 0x32c6f4: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c6f0) {
            ctx->pc = 0x32C9E4u;
            goto label_32c9e4;
        }
    }
    ctx->pc = 0x32C6F8u;
label_32c6f8:
    // 0x32c6f8: 0xc0c9de2  jal         func_327788
label_32c6fc:
    if (ctx->pc == 0x32C6FCu) {
        ctx->pc = 0x32C6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C6F8u;
        // 0x32c6fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C700u;
        goto label_32c700;
    }
    ctx->pc = 0x32C6F8u;
    SET_GPR_U32(ctx, 31, 0x32C700u);
    ctx->pc = 0x32C6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C6F8u;
    // 0x32c6fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327788u, 0x32C6F8u, 0x32C700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C700u;
label_32c700:
    // 0x32c700: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32c700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32c704:
    // 0x32c704: 0xc0c9e00  jal         func_327800
label_32c708:
    if (ctx->pc == 0x32C708u) {
        ctx->pc = 0x32C708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C704u;
        // 0x32c708: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C70Cu;
        goto label_32c70c;
    }
    ctx->pc = 0x32C704u;
    SET_GPR_U32(ctx, 31, 0x32C70Cu);
    ctx->pc = 0x32C708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C704u;
    // 0x32c708: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327800u, 0x32C704u, 0x32C70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C70Cu;
label_32c70c:
    // 0x32c70c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x32c70cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32c710:
    // 0x32c710: 0x5a80000b  blezl       $s4, . + 4 + (0xB << 2)
label_32c714:
    if (ctx->pc == 0x32C714u) {
        ctx->pc = 0x32C714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C710u;
        // 0x32c714: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C718u;
        goto label_32c718;
    }
    ctx->pc = 0x32C710u;
    {
        const bool branch_taken_0x32c710 = (GPR_S64(ctx, 20) <= 0);
        if (branch_taken_0x32c710) {
            ctx->pc = 0x32C714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C710u;
            // 0x32c714: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C740u;
            goto label_32c740;
        }
    }
    ctx->pc = 0x32C718u;
label_32c718:
    // 0x32c718: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x32c718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_32c71c:
    // 0x32c71c: 0x242001a  div         $zero, $s2, $v0
    ctx->pc = 0x32c71cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_32c720:
    // 0x32c720: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_32c724:
    if (ctx->pc == 0x32C724u) {
        ctx->pc = 0x32C724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C720u;
        // 0x32c724: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C728u;
        goto label_32c728;
    }
    ctx->pc = 0x32C720u;
    {
        const bool branch_taken_0x32c720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c720) {
            ctx->pc = 0x32C724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C720u;
            // 0x32c724: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C728u;
            goto label_32c728;
        }
    }
    ctx->pc = 0x32C728u;
label_32c728:
    // 0x32c728: 0x2012  mflo        $a0
    ctx->pc = 0x32c728u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_32c72c:
    // 0x32c72c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x32c72cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_32c730:
    // 0x32c730: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32c730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_32c734:
    // 0x32c734: 0x1000000c  b           . + 4 + (0xC << 2)
label_32c738:
    if (ctx->pc == 0x32C738u) {
        ctx->pc = 0x32C738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C734u;
        // 0x32c738: 0xae030048  sw          $v1, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C73Cu;
        goto label_32c73c;
    }
    ctx->pc = 0x32C734u;
    {
        const bool branch_taken_0x32c734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C734u;
        // 0x32c738: 0xae030048  sw          $v1, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c734) {
            ctx->pc = 0x32C768u;
            goto label_32c768;
        }
    }
    ctx->pc = 0x32C73Cu;
label_32c73c:
    // 0x32c73c: 0x0  nop
    ctx->pc = 0x32c73cu;
    // NOP
label_32c740:
    // 0x32c740: 0x243001a  div         $zero, $s2, $v1
    ctx->pc = 0x32c740u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_32c744:
    // 0x32c744: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_32c748:
    if (ctx->pc == 0x32C748u) {
        ctx->pc = 0x32C748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C744u;
        // 0x32c748: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C74Cu;
        goto label_32c74c;
    }
    ctx->pc = 0x32C744u;
    {
        const bool branch_taken_0x32c744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c744) {
            ctx->pc = 0x32C748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C744u;
            // 0x32c748: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C74Cu;
            goto label_32c74c;
        }
    }
    ctx->pc = 0x32C74Cu;
label_32c74c:
    // 0x32c74c: 0x2012  mflo        $a0
    ctx->pc = 0x32c74cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_32c750:
    // 0x32c750: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x32c750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_32c754:
    // 0x32c754: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x32c754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_32c758:
    // 0x32c758: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x32c758u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_32c75c:
    // 0x32c75c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32c75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32c760:
    // 0x32c760: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x32c760u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_32c764:
    // 0x32c764: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x32c764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_32c768:
    // 0x32c768: 0xc0c9df4  jal         func_3277D0
label_32c76c:
    if (ctx->pc == 0x32C76Cu) {
        ctx->pc = 0x32C76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C768u;
        // 0x32c76c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C770u;
        goto label_32c770;
    }
    ctx->pc = 0x32C768u;
    SET_GPR_U32(ctx, 31, 0x32C770u);
    ctx->pc = 0x32C76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C768u;
    // 0x32c76c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3277D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3277D0u, 0x32C768u, 0x32C770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C770u;
label_32c770:
    // 0x32c770: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x32c770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_32c774:
    // 0x32c774: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x32c774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_32c778:
    // 0x32c778: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32c778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32c77c:
    // 0x32c77c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x32c77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_32c780:
    // 0x32c780: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_32c784:
    if (ctx->pc == 0x32C784u) {
        ctx->pc = 0x32C784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C780u;
        // 0x32c784: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C788u;
        goto label_32c788;
    }
    ctx->pc = 0x32C780u;
    {
        const bool branch_taken_0x32c780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c780) {
            ctx->pc = 0x32C784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C780u;
            // 0x32c784: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C788u;
            goto label_32c788;
        }
    }
    ctx->pc = 0x32C788u;
label_32c788:
    // 0x32c788: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x32c788u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_32c78c:
    // 0x32c78c: 0x2812  mflo        $a1
    ctx->pc = 0x32c78cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_32c790:
    // 0x32c790: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x32c790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_32c794:
    // 0x32c794: 0xc0c99f0  jal         func_3267C0
label_32c798:
    if (ctx->pc == 0x32C798u) {
        ctx->pc = 0x32C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C794u;
        // 0x32c798: 0xae050048  sw          $a1, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C79Cu;
        goto label_32c79c;
    }
    ctx->pc = 0x32C794u;
    SET_GPR_U32(ctx, 31, 0x32C79Cu);
    ctx->pc = 0x32C798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C794u;
    // 0x32c798: 0xae050048  sw          $a1, 0x48($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3267C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3267C0u, 0x32C794u, 0x32C79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C79Cu;
label_32c79c:
    // 0x32c79c: 0x5a800034  blezl       $s4, . + 4 + (0x34 << 2)
label_32c7a0:
    if (ctx->pc == 0x32C7A0u) {
        ctx->pc = 0x32C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C79Cu;
        // 0x32c7a0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C7A4u;
        goto label_32c7a4;
    }
    ctx->pc = 0x32C79Cu;
    {
        const bool branch_taken_0x32c79c = (GPR_S64(ctx, 20) <= 0);
        if (branch_taken_0x32c79c) {
            ctx->pc = 0x32C7A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C79Cu;
            // 0x32c7a0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C870u;
            goto label_32c870;
        }
    }
    ctx->pc = 0x32C7A4u;
label_32c7a4:
    // 0x32c7a4: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x32c7a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_32c7a8:
    // 0x32c7a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32c7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32c7ac:
    // 0x32c7ac: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_32c7b0:
    if (ctx->pc == 0x32C7B0u) {
        ctx->pc = 0x32C7B4u;
        goto label_32c7b4;
    }
    ctx->pc = 0x32C7ACu;
    {
        const bool branch_taken_0x32c7ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32c7ac) {
            ctx->pc = 0x32C7C0u;
            goto label_32c7c0;
        }
    }
    ctx->pc = 0x32C7B4u;
label_32c7b4:
    // 0x32c7b4: 0x10000019  b           . + 4 + (0x19 << 2)
label_32c7b8:
    if (ctx->pc == 0x32C7B8u) {
        ctx->pc = 0x32C7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C7B4u;
        // 0x32c7b8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C7BCu;
        goto label_32c7bc;
    }
    ctx->pc = 0x32C7B4u;
    {
        const bool branch_taken_0x32c7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C7B4u;
        // 0x32c7b8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c7b4) {
            ctx->pc = 0x32C81Cu;
            goto label_32c81c;
        }
    }
    ctx->pc = 0x32C7BCu;
label_32c7bc:
    // 0x32c7bc: 0x0  nop
    ctx->pc = 0x32c7bcu;
    // NOP
label_32c7c0:
    // 0x32c7c0: 0xc0c9e1e  jal         func_327878
label_32c7c4:
    if (ctx->pc == 0x32C7C4u) {
        ctx->pc = 0x32C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C7C0u;
        // 0x32c7c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C7C8u;
        goto label_32c7c8;
    }
    ctx->pc = 0x32C7C0u;
    SET_GPR_U32(ctx, 31, 0x32C7C8u);
    ctx->pc = 0x32C7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C7C0u;
    // 0x32c7c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327878u, 0x32C7C0u, 0x32C7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C7C8u;
label_32c7c8:
    // 0x32c7c8: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
label_32c7cc:
    if (ctx->pc == 0x32C7CCu) {
        ctx->pc = 0x32C7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C7C8u;
        // 0x32c7cc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C7D0u;
        goto label_32c7d0;
    }
    ctx->pc = 0x32C7C8u;
    {
        const bool branch_taken_0x32c7c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c7c8) {
            ctx->pc = 0x32C7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C7C8u;
            // 0x32c7cc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C7D0u;
            goto label_32c7d0;
        }
    }
    ctx->pc = 0x32C7D0u;
label_32c7d0:
    // 0x32c7d0: 0x53001a  div         $zero, $v0, $s3
    ctx->pc = 0x32c7d0u;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_32c7d4:
    // 0x32c7d4: 0x244207ff  addiu       $v0, $v0, 0x7FF
    ctx->pc = 0x32c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
label_32c7d8:
    // 0x32c7d8: 0x1810  mfhi        $v1
    ctx->pc = 0x32c7d8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_32c7dc:
    // 0x32c7dc: 0x53001a  div         $zero, $v0, $s3
    ctx->pc = 0x32c7dcu;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_32c7e0:
    // 0x32c7e0: 0x2631823  subu        $v1, $s3, $v1
    ctx->pc = 0x32c7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_32c7e4:
    // 0x32c7e4: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x32c7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
label_32c7e8:
    // 0x32c7e8: 0x1012  mflo        $v0
    ctx->pc = 0x32c7e8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_32c7ec:
    // 0x32c7ec: 0x73001a  div         $zero, $v1, $s3
    ctx->pc = 0x32c7ecu;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_32c7f0:
    // 0x32c7f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32c7f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32c7f4:
    // 0x32c7f4: 0x2010  mfhi        $a0
    ctx->pc = 0x32c7f4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_32c7f8:
    // 0x32c7f8: 0xae040050  sw          $a0, 0x50($s0)
    ctx->pc = 0x32c7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 4));
label_32c7fc:
    // 0x32c7fc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x32c7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_32c800:
    // 0x32c800: 0xc0ca112  jal         func_328448
label_32c804:
    if (ctx->pc == 0x32C804u) {
        ctx->pc = 0x32C804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C800u;
        // 0x32c804: 0xae02008c  sw          $v0, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C808u;
        goto label_32c808;
    }
    ctx->pc = 0x32C800u;
    SET_GPR_U32(ctx, 31, 0x32C808u);
    ctx->pc = 0x32C804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C800u;
    // 0x32c804: 0xae02008c  sw          $v0, 0x8C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328448u, 0x32C800u, 0x32C808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C808u;
label_32c808:
    // 0x32c808: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x32c808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_32c80c:
    // 0x32c80c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x32c80cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_32c810:
    // 0x32c810: 0x24a5c1e0  addiu       $a1, $a1, -0x3E20
    ctx->pc = 0x32c810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951392));
label_32c814:
    // 0x32c814: 0xc0ca0fa  jal         func_3283E8
label_32c818:
    if (ctx->pc == 0x32C818u) {
        ctx->pc = 0x32C818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C814u;
        // 0x32c818: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C81Cu;
        goto label_32c81c;
    }
    ctx->pc = 0x32C814u;
    SET_GPR_U32(ctx, 31, 0x32C81Cu);
    ctx->pc = 0x32C818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C814u;
    // 0x32c818: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3283E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3283E8u, 0x32C814u, 0x32C81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C81Cu;
label_32c81c:
    // 0x32c81c: 0xc0c9e18  jal         func_327860
label_32c820:
    if (ctx->pc == 0x32C820u) {
        ctx->pc = 0x32C820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C81Cu;
        // 0x32c820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C824u;
        goto label_32c824;
    }
    ctx->pc = 0x32C81Cu;
    SET_GPR_U32(ctx, 31, 0x32C824u);
    ctx->pc = 0x32C820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C81Cu;
    // 0x32c820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327860u, 0x32C81Cu, 0x32C824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C824u;
label_32c824:
    // 0x32c824: 0xc0c9e06  jal         func_327818
label_32c828:
    if (ctx->pc == 0x32C828u) {
        ctx->pc = 0x32C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C824u;
        // 0x32c828: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C82Cu;
        goto label_32c82c;
    }
    ctx->pc = 0x32C824u;
    SET_GPR_U32(ctx, 31, 0x32C82Cu);
    ctx->pc = 0x32C828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C824u;
    // 0x32c828: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327818u, 0x32C824u, 0x32C82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C82Cu;
label_32c82c:
    // 0x32c82c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32c82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32c830:
    // 0x32c830: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x32c830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_32c834:
    // 0x32c834: 0xc0c9dd6  jal         func_327758
label_32c838:
    if (ctx->pc == 0x32C838u) {
        ctx->pc = 0x32C838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C834u;
        // 0x32c838: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C83Cu;
        goto label_32c83c;
    }
    ctx->pc = 0x32C834u;
    SET_GPR_U32(ctx, 31, 0x32C83Cu);
    ctx->pc = 0x32C838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C834u;
    // 0x32c838: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327758u, 0x32C834u, 0x32C83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C83Cu;
label_32c83c:
    // 0x32c83c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32c83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32c840:
    // 0x32c840: 0xc0c9dda  jal         func_327768
label_32c844:
    if (ctx->pc == 0x32C844u) {
        ctx->pc = 0x32C844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C840u;
        // 0x32c844: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C848u;
        goto label_32c848;
    }
    ctx->pc = 0x32C840u;
    SET_GPR_U32(ctx, 31, 0x32C848u);
    ctx->pc = 0x32C844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C840u;
    // 0x32c844: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327768u, 0x32C840u, 0x32C848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C848u;
label_32c848:
    // 0x32c848: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32c848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32c84c:
    // 0x32c84c: 0xc0c9dd8  jal         func_327760
label_32c850:
    if (ctx->pc == 0x32C850u) {
        ctx->pc = 0x32C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C84Cu;
        // 0x32c850: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C854u;
        goto label_32c854;
    }
    ctx->pc = 0x32C84Cu;
    SET_GPR_U32(ctx, 31, 0x32C854u);
    ctx->pc = 0x32C850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C84Cu;
    // 0x32c850: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327760u, 0x32C84Cu, 0x32C854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C854u;
label_32c854:
    // 0x32c854: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x32c854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_32c858:
    // 0x32c858: 0x24a5bf90  addiu       $a1, $a1, -0x4070
    ctx->pc = 0x32c858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950800));
label_32c85c:
    // 0x32c85c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32c85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32c860:
    // 0x32c860: 0xc0c9dd2  jal         func_327748
label_32c864:
    if (ctx->pc == 0x32C864u) {
        ctx->pc = 0x32C864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C860u;
        // 0x32c864: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C868u;
        goto label_32c868;
    }
    ctx->pc = 0x32C860u;
    SET_GPR_U32(ctx, 31, 0x32C868u);
    ctx->pc = 0x32C864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C860u;
    // 0x32c864: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327748u, 0x32C860u, 0x32C868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C868u;
label_32c868:
    // 0x32c868: 0x10000016  b           . + 4 + (0x16 << 2)
label_32c86c:
    if (ctx->pc == 0x32C86Cu) {
        ctx->pc = 0x32C870u;
        goto label_32c870;
    }
    ctx->pc = 0x32C868u;
    {
        const bool branch_taken_0x32c868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c868) {
            ctx->pc = 0x32C8C4u;
            goto label_32c8c4;
        }
    }
    ctx->pc = 0x32C870u;
label_32c870:
    // 0x32c870: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_32c874:
    if (ctx->pc == 0x32C874u) {
        ctx->pc = 0x32C878u;
        goto label_32c878;
    }
    ctx->pc = 0x32C870u;
    {
        const bool branch_taken_0x32c870 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c870) {
            ctx->pc = 0x32C884u;
            goto label_32c884;
        }
    }
    ctx->pc = 0x32C878u;
label_32c878:
    // 0x32c878: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x32c878u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
label_32c87c:
    // 0x32c87c: 0xc0ca112  jal         func_328448
label_32c880:
    if (ctx->pc == 0x32C880u) {
        ctx->pc = 0x32C880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C87Cu;
        // 0x32c880: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C884u;
        goto label_32c884;
    }
    ctx->pc = 0x32C87Cu;
    SET_GPR_U32(ctx, 31, 0x32C884u);
    ctx->pc = 0x32C880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C87Cu;
    // 0x32c880: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x328448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328448u, 0x32C87Cu, 0x32C884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C884u;
label_32c884:
    // 0x32c884: 0xc0c9dfa  jal         func_3277E8
label_32c888:
    if (ctx->pc == 0x32C888u) {
        ctx->pc = 0x32C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C884u;
        // 0x32c888: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C88Cu;
        goto label_32c88c;
    }
    ctx->pc = 0x32C884u;
    SET_GPR_U32(ctx, 31, 0x32C88Cu);
    ctx->pc = 0x32C888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C884u;
    // 0x32c888: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3277E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3277E8u, 0x32C884u, 0x32C88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C88Cu;
label_32c88c:
    // 0x32c88c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32c88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32c890:
    // 0x32c890: 0xc0c9dd6  jal         func_327758
label_32c894:
    if (ctx->pc == 0x32C894u) {
        ctx->pc = 0x32C894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C890u;
        // 0x32c894: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C898u;
        goto label_32c898;
    }
    ctx->pc = 0x32C890u;
    SET_GPR_U32(ctx, 31, 0x32C898u);
    ctx->pc = 0x32C894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C890u;
    // 0x32c894: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327758u, 0x32C890u, 0x32C898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C898u;
label_32c898:
    // 0x32c898: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32c898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32c89c:
    // 0x32c89c: 0xc0c9dda  jal         func_327768
label_32c8a0:
    if (ctx->pc == 0x32C8A0u) {
        ctx->pc = 0x32C8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C89Cu;
        // 0x32c8a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C8A4u;
        goto label_32c8a4;
    }
    ctx->pc = 0x32C89Cu;
    SET_GPR_U32(ctx, 31, 0x32C8A4u);
    ctx->pc = 0x32C8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C89Cu;
    // 0x32c8a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327768u, 0x32C89Cu, 0x32C8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C8A4u;
label_32c8a4:
    // 0x32c8a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32c8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32c8a8:
    // 0x32c8a8: 0xc0c9dd8  jal         func_327760
label_32c8ac:
    if (ctx->pc == 0x32C8ACu) {
        ctx->pc = 0x32C8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C8A8u;
        // 0x32c8ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C8B0u;
        goto label_32c8b0;
    }
    ctx->pc = 0x32C8A8u;
    SET_GPR_U32(ctx, 31, 0x32C8B0u);
    ctx->pc = 0x32C8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C8A8u;
    // 0x32c8ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327760u, 0x32C8A8u, 0x32C8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C8B0u;
label_32c8b0:
    // 0x32c8b0: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x32c8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_32c8b4:
    // 0x32c8b4: 0x24a5c310  addiu       $a1, $a1, -0x3CF0
    ctx->pc = 0x32c8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951696));
label_32c8b8:
    // 0x32c8b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32c8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32c8bc:
    // 0x32c8bc: 0xc0c9dd2  jal         func_327748
label_32c8c0:
    if (ctx->pc == 0x32C8C0u) {
        ctx->pc = 0x32C8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C8BCu;
        // 0x32c8c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C8C4u;
        goto label_32c8c4;
    }
    ctx->pc = 0x32C8BCu;
    SET_GPR_U32(ctx, 31, 0x32C8C4u);
    ctx->pc = 0x32C8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C8BCu;
    // 0x32c8c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327748u, 0x32C8BCu, 0x32C8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C8C4u;
label_32c8c4:
    // 0x32c8c4: 0xc0c9de2  jal         func_327788
label_32c8c8:
    if (ctx->pc == 0x32C8C8u) {
        ctx->pc = 0x32C8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C8C4u;
        // 0x32c8c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C8CCu;
        goto label_32c8cc;
    }
    ctx->pc = 0x32C8C4u;
    SET_GPR_U32(ctx, 31, 0x32C8CCu);
    ctx->pc = 0x32C8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C8C4u;
    // 0x32c8c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327788u, 0x32C8C4u, 0x32C8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C8CCu;
label_32c8cc:
    // 0x32c8cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32c8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32c8d0:
    // 0x32c8d0: 0xc0c9de8  jal         func_3277A0
label_32c8d4:
    if (ctx->pc == 0x32C8D4u) {
        ctx->pc = 0x32C8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C8D0u;
        // 0x32c8d4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C8D8u;
        goto label_32c8d8;
    }
    ctx->pc = 0x32C8D0u;
    SET_GPR_U32(ctx, 31, 0x32C8D8u);
    ctx->pc = 0x32C8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C8D0u;
    // 0x32c8d4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3277A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3277A0u, 0x32C8D0u, 0x32C8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C8D8u;
label_32c8d8:
    // 0x32c8d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32c8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32c8dc:
    // 0x32c8dc: 0xc0c9dfa  jal         func_3277E8
label_32c8e0:
    if (ctx->pc == 0x32C8E0u) {
        ctx->pc = 0x32C8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C8DCu;
        // 0x32c8e0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C8E4u;
        goto label_32c8e4;
    }
    ctx->pc = 0x32C8DCu;
    SET_GPR_U32(ctx, 31, 0x32C8E4u);
    ctx->pc = 0x32C8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C8DCu;
    // 0x32c8e0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3277E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3277E8u, 0x32C8DCu, 0x32C8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C8E4u;
label_32c8e4:
    // 0x32c8e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32c8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32c8e8:
    // 0x32c8e8: 0xc0c9dee  jal         func_3277B8
label_32c8ec:
    if (ctx->pc == 0x32C8ECu) {
        ctx->pc = 0x32C8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C8E8u;
        // 0x32c8ec: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C8F0u;
        goto label_32c8f0;
    }
    ctx->pc = 0x32C8E8u;
    SET_GPR_U32(ctx, 31, 0x32C8F0u);
    ctx->pc = 0x32C8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C8E8u;
    // 0x32c8ec: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3277B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3277B8u, 0x32C8E8u, 0x32C8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C8F0u;
label_32c8f0:
    // 0x32c8f0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x32c8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_32c8f4:
    // 0x32c8f4: 0xc0c990a  jal         func_326428
label_32c8f8:
    if (ctx->pc == 0x32C8F8u) {
        ctx->pc = 0x32C8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C8F4u;
        // 0x32c8f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C8FCu;
        goto label_32c8fc;
    }
    ctx->pc = 0x32C8F4u;
    SET_GPR_U32(ctx, 31, 0x32C8FCu);
    ctx->pc = 0x32C8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C8F4u;
    // 0x32c8f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326428u, 0x32C8F4u, 0x32C8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C8FCu;
label_32c8fc:
    // 0x32c8fc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x32c8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_32c900:
    // 0x32c900: 0xc0c98f2  jal         func_3263C8
label_32c904:
    if (ctx->pc == 0x32C904u) {
        ctx->pc = 0x32C904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C900u;
        // 0x32c904: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C908u;
        goto label_32c908;
    }
    ctx->pc = 0x32C900u;
    SET_GPR_U32(ctx, 31, 0x32C908u);
    ctx->pc = 0x32C904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C900u;
    // 0x32c904: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3263C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3263C8u, 0x32C900u, 0x32C908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C908u;
label_32c908:
    // 0x32c908: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x32c908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_32c90c:
    // 0x32c90c: 0xc0c98ec  jal         func_3263B0
label_32c910:
    if (ctx->pc == 0x32C910u) {
        ctx->pc = 0x32C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C90Cu;
        // 0x32c910: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C914u;
        goto label_32c914;
    }
    ctx->pc = 0x32C90Cu;
    SET_GPR_U32(ctx, 31, 0x32C914u);
    ctx->pc = 0x32C910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C90Cu;
    // 0x32c910: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3263B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3263B0u, 0x32C90Cu, 0x32C914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C914u;
label_32c914:
    // 0x32c914: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x32c914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_32c918:
    // 0x32c918: 0xc0c9924  jal         func_326490
label_32c91c:
    if (ctx->pc == 0x32C91Cu) {
        ctx->pc = 0x32C91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C918u;
        // 0x32c91c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C920u;
        goto label_32c920;
    }
    ctx->pc = 0x32C918u;
    SET_GPR_U32(ctx, 31, 0x32C920u);
    ctx->pc = 0x32C91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C918u;
    // 0x32c91c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326490u, 0x32C918u, 0x32C920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C920u;
label_32c920:
    // 0x32c920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32c920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32c924:
    // 0x32c924: 0xc0caa7c  jal         func_32A9F0
label_32c928:
    if (ctx->pc == 0x32C928u) {
        ctx->pc = 0x32C928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C924u;
        // 0x32c928: 0x86050040  lh          $a1, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C92Cu;
        goto label_32c92c;
    }
    ctx->pc = 0x32C924u;
    SET_GPR_U32(ctx, 31, 0x32C92Cu);
    ctx->pc = 0x32C928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C924u;
    // 0x32c928: 0x86050040  lh          $a1, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A9F0u, 0x32C924u, 0x32C92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C92Cu;
label_32c92c:
    // 0x32c92c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32c92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32c930:
    // 0x32c930: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x32c930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_32c934:
    // 0x32c934: 0xc0cad24  jal         func_32B490
label_32c938:
    if (ctx->pc == 0x32C938u) {
        ctx->pc = 0x32C938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C934u;
        // 0x32c938: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C93Cu;
        goto label_32c93c;
    }
    ctx->pc = 0x32C934u;
    SET_GPR_U32(ctx, 31, 0x32C93Cu);
    ctx->pc = 0x32C938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C934u;
    // 0x32c938: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B490u, 0x32C934u, 0x32C93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C93Cu;
label_32c93c:
    // 0x32c93c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x32c93cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_32c940:
    // 0x32c940: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_32c944:
    if (ctx->pc == 0x32C944u) {
        ctx->pc = 0x32C944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C940u;
        // 0x32c944: 0x8fa60024  lw          $a2, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C948u;
        goto label_32c948;
    }
    ctx->pc = 0x32C940u;
    {
        const bool branch_taken_0x32c940 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x32C944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C940u;
        // 0x32c944: 0x8fa60024  lw          $a2, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c940) {
            ctx->pc = 0x32C950u;
            goto label_32c950;
        }
    }
    ctx->pc = 0x32C948u;
label_32c948:
    // 0x32c948: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_32c94c:
    if (ctx->pc == 0x32C94Cu) {
        ctx->pc = 0x32C950u;
        goto label_32c950;
    }
    ctx->pc = 0x32C948u;
    {
        const bool branch_taken_0x32c948 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c948) {
            ctx->pc = 0x32C958u;
            goto label_32c958;
        }
    }
    ctx->pc = 0x32C950u;
label_32c950:
    // 0x32c950: 0xc0cad22  jal         func_32B488
label_32c954:
    if (ctx->pc == 0x32C954u) {
        ctx->pc = 0x32C954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C950u;
        // 0x32c954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C958u;
        goto label_32c958;
    }
    ctx->pc = 0x32C950u;
    SET_GPR_U32(ctx, 31, 0x32C958u);
    ctx->pc = 0x32C954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C950u;
    // 0x32c954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B488u, 0x32C950u, 0x32C958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C958u;
label_32c958:
    // 0x32c958: 0xc0cb0aa  jal         func_32C2A8
label_32c95c:
    if (ctx->pc == 0x32C95Cu) {
        ctx->pc = 0x32C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C958u;
        // 0x32c95c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C960u;
        goto label_32c960;
    }
    ctx->pc = 0x32C958u;
    SET_GPR_U32(ctx, 31, 0x32C960u);
    ctx->pc = 0x32C95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C958u;
    // 0x32c95c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C2A8u, 0x32C958u, 0x32C960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C960u;
label_32c960:
    // 0x32c960: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x32c960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_32c964:
    // 0x32c964: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_32c968:
    if (ctx->pc == 0x32C968u) {
        ctx->pc = 0x32C968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C964u;
        // 0x32c968: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C96Cu;
        goto label_32c96c;
    }
    ctx->pc = 0x32C964u;
    {
        const bool branch_taken_0x32c964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c964) {
            ctx->pc = 0x32C968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C964u;
            // 0x32c968: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C978u;
            goto label_32c978;
        }
    }
    ctx->pc = 0x32C96Cu;
label_32c96c:
    // 0x32c96c: 0xc0cf08e  jal         func_33C238
label_32c970:
    if (ctx->pc == 0x32C970u) {
        ctx->pc = 0x32C970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C96Cu;
        // 0x32c970: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C974u;
        goto label_32c974;
    }
    ctx->pc = 0x32C96Cu;
    SET_GPR_U32(ctx, 31, 0x32C974u);
    ctx->pc = 0x32C970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C96Cu;
    // 0x32c970: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C238u, 0x32C96Cu, 0x32C974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C974u;
label_32c974:
    // 0x32c974: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32c974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32c978:
    // 0x32c978: 0xc0c9ddc  jal         func_327770
label_32c97c:
    if (ctx->pc == 0x32C97Cu) {
        ctx->pc = 0x32C97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C978u;
        // 0x32c97c: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C980u;
        goto label_32c980;
    }
    ctx->pc = 0x32C978u;
    SET_GPR_U32(ctx, 31, 0x32C980u);
    ctx->pc = 0x32C97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C978u;
    // 0x32c97c: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327770u, 0x32C978u, 0x32C980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C980u;
label_32c980:
    // 0x32c980: 0x54530007  bnel        $v0, $s3, . + 4 + (0x7 << 2)
label_32c984:
    if (ctx->pc == 0x32C984u) {
        ctx->pc = 0x32C984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C980u;
        // 0x32c984: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C988u;
        goto label_32c988;
    }
    ctx->pc = 0x32C980u;
    {
        const bool branch_taken_0x32c980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x32c980) {
            ctx->pc = 0x32C984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C980u;
            // 0x32c984: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C9A0u;
            goto label_32c9a0;
        }
    }
    ctx->pc = 0x32C988u;
label_32c988:
    // 0x32c988: 0xc0c9e5a  jal         func_327968
label_32c98c:
    if (ctx->pc == 0x32C98Cu) {
        ctx->pc = 0x32C98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C988u;
        // 0x32c98c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C990u;
        goto label_32c990;
    }
    ctx->pc = 0x32C988u;
    SET_GPR_U32(ctx, 31, 0x32C990u);
    ctx->pc = 0x32C98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C988u;
    // 0x32c98c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327968u, 0x32C988u, 0x32C990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C990u;
label_32c990:
    // 0x32c990: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x32c990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_32c994:
    // 0x32c994: 0xc0c9926  jal         func_326498
label_32c998:
    if (ctx->pc == 0x32C998u) {
        ctx->pc = 0x32C998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C994u;
        // 0x32c998: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C99Cu;
        goto label_32c99c;
    }
    ctx->pc = 0x32C994u;
    SET_GPR_U32(ctx, 31, 0x32C99Cu);
    ctx->pc = 0x32C998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C994u;
    // 0x32c998: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326498u, 0x32C994u, 0x32C99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C99Cu;
label_32c99c:
    // 0x32c99c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x32c99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_32c9a0:
    // 0x32c9a0: 0xc0c98c8  jal         func_326320
label_32c9a4:
    if (ctx->pc == 0x32C9A4u) {
        ctx->pc = 0x32C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C9A0u;
        // 0x32c9a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C9A8u;
        goto label_32c9a8;
    }
    ctx->pc = 0x32C9A0u;
    SET_GPR_U32(ctx, 31, 0x32C9A8u);
    ctx->pc = 0x32C9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C9A0u;
    // 0x32c9a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326320u, 0x32C9A0u, 0x32C9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C9A8u;
label_32c9a8:
    // 0x32c9a8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x32c9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_32c9ac:
    // 0x32c9ac: 0x8c42145c  lw          $v0, 0x145C($v0)
    ctx->pc = 0x32c9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5212)));
label_32c9b0:
    // 0x32c9b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_32c9b4:
    if (ctx->pc == 0x32C9B4u) {
        ctx->pc = 0x32C9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C9B0u;
        // 0x32c9b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C9B8u;
        goto label_32c9b8;
    }
    ctx->pc = 0x32C9B0u;
    {
        const bool branch_taken_0x32c9b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C9B0u;
        // 0x32c9b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c9b0) {
            ctx->pc = 0x32C9C8u;
            goto label_32c9c8;
        }
    }
    ctx->pc = 0x32C9B8u;
label_32c9b8:
    // 0x32c9b8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x32c9b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32c9bc:
    // 0x32c9bc: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x32c9bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_32c9c0:
    // 0x32c9c0: 0x40f809  jalr        $v0
label_32c9c4:
    if (ctx->pc == 0x32C9C4u) {
        ctx->pc = 0x32C9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C9C0u;
        // 0x32c9c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C9C8u;
        goto label_32c9c8;
    }
    ctx->pc = 0x32C9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32C9C8u);
        ctx->pc = 0x32C9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C9C0u;
        // 0x32c9c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C9C0u, 0x32C9C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32C9C8u;
label_32c9c8:
    // 0x32c9c8: 0x10000005  b           . + 4 + (0x5 << 2)
label_32c9cc:
    if (ctx->pc == 0x32C9CCu) {
        ctx->pc = 0x32C9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C9C8u;
        // 0x32c9cc: 0xa2130001  sb          $s3, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C9D0u;
        goto label_32c9d0;
    }
    ctx->pc = 0x32C9C8u;
    {
        const bool branch_taken_0x32c9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C9C8u;
        // 0x32c9cc: 0xa2130001  sb          $s3, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c9c8) {
            ctx->pc = 0x32C9E0u;
            goto label_32c9e0;
        }
    }
    ctx->pc = 0x32C9D0u;
label_32c9d0:
    // 0x32c9d0: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_32c9d4:
    if (ctx->pc == 0x32C9D4u) {
        ctx->pc = 0x32C9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C9D0u;
        // 0x32c9d4: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C9D8u;
        goto label_32c9d8;
    }
    ctx->pc = 0x32C9D0u;
    {
        const bool branch_taken_0x32c9d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32c9d0) {
            ctx->pc = 0x32C9D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C9D0u;
            // 0x32c9d4: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C9E4u;
            goto label_32c9e4;
        }
    }
    ctx->pc = 0x32C9D8u;
label_32c9d8:
    // 0x32c9d8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x32c9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_32c9dc:
    // 0x32c9dc: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x32c9dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_32c9e0:
    // 0x32c9e0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x32c9e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_32c9e4:
    // 0x32c9e4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x32c9e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_32c9e8:
    // 0x32c9e8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x32c9e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_32c9ec:
    // 0x32c9ec: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x32c9ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_32c9f0:
    // 0x32c9f0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x32c9f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_32c9f4:
    // 0x32c9f4: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x32c9f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_32c9f8:
    // 0x32c9f8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x32c9f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_32c9fc:
    // 0x32c9fc: 0x3e00008  jr          $ra
label_32ca00:
    if (ctx->pc == 0x32CA00u) {
        ctx->pc = 0x32CA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C9FCu;
        // 0x32ca00: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32CA04u;
        goto label_32ca04;
    }
    ctx->pc = 0x32C9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C9FCu;
        // 0x32ca00: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C9FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32CA04u;
label_32ca04:
    // 0x32ca04: 0x0  nop
    ctx->pc = 0x32ca04u;
    // NOP
label_32ca08:
    // 0x32ca08: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x32ca08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_32ca0c:
    // 0x32ca0c: 0x0  nop
    ctx->pc = 0x32ca0cu;
    // NOP
    ctx->pc = 0x32ca10u;
}
