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

// Function: cModel_Trans_screen
// Address: 0x14a910 - 0x14aab8
void cModel_Trans_screen_0x14a910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cModel_Trans_screen_0x14a910");
#endif

    switch (ctx->pc) {
        case 0x14a910u: goto label_14a910;
        case 0x14a914u: goto label_14a914;
        case 0x14a918u: goto label_14a918;
        case 0x14a91cu: goto label_14a91c;
        case 0x14a920u: goto label_14a920;
        case 0x14a924u: goto label_14a924;
        case 0x14a928u: goto label_14a928;
        case 0x14a92cu: goto label_14a92c;
        case 0x14a930u: goto label_14a930;
        case 0x14a934u: goto label_14a934;
        case 0x14a938u: goto label_14a938;
        case 0x14a93cu: goto label_14a93c;
        case 0x14a940u: goto label_14a940;
        case 0x14a944u: goto label_14a944;
        case 0x14a948u: goto label_14a948;
        case 0x14a94cu: goto label_14a94c;
        case 0x14a950u: goto label_14a950;
        case 0x14a954u: goto label_14a954;
        case 0x14a958u: goto label_14a958;
        case 0x14a95cu: goto label_14a95c;
        case 0x14a960u: goto label_14a960;
        case 0x14a964u: goto label_14a964;
        case 0x14a968u: goto label_14a968;
        case 0x14a96cu: goto label_14a96c;
        case 0x14a970u: goto label_14a970;
        case 0x14a974u: goto label_14a974;
        case 0x14a978u: goto label_14a978;
        case 0x14a97cu: goto label_14a97c;
        case 0x14a980u: goto label_14a980;
        case 0x14a984u: goto label_14a984;
        case 0x14a988u: goto label_14a988;
        case 0x14a98cu: goto label_14a98c;
        case 0x14a990u: goto label_14a990;
        case 0x14a994u: goto label_14a994;
        case 0x14a998u: goto label_14a998;
        case 0x14a99cu: goto label_14a99c;
        case 0x14a9a0u: goto label_14a9a0;
        case 0x14a9a4u: goto label_14a9a4;
        case 0x14a9a8u: goto label_14a9a8;
        case 0x14a9acu: goto label_14a9ac;
        case 0x14a9b0u: goto label_14a9b0;
        case 0x14a9b4u: goto label_14a9b4;
        case 0x14a9b8u: goto label_14a9b8;
        case 0x14a9bcu: goto label_14a9bc;
        case 0x14a9c0u: goto label_14a9c0;
        case 0x14a9c4u: goto label_14a9c4;
        case 0x14a9c8u: goto label_14a9c8;
        case 0x14a9ccu: goto label_14a9cc;
        case 0x14a9d0u: goto label_14a9d0;
        case 0x14a9d4u: goto label_14a9d4;
        case 0x14a9d8u: goto label_14a9d8;
        case 0x14a9dcu: goto label_14a9dc;
        case 0x14a9e0u: goto label_14a9e0;
        case 0x14a9e4u: goto label_14a9e4;
        case 0x14a9e8u: goto label_14a9e8;
        case 0x14a9ecu: goto label_14a9ec;
        case 0x14a9f0u: goto label_14a9f0;
        case 0x14a9f4u: goto label_14a9f4;
        case 0x14a9f8u: goto label_14a9f8;
        case 0x14a9fcu: goto label_14a9fc;
        case 0x14aa00u: goto label_14aa00;
        case 0x14aa04u: goto label_14aa04;
        case 0x14aa08u: goto label_14aa08;
        case 0x14aa0cu: goto label_14aa0c;
        case 0x14aa10u: goto label_14aa10;
        case 0x14aa14u: goto label_14aa14;
        case 0x14aa18u: goto label_14aa18;
        case 0x14aa1cu: goto label_14aa1c;
        case 0x14aa20u: goto label_14aa20;
        case 0x14aa24u: goto label_14aa24;
        case 0x14aa28u: goto label_14aa28;
        case 0x14aa2cu: goto label_14aa2c;
        case 0x14aa30u: goto label_14aa30;
        case 0x14aa34u: goto label_14aa34;
        case 0x14aa38u: goto label_14aa38;
        case 0x14aa3cu: goto label_14aa3c;
        case 0x14aa40u: goto label_14aa40;
        case 0x14aa44u: goto label_14aa44;
        case 0x14aa48u: goto label_14aa48;
        case 0x14aa4cu: goto label_14aa4c;
        case 0x14aa50u: goto label_14aa50;
        case 0x14aa54u: goto label_14aa54;
        case 0x14aa58u: goto label_14aa58;
        case 0x14aa5cu: goto label_14aa5c;
        case 0x14aa60u: goto label_14aa60;
        case 0x14aa64u: goto label_14aa64;
        case 0x14aa68u: goto label_14aa68;
        case 0x14aa6cu: goto label_14aa6c;
        case 0x14aa70u: goto label_14aa70;
        case 0x14aa74u: goto label_14aa74;
        case 0x14aa78u: goto label_14aa78;
        case 0x14aa7cu: goto label_14aa7c;
        case 0x14aa80u: goto label_14aa80;
        case 0x14aa84u: goto label_14aa84;
        case 0x14aa88u: goto label_14aa88;
        case 0x14aa8cu: goto label_14aa8c;
        case 0x14aa90u: goto label_14aa90;
        case 0x14aa94u: goto label_14aa94;
        case 0x14aa98u: goto label_14aa98;
        case 0x14aa9cu: goto label_14aa9c;
        case 0x14aaa0u: goto label_14aaa0;
        case 0x14aaa4u: goto label_14aaa4;
        case 0x14aaa8u: goto label_14aaa8;
        case 0x14aaacu: goto label_14aaac;
        case 0x14aab0u: goto label_14aab0;
        case 0x14aab4u: goto label_14aab4;
        default: break;
    }

    ctx->pc = 0x14a910u;

label_14a910:
    // 0x14a910: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x14a910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_14a914:
    // 0x14a914: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x14a914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_14a918:
    // 0x14a918: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x14a918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_14a91c:
    // 0x14a91c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x14a91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_14a920:
    // 0x14a920: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x14a920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_14a924:
    // 0x14a924: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14a924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14a928:
    // 0x14a928: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14a928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_14a92c:
    // 0x14a92c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x14a92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_14a930:
    // 0x14a930: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14a930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_14a934:
    // 0x14a934: 0x8c4376b0  lw          $v1, 0x76B0($v0)
    ctx->pc = 0x14a934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30384)));
label_14a938:
    // 0x14a938: 0x8e250214  lw          $a1, 0x214($s1)
    ctx->pc = 0x14a938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_14a93c:
    // 0x14a93c: 0x30700001  andi        $s0, $v1, 0x1
    ctx->pc = 0x14a93cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_14a940:
    // 0x14a940: 0x84a40030  lh          $a0, 0x30($a1)
    ctx->pc = 0x14a940u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
label_14a944:
    // 0x14a944: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x14a944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_14a948:
    // 0x14a948: 0x40f809  jalr        $v0
label_14a94c:
    if (ctx->pc == 0x14A94Cu) {
        ctx->pc = 0x14A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A948u;
        // 0x14a94c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A950u;
        goto label_14a950;
    }
    ctx->pc = 0x14A948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14A950u);
        ctx->pc = 0x14A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A948u;
        // 0x14a94c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A948u, 0x14A950u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14A950u;
label_14a950:
    // 0x14a950: 0x54400052  bnel        $v0, $zero, . + 4 + (0x52 << 2)
label_14a954:
    if (ctx->pc == 0x14A954u) {
        ctx->pc = 0x14A954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A950u;
        // 0x14a954: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A958u;
        goto label_14a958;
    }
    ctx->pc = 0x14A950u;
    {
        const bool branch_taken_0x14a950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a950) {
            ctx->pc = 0x14A954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A950u;
            // 0x14a954: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AA9Cu;
            goto label_14aa9c;
        }
    }
    ctx->pc = 0x14A958u;
label_14a958:
    // 0x14a958: 0x8e230250  lw          $v1, 0x250($s1)
    ctx->pc = 0x14a958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_14a95c:
    // 0x14a95c: 0x3c02ffdf  lui         $v0, 0xFFDF
    ctx->pc = 0x14a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65503 << 16));
label_14a960:
    // 0x14a960: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14a960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_14a964:
    // 0x14a964: 0x863202ac  lh          $s2, 0x2AC($s1)
    ctx->pc = 0x14a964u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 684)));
label_14a968:
    // 0x14a968: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x14a968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_14a96c:
    // 0x14a96c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14a96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14a970:
    // 0x14a970: 0xae230250  sw          $v1, 0x250($s1)
    ctx->pc = 0x14a970u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 3));
label_14a974:
    // 0x14a974: 0xc052dbe  jal         func_14B6F8
label_14a978:
    if (ctx->pc == 0x14A978u) {
        ctx->pc = 0x14A978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A974u;
        // 0x14a978: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A97Cu;
        goto label_14a97c;
    }
    ctx->pc = 0x14A974u;
    SET_GPR_U32(ctx, 31, 0x14A97Cu);
    ctx->pc = 0x14A978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A974u;
    // 0x14a978: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x14A974u, 0x14A97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A97Cu;
label_14a97c:
    // 0x14a97c: 0x10a080  sll         $s4, $s0, 2
    ctx->pc = 0x14a97cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_14a980:
    // 0x14a980: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14a980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14a984:
    // 0x14a984: 0x12000035  beqz        $s0, . + 4 + (0x35 << 2)
label_14a988:
    if (ctx->pc == 0x14A988u) {
        ctx->pc = 0x14A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A984u;
        // 0x14a988: 0x2633028c  addiu       $s3, $s1, 0x28C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 652));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A98Cu;
        goto label_14a98c;
    }
    ctx->pc = 0x14A984u;
    {
        const bool branch_taken_0x14a984 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A984u;
        // 0x14a988: 0x2633028c  addiu       $s3, $s1, 0x28C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 652));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a984) {
            ctx->pc = 0x14AA5Cu;
            goto label_14aa5c;
        }
    }
    ctx->pc = 0x14A98Cu;
label_14a98c:
    // 0x14a98c: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x14a98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_14a990:
    // 0x14a990: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x14a990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_14a994:
    // 0x14a994: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_14a998:
    if (ctx->pc == 0x14A998u) {
        ctx->pc = 0x14A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A994u;
        // 0x14a998: 0x8e030388  lw          $v1, 0x388($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A99Cu;
        goto label_14a99c;
    }
    ctx->pc = 0x14A994u;
    {
        const bool branch_taken_0x14a994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a994) {
            ctx->pc = 0x14A998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A994u;
            // 0x14a998: 0x8e030388  lw          $v1, 0x388($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A9ACu;
            goto label_14a9ac;
        }
    }
    ctx->pc = 0x14A99Cu;
label_14a99c:
    // 0x14a99c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14a99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14a9a0:
    // 0x14a9a0: 0xc052d34  jal         func_14B4D0
label_14a9a4:
    if (ctx->pc == 0x14A9A4u) {
        ctx->pc = 0x14A9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9A0u;
        // 0x14a9a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A9A8u;
        goto label_14a9a8;
    }
    ctx->pc = 0x14A9A0u;
    SET_GPR_U32(ctx, 31, 0x14A9A8u);
    ctx->pc = 0x14A9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A9A0u;
    // 0x14a9a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B4D0u, 0x14A9A0u, 0x14A9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A9A8u;
label_14a9a8:
    // 0x14a9a8: 0x8e030388  lw          $v1, 0x388($s0)
    ctx->pc = 0x14a9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
label_14a9ac:
    // 0x14a9ac: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x14a9acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_14a9b0:
    // 0x14a9b0: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x14a9b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_14a9b4:
    // 0x14a9b4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x14a9b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_14a9b8:
    // 0x14a9b8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x14a9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_14a9bc:
    // 0x14a9bc: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_14a9c0:
    if (ctx->pc == 0x14A9C0u) {
        ctx->pc = 0x14A9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9BCu;
        // 0x14a9c0: 0x8e230214  lw          $v1, 0x214($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A9C4u;
        goto label_14a9c4;
    }
    ctx->pc = 0x14A9BCu;
    {
        const bool branch_taken_0x14a9bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9BCu;
        // 0x14a9c0: 0x8e230214  lw          $v1, 0x214($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a9bc) {
            ctx->pc = 0x14AA14u;
            goto label_14aa14;
        }
    }
    ctx->pc = 0x14A9C4u;
label_14a9c4:
    // 0x14a9c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14a9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14a9c8:
    // 0x14a9c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14a9c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14a9cc:
    // 0x14a9cc: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x14a9ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_14a9d0:
    // 0x14a9d0: 0x129400  sll         $s2, $s2, 16
    ctx->pc = 0x14a9d0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
label_14a9d4:
    // 0x14a9d4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x14a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_14a9d8:
    // 0x14a9d8: 0x40f809  jalr        $v0
label_14a9dc:
    if (ctx->pc == 0x14A9DCu) {
        ctx->pc = 0x14A9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9D8u;
        // 0x14a9dc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A9E0u;
        goto label_14a9e0;
    }
    ctx->pc = 0x14A9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14A9E0u);
        ctx->pc = 0x14A9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9D8u;
        // 0x14a9dc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A9D8u, 0x14A9E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14A9E0u;
label_14a9e0:
    // 0x14a9e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14a9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14a9e4:
    // 0x14a9e4: 0x0  nop
    ctx->pc = 0x14a9e4u;
    // NOP
label_14a9e8:
    // 0x14a9e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14a9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14a9ec:
    // 0x14a9ec: 0xc052e46  jal         func_14B918
label_14a9f0:
    if (ctx->pc == 0x14A9F0u) {
        ctx->pc = 0x14A9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9ECu;
        // 0x14a9f0: 0x123403  sra         $a2, $s2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A9F4u;
        goto label_14a9f4;
    }
    ctx->pc = 0x14A9ECu;
    SET_GPR_U32(ctx, 31, 0x14A9F4u);
    ctx->pc = 0x14A9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A9ECu;
    // 0x14a9f0: 0x123403  sra         $a2, $s2, 16 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B918u, 0x14A9ECu, 0x14A9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A9F4u;
label_14a9f4:
    // 0x14a9f4: 0x8e100404  lw          $s0, 0x404($s0)
    ctx->pc = 0x14a9f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
label_14a9f8:
    // 0x14a9f8: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
label_14a9fc:
    if (ctx->pc == 0x14A9FCu) {
        ctx->pc = 0x14A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9F8u;
        // 0x14a9fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA00u;
        goto label_14aa00;
    }
    ctx->pc = 0x14A9F8u;
    {
        const bool branch_taken_0x14a9f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9F8u;
        // 0x14a9fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a9f8) {
            ctx->pc = 0x14A9E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14a9e8;
        }
    }
    ctx->pc = 0x14AA00u;
label_14aa00:
    // 0x14aa00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14aa00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14aa04:
    // 0x14aa04: 0xc0531ae  jal         func_14C6B8
label_14aa08:
    if (ctx->pc == 0x14AA08u) {
        ctx->pc = 0x14AA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA04u;
        // 0x14aa08: 0x122c03  sra         $a1, $s2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA0Cu;
        goto label_14aa0c;
    }
    ctx->pc = 0x14AA04u;
    SET_GPR_U32(ctx, 31, 0x14AA0Cu);
    ctx->pc = 0x14AA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AA04u;
    // 0x14aa08: 0x122c03  sra         $a1, $s2, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C6B8u, 0x14AA04u, 0x14AA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AA0Cu;
label_14aa0c:
    // 0x14aa0c: 0x10000014  b           . + 4 + (0x14 << 2)
label_14aa10:
    if (ctx->pc == 0x14AA10u) {
        ctx->pc = 0x14AA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA0Cu;
        // 0x14aa10: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA14u;
        goto label_14aa14;
    }
    ctx->pc = 0x14AA0Cu;
    {
        const bool branch_taken_0x14aa0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA0Cu;
        // 0x14aa10: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aa0c) {
            ctx->pc = 0x14AA60u;
            goto label_14aa60;
        }
    }
    ctx->pc = 0x14AA14u;
label_14aa14:
    // 0x14aa14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14aa14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14aa18:
    // 0x14aa18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14aa18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14aa1c:
    // 0x14aa1c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x14aa1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_14aa20:
    // 0x14aa20: 0x129400  sll         $s2, $s2, 16
    ctx->pc = 0x14aa20u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
label_14aa24:
    // 0x14aa24: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x14aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_14aa28:
    // 0x14aa28: 0x40f809  jalr        $v0
label_14aa2c:
    if (ctx->pc == 0x14AA2Cu) {
        ctx->pc = 0x14AA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA28u;
        // 0x14aa2c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA30u;
        goto label_14aa30;
    }
    ctx->pc = 0x14AA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14AA30u);
        ctx->pc = 0x14AA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA28u;
        // 0x14aa2c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AA28u, 0x14AA30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14AA30u;
label_14aa30:
    // 0x14aa30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14aa30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14aa34:
    // 0x14aa34: 0x0  nop
    ctx->pc = 0x14aa34u;
    // NOP
label_14aa38:
    // 0x14aa38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14aa38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14aa3c:
    // 0x14aa3c: 0xc052f6c  jal         func_14BDB0
label_14aa40:
    if (ctx->pc == 0x14AA40u) {
        ctx->pc = 0x14AA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA3Cu;
        // 0x14aa40: 0x123403  sra         $a2, $s2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA44u;
        goto label_14aa44;
    }
    ctx->pc = 0x14AA3Cu;
    SET_GPR_U32(ctx, 31, 0x14AA44u);
    ctx->pc = 0x14AA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AA3Cu;
    // 0x14aa40: 0x123403  sra         $a2, $s2, 16 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BDB0u, 0x14AA3Cu, 0x14AA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AA44u;
label_14aa44:
    // 0x14aa44: 0x8e100404  lw          $s0, 0x404($s0)
    ctx->pc = 0x14aa44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
label_14aa48:
    // 0x14aa48: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
label_14aa4c:
    if (ctx->pc == 0x14AA4Cu) {
        ctx->pc = 0x14AA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA48u;
        // 0x14aa4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA50u;
        goto label_14aa50;
    }
    ctx->pc = 0x14AA48u;
    {
        const bool branch_taken_0x14aa48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x14AA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA48u;
        // 0x14aa4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aa48) {
            ctx->pc = 0x14AA38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14aa38;
        }
    }
    ctx->pc = 0x14AA50u;
label_14aa50:
    // 0x14aa50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14aa50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14aa54:
    // 0x14aa54: 0xc053168  jal         func_14C5A0
label_14aa58:
    if (ctx->pc == 0x14AA58u) {
        ctx->pc = 0x14AA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA54u;
        // 0x14aa58: 0x122c03  sra         $a1, $s2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA5Cu;
        goto label_14aa5c;
    }
    ctx->pc = 0x14AA54u;
    SET_GPR_U32(ctx, 31, 0x14AA5Cu);
    ctx->pc = 0x14AA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AA54u;
    // 0x14aa58: 0x122c03  sra         $a1, $s2, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C5A0u, 0x14AA54u, 0x14AA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AA5Cu;
label_14aa5c:
    // 0x14aa5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14aa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14aa60:
    // 0x14aa60: 0x3c110075  lui         $s1, 0x75
    ctx->pc = 0x14aa60u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)117 << 16));
label_14aa64:
    // 0x14aa64: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x14aa64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_14aa68:
    // 0x14aa68: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x14aa68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_14aa6c:
    // 0x14aa6c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x14aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_14aa70:
    // 0x14aa70: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x14aa70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_14aa74:
    // 0x14aa74: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x14aa74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14aa78:
    // 0x14aa78: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
label_14aa7c:
    if (ctx->pc == 0x14AA7Cu) {
        ctx->pc = 0x14AA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA78u;
        // 0x14aa7c: 0x26244c80  addiu       $a0, $s1, 0x4C80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 19584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA80u;
        goto label_14aa80;
    }
    ctx->pc = 0x14AA78u;
    {
        const bool branch_taken_0x14aa78 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA78u;
        // 0x14aa7c: 0x26244c80  addiu       $a0, $s1, 0x4C80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 19584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aa78) {
            ctx->pc = 0x14AA8Cu;
            goto label_14aa8c;
        }
    }
    ctx->pc = 0x14AA80u;
label_14aa80:
    // 0x14aa80: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x14aa80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14aa84:
    // 0x14aa84: 0xc0c6980  jal         func_31A600
label_14aa88:
    if (ctx->pc == 0x14AA88u) {
        ctx->pc = 0x14AA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA84u;
        // 0x14aa88: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA8Cu;
        goto label_14aa8c;
    }
    ctx->pc = 0x14AA84u;
    SET_GPR_U32(ctx, 31, 0x14AA8Cu);
    ctx->pc = 0x14AA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AA84u;
    // 0x14aa88: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A600u, 0x14AA84u, 0x14AA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AA8Cu;
label_14aa8c:
    // 0x14aa8c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x14aa8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_14aa90:
    // 0x14aa90: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_14aa94:
    if (ctx->pc == 0x14AA94u) {
        ctx->pc = 0x14AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA90u;
        // 0x14aa94: 0x2450ffff  addiu       $s0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA98u;
        goto label_14aa98;
    }
    ctx->pc = 0x14AA90u;
    {
        const bool branch_taken_0x14aa90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA90u;
        // 0x14aa94: 0x2450ffff  addiu       $s0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aa90) {
            ctx->pc = 0x14AA68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14aa68;
        }
    }
    ctx->pc = 0x14AA98u;
label_14aa98:
    // 0x14aa98: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x14aa98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_14aa9c:
    // 0x14aa9c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x14aa9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_14aaa0:
    // 0x14aaa0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x14aaa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_14aaa4:
    // 0x14aaa4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14aaa4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14aaa8:
    // 0x14aaa8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x14aaa8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_14aaac:
    // 0x14aaac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14aaacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14aab0:
    // 0x14aab0: 0x3e00008  jr          $ra
label_14aab4:
    if (ctx->pc == 0x14AAB4u) {
        ctx->pc = 0x14AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AAB0u;
        // 0x14aab4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AAB8u;
        goto label_fallthrough_0x14aab0;
    }
    ctx->pc = 0x14AAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AAB0u;
        // 0x14aab4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14aab0:
    ctx->pc = 0x14AAB8u;
}
