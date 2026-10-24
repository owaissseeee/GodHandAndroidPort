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

// Function: func_00296958
// Address: 0x296958 - 0x296c28
void func_00296958_0x296958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00296958_0x296958");
#endif

    switch (ctx->pc) {
        case 0x296958u: goto label_296958;
        case 0x29695cu: goto label_29695c;
        case 0x296960u: goto label_296960;
        case 0x296964u: goto label_296964;
        case 0x296968u: goto label_296968;
        case 0x29696cu: goto label_29696c;
        case 0x296970u: goto label_296970;
        case 0x296974u: goto label_296974;
        case 0x296978u: goto label_296978;
        case 0x29697cu: goto label_29697c;
        case 0x296980u: goto label_296980;
        case 0x296984u: goto label_296984;
        case 0x296988u: goto label_296988;
        case 0x29698cu: goto label_29698c;
        case 0x296990u: goto label_296990;
        case 0x296994u: goto label_296994;
        case 0x296998u: goto label_296998;
        case 0x29699cu: goto label_29699c;
        case 0x2969a0u: goto label_2969a0;
        case 0x2969a4u: goto label_2969a4;
        case 0x2969a8u: goto label_2969a8;
        case 0x2969acu: goto label_2969ac;
        case 0x2969b0u: goto label_2969b0;
        case 0x2969b4u: goto label_2969b4;
        case 0x2969b8u: goto label_2969b8;
        case 0x2969bcu: goto label_2969bc;
        case 0x2969c0u: goto label_2969c0;
        case 0x2969c4u: goto label_2969c4;
        case 0x2969c8u: goto label_2969c8;
        case 0x2969ccu: goto label_2969cc;
        case 0x2969d0u: goto label_2969d0;
        case 0x2969d4u: goto label_2969d4;
        case 0x2969d8u: goto label_2969d8;
        case 0x2969dcu: goto label_2969dc;
        case 0x2969e0u: goto label_2969e0;
        case 0x2969e4u: goto label_2969e4;
        case 0x2969e8u: goto label_2969e8;
        case 0x2969ecu: goto label_2969ec;
        case 0x2969f0u: goto label_2969f0;
        case 0x2969f4u: goto label_2969f4;
        case 0x2969f8u: goto label_2969f8;
        case 0x2969fcu: goto label_2969fc;
        case 0x296a00u: goto label_296a00;
        case 0x296a04u: goto label_296a04;
        case 0x296a08u: goto label_296a08;
        case 0x296a0cu: goto label_296a0c;
        case 0x296a10u: goto label_296a10;
        case 0x296a14u: goto label_296a14;
        case 0x296a18u: goto label_296a18;
        case 0x296a1cu: goto label_296a1c;
        case 0x296a20u: goto label_296a20;
        case 0x296a24u: goto label_296a24;
        case 0x296a28u: goto label_296a28;
        case 0x296a2cu: goto label_296a2c;
        case 0x296a30u: goto label_296a30;
        case 0x296a34u: goto label_296a34;
        case 0x296a38u: goto label_296a38;
        case 0x296a3cu: goto label_296a3c;
        case 0x296a40u: goto label_296a40;
        case 0x296a44u: goto label_296a44;
        case 0x296a48u: goto label_296a48;
        case 0x296a4cu: goto label_296a4c;
        case 0x296a50u: goto label_296a50;
        case 0x296a54u: goto label_296a54;
        case 0x296a58u: goto label_296a58;
        case 0x296a5cu: goto label_296a5c;
        case 0x296a60u: goto label_296a60;
        case 0x296a64u: goto label_296a64;
        case 0x296a68u: goto label_296a68;
        case 0x296a6cu: goto label_296a6c;
        case 0x296a70u: goto label_296a70;
        case 0x296a74u: goto label_296a74;
        case 0x296a78u: goto label_296a78;
        case 0x296a7cu: goto label_296a7c;
        case 0x296a80u: goto label_296a80;
        case 0x296a84u: goto label_296a84;
        case 0x296a88u: goto label_296a88;
        case 0x296a8cu: goto label_296a8c;
        case 0x296a90u: goto label_296a90;
        case 0x296a94u: goto label_296a94;
        case 0x296a98u: goto label_296a98;
        case 0x296a9cu: goto label_296a9c;
        case 0x296aa0u: goto label_296aa0;
        case 0x296aa4u: goto label_296aa4;
        case 0x296aa8u: goto label_296aa8;
        case 0x296aacu: goto label_296aac;
        case 0x296ab0u: goto label_296ab0;
        case 0x296ab4u: goto label_296ab4;
        case 0x296ab8u: goto label_296ab8;
        case 0x296abcu: goto label_296abc;
        case 0x296ac0u: goto label_296ac0;
        case 0x296ac4u: goto label_296ac4;
        case 0x296ac8u: goto label_296ac8;
        case 0x296accu: goto label_296acc;
        case 0x296ad0u: goto label_296ad0;
        case 0x296ad4u: goto label_296ad4;
        case 0x296ad8u: goto label_296ad8;
        case 0x296adcu: goto label_296adc;
        case 0x296ae0u: goto label_296ae0;
        case 0x296ae4u: goto label_296ae4;
        case 0x296ae8u: goto label_296ae8;
        case 0x296aecu: goto label_296aec;
        case 0x296af0u: goto label_296af0;
        case 0x296af4u: goto label_296af4;
        case 0x296af8u: goto label_296af8;
        case 0x296afcu: goto label_296afc;
        case 0x296b00u: goto label_296b00;
        case 0x296b04u: goto label_296b04;
        case 0x296b08u: goto label_296b08;
        case 0x296b0cu: goto label_296b0c;
        case 0x296b10u: goto label_296b10;
        case 0x296b14u: goto label_296b14;
        case 0x296b18u: goto label_296b18;
        case 0x296b1cu: goto label_296b1c;
        case 0x296b20u: goto label_296b20;
        case 0x296b24u: goto label_296b24;
        case 0x296b28u: goto label_296b28;
        case 0x296b2cu: goto label_296b2c;
        case 0x296b30u: goto label_296b30;
        case 0x296b34u: goto label_296b34;
        case 0x296b38u: goto label_296b38;
        case 0x296b3cu: goto label_296b3c;
        case 0x296b40u: goto label_296b40;
        case 0x296b44u: goto label_296b44;
        case 0x296b48u: goto label_296b48;
        case 0x296b4cu: goto label_296b4c;
        case 0x296b50u: goto label_296b50;
        case 0x296b54u: goto label_296b54;
        case 0x296b58u: goto label_296b58;
        case 0x296b5cu: goto label_296b5c;
        case 0x296b60u: goto label_296b60;
        case 0x296b64u: goto label_296b64;
        case 0x296b68u: goto label_296b68;
        case 0x296b6cu: goto label_296b6c;
        case 0x296b70u: goto label_296b70;
        case 0x296b74u: goto label_296b74;
        case 0x296b78u: goto label_296b78;
        case 0x296b7cu: goto label_296b7c;
        case 0x296b80u: goto label_296b80;
        case 0x296b84u: goto label_296b84;
        case 0x296b88u: goto label_296b88;
        case 0x296b8cu: goto label_296b8c;
        case 0x296b90u: goto label_296b90;
        case 0x296b94u: goto label_296b94;
        case 0x296b98u: goto label_296b98;
        case 0x296b9cu: goto label_296b9c;
        case 0x296ba0u: goto label_296ba0;
        case 0x296ba4u: goto label_296ba4;
        case 0x296ba8u: goto label_296ba8;
        case 0x296bacu: goto label_296bac;
        case 0x296bb0u: goto label_296bb0;
        case 0x296bb4u: goto label_296bb4;
        case 0x296bb8u: goto label_296bb8;
        case 0x296bbcu: goto label_296bbc;
        case 0x296bc0u: goto label_296bc0;
        case 0x296bc4u: goto label_296bc4;
        case 0x296bc8u: goto label_296bc8;
        case 0x296bccu: goto label_296bcc;
        case 0x296bd0u: goto label_296bd0;
        case 0x296bd4u: goto label_296bd4;
        case 0x296bd8u: goto label_296bd8;
        case 0x296bdcu: goto label_296bdc;
        case 0x296be0u: goto label_296be0;
        case 0x296be4u: goto label_296be4;
        case 0x296be8u: goto label_296be8;
        case 0x296becu: goto label_296bec;
        case 0x296bf0u: goto label_296bf0;
        case 0x296bf4u: goto label_296bf4;
        case 0x296bf8u: goto label_296bf8;
        case 0x296bfcu: goto label_296bfc;
        case 0x296c00u: goto label_296c00;
        case 0x296c04u: goto label_296c04;
        case 0x296c08u: goto label_296c08;
        case 0x296c0cu: goto label_296c0c;
        case 0x296c10u: goto label_296c10;
        case 0x296c14u: goto label_296c14;
        case 0x296c18u: goto label_296c18;
        case 0x296c1cu: goto label_296c1c;
        case 0x296c20u: goto label_296c20;
        case 0x296c24u: goto label_296c24;
        default: break;
    }

    ctx->pc = 0x296958u;

label_296958:
    // 0x296958: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x296958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_29695c:
    // 0x29695c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x29695cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_296960:
    // 0x296960: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x296960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_296964:
    // 0x296964: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x296964u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_296968:
    // 0x296968: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x296968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_29696c:
    // 0x29696c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x29696cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_296970:
    // 0x296970: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x296970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_296974:
    // 0x296974: 0x82230005  lb          $v1, 0x5($s1)
    ctx->pc = 0x296974u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
label_296978:
    // 0x296978: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x296978u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_29697c:
    // 0x29697c: 0x104000a2  beqz        $v0, . + 4 + (0xA2 << 2)
label_296980:
    if (ctx->pc == 0x296980u) {
        ctx->pc = 0x296980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29697Cu;
        // 0x296980: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296984u;
        goto label_296984;
    }
    ctx->pc = 0x29697Cu;
    {
        const bool branch_taken_0x29697c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29697Cu;
        // 0x296980: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29697c) {
            ctx->pc = 0x296C08u;
            goto label_296c08;
        }
    }
    ctx->pc = 0x296984u;
label_296984:
    // 0x296984: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x296984u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_296988:
    // 0x296988: 0x2442a900  addiu       $v0, $v0, -0x5700
    ctx->pc = 0x296988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945024));
label_29698c:
    // 0x29698c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29698cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_296990:
    // 0x296990: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x296990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_296994:
    // 0x296994: 0x800008  jr          $a0
label_296998:
    if (ctx->pc == 0x296998u) {
        ctx->pc = 0x29699Cu;
        goto label_29699c;
    }
    ctx->pc = 0x296994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29699Cu: goto label_29699c;
            case 0x296A18u: goto label_296a18;
            case 0x296A64u: goto label_296a64;
            case 0x296A78u: goto label_296a78;
            case 0x296AB0u: goto label_296ab0;
            case 0x296B40u: goto label_296b40;
            case 0x296BD0u: goto label_296bd0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296994u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29699Cu;
label_29699c:
    // 0x29699c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29699cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2969a0:
    // 0x2969a0: 0x3c120060  lui         $s2, 0x60
    ctx->pc = 0x2969a0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
label_2969a4:
    // 0x2969a4: 0x3c100001  lui         $s0, 0x1
    ctx->pc = 0x2969a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
label_2969a8:
    // 0x2969a8: 0x3c130001  lui         $s3, 0x1
    ctx->pc = 0x2969a8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)1 << 16));
label_2969ac:
    // 0x2969ac: 0x0  nop
    ctx->pc = 0x2969acu;
    // NOP
label_2969b0:
    // 0x2969b0: 0x2644ee00  addiu       $a0, $s2, -0x1200
    ctx->pc = 0x2969b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962688));
label_2969b4:
    // 0x2969b4: 0xc0b2f16  jal         func_2CBC58
label_2969b8:
    if (ctx->pc == 0x2969B8u) {
        ctx->pc = 0x2969B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2969B4u;
        // 0x2969b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2969BCu;
        goto label_2969bc;
    }
    ctx->pc = 0x2969B4u;
    SET_GPR_U32(ctx, 31, 0x2969BCu);
    ctx->pc = 0x2969B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2969B4u;
    // 0x2969b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBC58u, 0x2969B4u, 0x2969BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2969BCu;
label_2969bc:
    // 0x2969bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2969bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2969c0:
    // 0x2969c0: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x2969c0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_2969c4:
    // 0x2969c4: 0x28a20034  slti        $v0, $a1, 0x34
    ctx->pc = 0x2969c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)52) ? 1 : 0);
label_2969c8:
    // 0x2969c8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_2969cc:
    if (ctx->pc == 0x2969CCu) {
        ctx->pc = 0x2969CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2969C8u;
        // 0x2969cc: 0x2138021  addu        $s0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2969D0u;
        goto label_2969d0;
    }
    ctx->pc = 0x2969C8u;
    {
        const bool branch_taken_0x2969c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2969CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2969C8u;
        // 0x2969cc: 0x2138021  addu        $s0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2969c8) {
            ctx->pc = 0x2969B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2969b0;
        }
    }
    ctx->pc = 0x2969D0u;
label_2969d0:
    // 0x2969d0: 0xc0a5cde  jal         func_297378
label_2969d4:
    if (ctx->pc == 0x2969D4u) {
        ctx->pc = 0x2969D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2969D0u;
        // 0x2969d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2969D8u;
        goto label_2969d8;
    }
    ctx->pc = 0x2969D0u;
    SET_GPR_U32(ctx, 31, 0x2969D8u);
    ctx->pc = 0x2969D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2969D0u;
    // 0x2969d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297378u, 0x2969D0u, 0x2969D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2969D8u;
label_2969d8:
    // 0x2969d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2969d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2969dc:
    // 0x2969dc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2969e0:
    if (ctx->pc == 0x2969E0u) {
        ctx->pc = 0x2969E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2969DCu;
        // 0x2969e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2969E4u;
        goto label_2969e4;
    }
    ctx->pc = 0x2969DCu;
    {
        const bool branch_taken_0x2969dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2969E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2969DCu;
        // 0x2969e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2969dc) {
            ctx->pc = 0x296A00u;
            goto label_296a00;
        }
    }
    ctx->pc = 0x2969E4u;
label_2969e4:
    // 0x2969e4: 0xc0a5ee0  jal         func_297B80
label_2969e8:
    if (ctx->pc == 0x2969E8u) {
        ctx->pc = 0x2969E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2969E4u;
        // 0x2969e8: 0x2650ee00  addiu       $s0, $s2, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2969ECu;
        goto label_2969ec;
    }
    ctx->pc = 0x2969E4u;
    SET_GPR_U32(ctx, 31, 0x2969ECu);
    ctx->pc = 0x2969E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2969E4u;
    // 0x2969e8: 0x2650ee00  addiu       $s0, $s2, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B80u, 0x2969E4u, 0x2969ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2969ECu;
label_2969ec:
    // 0x2969ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2969ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2969f0:
    // 0x2969f0: 0xc0b4640  jal         func_2D1900
label_2969f4:
    if (ctx->pc == 0x2969F4u) {
        ctx->pc = 0x2969F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2969F0u;
        // 0x2969f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2969F8u;
        goto label_2969f8;
    }
    ctx->pc = 0x2969F0u;
    SET_GPR_U32(ctx, 31, 0x2969F8u);
    ctx->pc = 0x2969F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2969F0u;
    // 0x2969f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1900u, 0x2969F0u, 0x2969F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2969F8u;
label_2969f8:
    // 0x2969f8: 0x10000005  b           . + 4 + (0x5 << 2)
label_2969fc:
    if (ctx->pc == 0x2969FCu) {
        ctx->pc = 0x2969FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2969F8u;
        // 0x2969fc: 0x92220005  lbu         $v0, 0x5($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296A00u;
        goto label_296a00;
    }
    ctx->pc = 0x2969F8u;
    {
        const bool branch_taken_0x2969f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2969FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2969F8u;
        // 0x2969fc: 0x92220005  lbu         $v0, 0x5($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2969f8) {
            ctx->pc = 0x296A10u;
            goto label_296a10;
        }
    }
    ctx->pc = 0x296A00u;
label_296a00:
    // 0x296a00: 0x40f809  jalr        $v0
label_296a04:
    if (ctx->pc == 0x296A04u) {
        ctx->pc = 0x296A08u;
        goto label_296a08;
    }
    ctx->pc = 0x296A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x296A08u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296A00u, 0x296A08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296A08u;
label_296a08:
    // 0x296a08: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x296a08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_296a0c:
    // 0x296a0c: 0x92220005  lbu         $v0, 0x5($s1)
    ctx->pc = 0x296a0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
label_296a10:
    // 0x296a10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x296a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_296a14:
    // 0x296a14: 0xa2220005  sb          $v0, 0x5($s1)
    ctx->pc = 0x296a14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 2));
label_296a18:
    // 0x296a18: 0xc0a5d0a  jal         func_297428
label_296a1c:
    if (ctx->pc == 0x296A1Cu) {
        ctx->pc = 0x296A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A18u;
        // 0x296a1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296A20u;
        goto label_296a20;
    }
    ctx->pc = 0x296A18u;
    SET_GPR_U32(ctx, 31, 0x296A20u);
    ctx->pc = 0x296A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296A18u;
    // 0x296a1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297428u, 0x296A18u, 0x296A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296A20u;
label_296a20:
    // 0x296a20: 0x1040007a  beqz        $v0, . + 4 + (0x7A << 2)
label_296a24:
    if (ctx->pc == 0x296A24u) {
        ctx->pc = 0x296A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A20u;
        // 0x296a24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296A28u;
        goto label_296a28;
    }
    ctx->pc = 0x296A20u;
    {
        const bool branch_taken_0x296a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A20u;
        // 0x296a24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296a20) {
            ctx->pc = 0x296C0Cu;
            goto label_296c0c;
        }
    }
    ctx->pc = 0x296A28u;
label_296a28:
    // 0x296a28: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x296a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_296a2c:
    // 0x296a2c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_296a30:
    if (ctx->pc == 0x296A30u) {
        ctx->pc = 0x296A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A2Cu;
        // 0x296a30: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296A34u;
        goto label_296a34;
    }
    ctx->pc = 0x296A2Cu;
    {
        const bool branch_taken_0x296a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A2Cu;
        // 0x296a30: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296a2c) {
            ctx->pc = 0x296A44u;
            goto label_296a44;
        }
    }
    ctx->pc = 0x296A34u;
label_296a34:
    // 0x296a34: 0xa2200007  sb          $zero, 0x7($s1)
    ctx->pc = 0x296a34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 0));
label_296a38:
    // 0x296a38: 0xa2220004  sb          $v0, 0x4($s1)
    ctx->pc = 0x296a38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
label_296a3c:
    // 0x296a3c: 0x1000005e  b           . + 4 + (0x5E << 2)
label_296a40:
    if (ctx->pc == 0x296A40u) {
        ctx->pc = 0x296A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A3Cu;
        // 0x296a40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296A44u;
        goto label_296a44;
    }
    ctx->pc = 0x296A3Cu;
    {
        const bool branch_taken_0x296a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A3Cu;
        // 0x296a40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296a3c) {
            ctx->pc = 0x296BB8u;
            goto label_296bb8;
        }
    }
    ctx->pc = 0x296A44u;
label_296a44:
    // 0x296a44: 0xc0a5d14  jal         func_297450
label_296a48:
    if (ctx->pc == 0x296A48u) {
        ctx->pc = 0x296A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A44u;
        // 0x296a48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296A4Cu;
        goto label_296a4c;
    }
    ctx->pc = 0x296A44u;
    SET_GPR_U32(ctx, 31, 0x296A4Cu);
    ctx->pc = 0x296A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296A44u;
    // 0x296a48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297450u, 0x296A44u, 0x296A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296A4Cu;
label_296a4c:
    // 0x296a4c: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x296a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_296a50:
    // 0x296a50: 0xc0a5da0  jal         func_297680
label_296a54:
    if (ctx->pc == 0x296A54u) {
        ctx->pc = 0x296A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A50u;
        // 0x296a54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296A58u;
        goto label_296a58;
    }
    ctx->pc = 0x296A50u;
    SET_GPR_U32(ctx, 31, 0x296A58u);
    ctx->pc = 0x296A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296A50u;
    // 0x296a54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297680u, 0x296A50u, 0x296A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296A58u;
label_296a58:
    // 0x296a58: 0x92220005  lbu         $v0, 0x5($s1)
    ctx->pc = 0x296a58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
label_296a5c:
    // 0x296a5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x296a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_296a60:
    // 0x296a60: 0xa2220005  sb          $v0, 0x5($s1)
    ctx->pc = 0x296a60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 2));
label_296a64:
    // 0x296a64: 0xc0a5d50  jal         func_297540
label_296a68:
    if (ctx->pc == 0x296A68u) {
        ctx->pc = 0x296A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A64u;
        // 0x296a68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296A6Cu;
        goto label_296a6c;
    }
    ctx->pc = 0x296A64u;
    SET_GPR_U32(ctx, 31, 0x296A6Cu);
    ctx->pc = 0x296A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296A64u;
    // 0x296a68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297540u, 0x296A64u, 0x296A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296A6Cu;
label_296a6c:
    // 0x296a6c: 0x92220005  lbu         $v0, 0x5($s1)
    ctx->pc = 0x296a6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
label_296a70:
    // 0x296a70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x296a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_296a74:
    // 0x296a74: 0xa2220005  sb          $v0, 0x5($s1)
    ctx->pc = 0x296a74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 2));
label_296a78:
    // 0x296a78: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x296a78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
label_296a7c:
    // 0x296a7c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x296a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_296a80:
    // 0x296a80: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_296a84:
    if (ctx->pc == 0x296A84u) {
        ctx->pc = 0x296A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A80u;
        // 0x296a84: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296A88u;
        goto label_296a88;
    }
    ctx->pc = 0x296A80u;
    {
        const bool branch_taken_0x296a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A80u;
        // 0x296a84: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296a80) {
            ctx->pc = 0x296AA4u;
            goto label_296aa4;
        }
    }
    ctx->pc = 0x296A88u;
label_296a88:
    // 0x296a88: 0x2450ee00  addiu       $s0, $v0, -0x1200
    ctx->pc = 0x296a88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
label_296a8c:
    // 0x296a8c: 0xc0b4676  jal         func_2D19D8
label_296a90:
    if (ctx->pc == 0x296A90u) {
        ctx->pc = 0x296A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A8Cu;
        // 0x296a90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296A94u;
        goto label_296a94;
    }
    ctx->pc = 0x296A8Cu;
    SET_GPR_U32(ctx, 31, 0x296A94u);
    ctx->pc = 0x296A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296A8Cu;
    // 0x296a90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D19D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D19D8u, 0x296A8Cu, 0x296A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296A94u;
label_296a94:
    // 0x296a94: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
label_296a98:
    if (ctx->pc == 0x296A98u) {
        ctx->pc = 0x296A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A94u;
        // 0x296a98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296A9Cu;
        goto label_296a9c;
    }
    ctx->pc = 0x296A94u;
    {
        const bool branch_taken_0x296a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A94u;
        // 0x296a98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296a94) {
            ctx->pc = 0x296C08u;
            goto label_296c08;
        }
    }
    ctx->pc = 0x296A9Cu;
label_296a9c:
    // 0x296a9c: 0xc0b468c  jal         func_2D1A30
label_296aa0:
    if (ctx->pc == 0x296AA0u) {
        ctx->pc = 0x296AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A9Cu;
        // 0x296aa0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296AA4u;
        goto label_296aa4;
    }
    ctx->pc = 0x296A9Cu;
    SET_GPR_U32(ctx, 31, 0x296AA4u);
    ctx->pc = 0x296AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296A9Cu;
    // 0x296aa0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1A30u, 0x296A9Cu, 0x296AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296AA4u;
label_296aa4:
    // 0x296aa4: 0x92220005  lbu         $v0, 0x5($s1)
    ctx->pc = 0x296aa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
label_296aa8:
    // 0x296aa8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x296aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_296aac:
    // 0x296aac: 0xa2220005  sb          $v0, 0x5($s1)
    ctx->pc = 0x296aacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 2));
label_296ab0:
    // 0x296ab0: 0xc0a5d74  jal         func_2975D0
label_296ab4:
    if (ctx->pc == 0x296AB4u) {
        ctx->pc = 0x296AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296AB0u;
        // 0x296ab4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296AB8u;
        goto label_296ab8;
    }
    ctx->pc = 0x296AB0u;
    SET_GPR_U32(ctx, 31, 0x296AB8u);
    ctx->pc = 0x296AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296AB0u;
    // 0x296ab4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2975D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2975D0u, 0x296AB0u, 0x296AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296AB8u;
label_296ab8:
    // 0x296ab8: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
label_296abc:
    if (ctx->pc == 0x296ABCu) {
        ctx->pc = 0x296ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296AB8u;
        // 0x296abc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296AC0u;
        goto label_296ac0;
    }
    ctx->pc = 0x296AB8u;
    {
        const bool branch_taken_0x296ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296AB8u;
        // 0x296abc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296ab8) {
            ctx->pc = 0x296C0Cu;
            goto label_296c0c;
        }
    }
    ctx->pc = 0x296AC0u;
label_296ac0:
    // 0x296ac0: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x296ac0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
label_296ac4:
    // 0x296ac4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x296ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_296ac8:
    // 0x296ac8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_296acc:
    if (ctx->pc == 0x296ACCu) {
        ctx->pc = 0x296ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296AC8u;
        // 0x296acc: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296AD0u;
        goto label_296ad0;
    }
    ctx->pc = 0x296AC8u;
    {
        const bool branch_taken_0x296ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296AC8u;
        // 0x296acc: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296ac8) {
            ctx->pc = 0x296AECu;
            goto label_296aec;
        }
    }
    ctx->pc = 0x296AD0u;
label_296ad0:
    // 0x296ad0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x296ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_296ad4:
    // 0x296ad4: 0xc0b46dc  jal         func_2D1B70
label_296ad8:
    if (ctx->pc == 0x296AD8u) {
        ctx->pc = 0x296AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296AD4u;
        // 0x296ad8: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296ADCu;
        goto label_296adc;
    }
    ctx->pc = 0x296AD4u;
    SET_GPR_U32(ctx, 31, 0x296ADCu);
    ctx->pc = 0x296AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296AD4u;
    // 0x296ad8: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1B70u, 0x296AD4u, 0x296ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296ADCu;
label_296adc:
    // 0x296adc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_296ae0:
    if (ctx->pc == 0x296AE0u) {
        ctx->pc = 0x296AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296ADCu;
        // 0x296ae0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296AE4u;
        goto label_296ae4;
    }
    ctx->pc = 0x296ADCu;
    {
        const bool branch_taken_0x296adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296ADCu;
        // 0x296ae0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296adc) {
            ctx->pc = 0x296B00u;
            goto label_296b00;
        }
    }
    ctx->pc = 0x296AE4u;
label_296ae4:
    // 0x296ae4: 0x1000004a  b           . + 4 + (0x4A << 2)
label_296ae8:
    if (ctx->pc == 0x296AE8u) {
        ctx->pc = 0x296AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296AE4u;
        // 0x296ae8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296AECu;
        goto label_296aec;
    }
    ctx->pc = 0x296AE4u;
    {
        const bool branch_taken_0x296ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296AE4u;
        // 0x296ae8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296ae4) {
            ctx->pc = 0x296C10u;
            goto label_296c10;
        }
    }
    ctx->pc = 0x296AECu;
label_296aec:
    // 0x296aec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x296aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_296af0:
    // 0x296af0: 0xa2200007  sb          $zero, 0x7($s1)
    ctx->pc = 0x296af0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 0));
label_296af4:
    // 0x296af4: 0xa2220004  sb          $v0, 0x4($s1)
    ctx->pc = 0x296af4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
label_296af8:
    // 0x296af8: 0x1000002f  b           . + 4 + (0x2F << 2)
label_296afc:
    if (ctx->pc == 0x296AFCu) {
        ctx->pc = 0x296AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296AF8u;
        // 0x296afc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296B00u;
        goto label_296b00;
    }
    ctx->pc = 0x296AF8u;
    {
        const bool branch_taken_0x296af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296AF8u;
        // 0x296afc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296af8) {
            ctx->pc = 0x296BB8u;
            goto label_296bb8;
        }
    }
    ctx->pc = 0x296B00u;
label_296b00:
    // 0x296b00: 0xc0a5dfa  jal         func_2977E8
label_296b04:
    if (ctx->pc == 0x296B04u) {
        ctx->pc = 0x296B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B00u;
        // 0x296b04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296B08u;
        goto label_296b08;
    }
    ctx->pc = 0x296B00u;
    SET_GPR_U32(ctx, 31, 0x296B08u);
    ctx->pc = 0x296B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296B00u;
    // 0x296b04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2977E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2977E8u, 0x296B00u, 0x296B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296B08u;
label_296b08:
    // 0x296b08: 0xc0a5e7c  jal         func_2979F0
label_296b0c:
    if (ctx->pc == 0x296B0Cu) {
        ctx->pc = 0x296B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B08u;
        // 0x296b0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296B10u;
        goto label_296b10;
    }
    ctx->pc = 0x296B08u;
    SET_GPR_U32(ctx, 31, 0x296B10u);
    ctx->pc = 0x296B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296B08u;
    // 0x296b0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2979F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2979F0u, 0x296B08u, 0x296B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296B10u;
label_296b10:
    // 0x296b10: 0x92220005  lbu         $v0, 0x5($s1)
    ctx->pc = 0x296b10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
label_296b14:
    // 0x296b14: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x296b14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_296b18:
    // 0x296b18: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x296b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_296b1c:
    // 0x296b1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x296b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_296b20:
    // 0x296b20: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x296b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_296b24:
    // 0x296b24: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_296b28:
    if (ctx->pc == 0x296B28u) {
        ctx->pc = 0x296B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B24u;
        // 0x296b28: 0xa2220005  sb          $v0, 0x5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296B2Cu;
        goto label_296b2c;
    }
    ctx->pc = 0x296B24u;
    {
        const bool branch_taken_0x296b24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x296B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B24u;
        // 0x296b28: 0xa2220005  sb          $v0, 0x5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296b24) {
            ctx->pc = 0x296B40u;
            goto label_296b40;
        }
    }
    ctx->pc = 0x296B2Cu;
label_296b2c:
    // 0x296b2c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x296b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_296b30:
    // 0x296b30: 0xa2200007  sb          $zero, 0x7($s1)
    ctx->pc = 0x296b30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 0));
label_296b34:
    // 0x296b34: 0xa2220004  sb          $v0, 0x4($s1)
    ctx->pc = 0x296b34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
label_296b38:
    // 0x296b38: 0x1000001f  b           . + 4 + (0x1F << 2)
label_296b3c:
    if (ctx->pc == 0x296B3Cu) {
        ctx->pc = 0x296B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B38u;
        // 0x296b3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296B40u;
        goto label_296b40;
    }
    ctx->pc = 0x296B38u;
    {
        const bool branch_taken_0x296b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B38u;
        // 0x296b3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296b38) {
            ctx->pc = 0x296BB8u;
            goto label_296bb8;
        }
    }
    ctx->pc = 0x296B40u;
label_296b40:
    // 0x296b40: 0xc0a5e9a  jal         func_297A68
label_296b44:
    if (ctx->pc == 0x296B44u) {
        ctx->pc = 0x296B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B40u;
        // 0x296b44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296B48u;
        goto label_296b48;
    }
    ctx->pc = 0x296B40u;
    SET_GPR_U32(ctx, 31, 0x296B48u);
    ctx->pc = 0x296B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296B40u;
    // 0x296b44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297A68u, 0x296B40u, 0x296B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296B48u;
label_296b48:
    // 0x296b48: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_296b4c:
    if (ctx->pc == 0x296B4Cu) {
        ctx->pc = 0x296B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B48u;
        // 0x296b4c: 0x3c040000  lui         $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296B4Cu) & 0xFFFFu)) << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296B50u;
        goto label_296b50;
    }
    ctx->pc = 0x296B48u;
    {
        const bool branch_taken_0x296b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B48u;
        // 0x296b4c: 0x3c040000  lui         $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296B4Cu) & 0xFFFFu)) << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296b48) {
            ctx->pc = 0x296C08u;
            goto label_296c08;
        }
    }
    ctx->pc = 0x296B50u;
label_296b50:
    // 0x296b50: 0xc000000  jal         func_000000
label_296b54:
    if (ctx->pc == 0x296B54u) {
        ctx->pc = 0x296B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B50u;
        // 0x296b54: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296B54u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296B58u;
        goto label_296b58;
    }
    ctx->pc = 0x296B50u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296B50u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296B58u);
        ctx->pc = 0x296B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B50u;
        // 0x296b54: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296B54u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296B50u, 0x296B58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296B58u;
label_296b58:
    // 0x296b58: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_296b5c:
    if (ctx->pc == 0x296B5Cu) {
        ctx->pc = 0x296B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B58u;
        // 0x296b5c: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296B60u;
        goto label_296b60;
    }
    ctx->pc = 0x296B58u;
    {
        const bool branch_taken_0x296b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x296b58) {
            ctx->pc = 0x296B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296B58u;
            // 0x296b5c: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296B88u;
            goto label_296b88;
        }
    }
    ctx->pc = 0x296B60u;
label_296b60:
    // 0x296b60: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x296b60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_296b64:
    // 0x296b64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x296b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_296b68:
    // 0x296b68: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x296b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_296b6c:
    // 0x296b6c: 0xc0b4786  jal         func_2D1E18
label_296b70:
    if (ctx->pc == 0x296B70u) {
        ctx->pc = 0x296B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B6Cu;
        // 0x296b70: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296B74u;
        goto label_296b74;
    }
    ctx->pc = 0x296B6Cu;
    SET_GPR_U32(ctx, 31, 0x296B74u);
    ctx->pc = 0x296B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296B6Cu;
    // 0x296b70: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1E18u, 0x296B6Cu, 0x296B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296B74u;
label_296b74:
    // 0x296b74: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x296b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_296b78:
    // 0x296b78: 0xa2200007  sb          $zero, 0x7($s1)
    ctx->pc = 0x296b78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 0));
label_296b7c:
    // 0x296b7c: 0xa2220004  sb          $v0, 0x4($s1)
    ctx->pc = 0x296b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
label_296b80:
    // 0x296b80: 0x1000000d  b           . + 4 + (0xD << 2)
label_296b84:
    if (ctx->pc == 0x296B84u) {
        ctx->pc = 0x296B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B80u;
        // 0x296b84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296B88u;
        goto label_296b88;
    }
    ctx->pc = 0x296B80u;
    {
        const bool branch_taken_0x296b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B80u;
        // 0x296b84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296b80) {
            ctx->pc = 0x296BB8u;
            goto label_296bb8;
        }
    }
    ctx->pc = 0x296B88u;
label_296b88:
    // 0x296b88: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x296b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_296b8c:
    // 0x296b8c: 0x2197a  dsrl        $v1, $v0, 5
    ctx->pc = 0x296b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 5);
label_296b90:
    // 0x296b90: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x296b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_296b94:
    // 0x296b94: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_296b98:
    if (ctx->pc == 0x296B98u) {
        ctx->pc = 0x296B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B94u;
        // 0x296b98: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296B9Cu;
        goto label_296b9c;
    }
    ctx->pc = 0x296B94u;
    {
        const bool branch_taken_0x296b94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x296B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B94u;
        // 0x296b98: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296b94) {
            ctx->pc = 0x296BC4u;
            goto label_296bc4;
        }
    }
    ctx->pc = 0x296B9Cu;
label_296b9c:
    // 0x296b9c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x296b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_296ba0:
    // 0x296ba0: 0xc0ad97c  jal         func_2B65F0
label_296ba4:
    if (ctx->pc == 0x296BA4u) {
        ctx->pc = 0x296BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296BA0u;
        // 0x296ba4: 0x8c442558  lw          $a0, 0x2558($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296BA8u;
        goto label_296ba8;
    }
    ctx->pc = 0x296BA0u;
    SET_GPR_U32(ctx, 31, 0x296BA8u);
    ctx->pc = 0x296BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296BA0u;
    // 0x296ba4: 0x8c442558  lw          $a0, 0x2558($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9560)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B65F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B65F0u, 0x296BA0u, 0x296BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296BA8u;
label_296ba8:
    // 0x296ba8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x296ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_296bac:
    // 0x296bac: 0xa2200007  sb          $zero, 0x7($s1)
    ctx->pc = 0x296bacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 0));
label_296bb0:
    // 0x296bb0: 0xa2220004  sb          $v0, 0x4($s1)
    ctx->pc = 0x296bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
label_296bb4:
    // 0x296bb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x296bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_296bb8:
    // 0x296bb8: 0xa2200005  sb          $zero, 0x5($s1)
    ctx->pc = 0x296bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 0));
label_296bbc:
    // 0x296bbc: 0x10000013  b           . + 4 + (0x13 << 2)
label_296bc0:
    if (ctx->pc == 0x296BC0u) {
        ctx->pc = 0x296BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296BBCu;
        // 0x296bc0: 0xa2200006  sb          $zero, 0x6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296BC4u;
        goto label_296bc4;
    }
    ctx->pc = 0x296BBCu;
    {
        const bool branch_taken_0x296bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296BBCu;
        // 0x296bc0: 0xa2200006  sb          $zero, 0x6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296bbc) {
            ctx->pc = 0x296C0Cu;
            goto label_296c0c;
        }
    }
    ctx->pc = 0x296BC4u;
label_296bc4:
    // 0x296bc4: 0x92220005  lbu         $v0, 0x5($s1)
    ctx->pc = 0x296bc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
label_296bc8:
    // 0x296bc8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x296bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_296bcc:
    // 0x296bcc: 0xa2220005  sb          $v0, 0x5($s1)
    ctx->pc = 0x296bccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 2));
label_296bd0:
    // 0x296bd0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x296bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_296bd4:
    // 0x296bd4: 0x211ba  dsrl        $v0, $v0, 6
    ctx->pc = 0x296bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
label_296bd8:
    // 0x296bd8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x296bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_296bdc:
    // 0x296bdc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_296be0:
    if (ctx->pc == 0x296BE0u) {
        ctx->pc = 0x296BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296BDCu;
        // 0x296be0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296BE4u;
        goto label_296be4;
    }
    ctx->pc = 0x296BDCu;
    {
        const bool branch_taken_0x296bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296BDCu;
        // 0x296be0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296bdc) {
            ctx->pc = 0x296C08u;
            goto label_296c08;
        }
    }
    ctx->pc = 0x296BE4u;
label_296be4:
    // 0x296be4: 0xa2200007  sb          $zero, 0x7($s1)
    ctx->pc = 0x296be4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 0));
label_296be8:
    // 0x296be8: 0xa2220004  sb          $v0, 0x4($s1)
    ctx->pc = 0x296be8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
label_296bec:
    // 0x296bec: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x296becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_296bf0:
    // 0x296bf0: 0xa2200005  sb          $zero, 0x5($s1)
    ctx->pc = 0x296bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 0));
label_296bf4:
    // 0x296bf4: 0xa2200006  sb          $zero, 0x6($s1)
    ctx->pc = 0x296bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 0));
label_296bf8:
    // 0x296bf8: 0xc0ad97c  jal         func_2B65F0
label_296bfc:
    if (ctx->pc == 0x296BFCu) {
        ctx->pc = 0x296BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296BF8u;
        // 0x296bfc: 0x8c642558  lw          $a0, 0x2558($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296C00u;
        goto label_296c00;
    }
    ctx->pc = 0x296BF8u;
    SET_GPR_U32(ctx, 31, 0x296C00u);
    ctx->pc = 0x296BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296BF8u;
    // 0x296bfc: 0x8c642558  lw          $a0, 0x2558($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9560)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B65F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B65F0u, 0x296BF8u, 0x296C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296C00u;
label_296c00:
    // 0x296c00: 0x10000002  b           . + 4 + (0x2 << 2)
label_296c04:
    if (ctx->pc == 0x296C04u) {
        ctx->pc = 0x296C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C00u;
        // 0x296c04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296C08u;
        goto label_296c08;
    }
    ctx->pc = 0x296C00u;
    {
        const bool branch_taken_0x296c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C00u;
        // 0x296c04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296c00) {
            ctx->pc = 0x296C0Cu;
            goto label_296c0c;
        }
    }
    ctx->pc = 0x296C08u;
label_296c08:
    // 0x296c08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x296c08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_296c0c:
    // 0x296c0c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x296c0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_296c10:
    // 0x296c10: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x296c10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_296c14:
    // 0x296c14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x296c14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_296c18:
    // 0x296c18: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x296c18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_296c1c:
    // 0x296c1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_296c20:
    // 0x296c20: 0x3e00008  jr          $ra
label_296c24:
    if (ctx->pc == 0x296C24u) {
        ctx->pc = 0x296C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C20u;
        // 0x296c24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296C28u;
        goto label_fallthrough_0x296c20;
    }
    ctx->pc = 0x296C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C20u;
        // 0x296c24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x296c20:
    ctx->pc = 0x296C28u;
}
