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

// Function: func_003298F0
// Address: 0x3298f0 - 0x329ac8
void func_003298F0_0x3298f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003298F0_0x3298f0");
#endif

    switch (ctx->pc) {
        case 0x3298f0u: goto label_3298f0;
        case 0x3298f4u: goto label_3298f4;
        case 0x3298f8u: goto label_3298f8;
        case 0x3298fcu: goto label_3298fc;
        case 0x329900u: goto label_329900;
        case 0x329904u: goto label_329904;
        case 0x329908u: goto label_329908;
        case 0x32990cu: goto label_32990c;
        case 0x329910u: goto label_329910;
        case 0x329914u: goto label_329914;
        case 0x329918u: goto label_329918;
        case 0x32991cu: goto label_32991c;
        case 0x329920u: goto label_329920;
        case 0x329924u: goto label_329924;
        case 0x329928u: goto label_329928;
        case 0x32992cu: goto label_32992c;
        case 0x329930u: goto label_329930;
        case 0x329934u: goto label_329934;
        case 0x329938u: goto label_329938;
        case 0x32993cu: goto label_32993c;
        case 0x329940u: goto label_329940;
        case 0x329944u: goto label_329944;
        case 0x329948u: goto label_329948;
        case 0x32994cu: goto label_32994c;
        case 0x329950u: goto label_329950;
        case 0x329954u: goto label_329954;
        case 0x329958u: goto label_329958;
        case 0x32995cu: goto label_32995c;
        case 0x329960u: goto label_329960;
        case 0x329964u: goto label_329964;
        case 0x329968u: goto label_329968;
        case 0x32996cu: goto label_32996c;
        case 0x329970u: goto label_329970;
        case 0x329974u: goto label_329974;
        case 0x329978u: goto label_329978;
        case 0x32997cu: goto label_32997c;
        case 0x329980u: goto label_329980;
        case 0x329984u: goto label_329984;
        case 0x329988u: goto label_329988;
        case 0x32998cu: goto label_32998c;
        case 0x329990u: goto label_329990;
        case 0x329994u: goto label_329994;
        case 0x329998u: goto label_329998;
        case 0x32999cu: goto label_32999c;
        case 0x3299a0u: goto label_3299a0;
        case 0x3299a4u: goto label_3299a4;
        case 0x3299a8u: goto label_3299a8;
        case 0x3299acu: goto label_3299ac;
        case 0x3299b0u: goto label_3299b0;
        case 0x3299b4u: goto label_3299b4;
        case 0x3299b8u: goto label_3299b8;
        case 0x3299bcu: goto label_3299bc;
        case 0x3299c0u: goto label_3299c0;
        case 0x3299c4u: goto label_3299c4;
        case 0x3299c8u: goto label_3299c8;
        case 0x3299ccu: goto label_3299cc;
        case 0x3299d0u: goto label_3299d0;
        case 0x3299d4u: goto label_3299d4;
        case 0x3299d8u: goto label_3299d8;
        case 0x3299dcu: goto label_3299dc;
        case 0x3299e0u: goto label_3299e0;
        case 0x3299e4u: goto label_3299e4;
        case 0x3299e8u: goto label_3299e8;
        case 0x3299ecu: goto label_3299ec;
        case 0x3299f0u: goto label_3299f0;
        case 0x3299f4u: goto label_3299f4;
        case 0x3299f8u: goto label_3299f8;
        case 0x3299fcu: goto label_3299fc;
        case 0x329a00u: goto label_329a00;
        case 0x329a04u: goto label_329a04;
        case 0x329a08u: goto label_329a08;
        case 0x329a0cu: goto label_329a0c;
        case 0x329a10u: goto label_329a10;
        case 0x329a14u: goto label_329a14;
        case 0x329a18u: goto label_329a18;
        case 0x329a1cu: goto label_329a1c;
        case 0x329a20u: goto label_329a20;
        case 0x329a24u: goto label_329a24;
        case 0x329a28u: goto label_329a28;
        case 0x329a2cu: goto label_329a2c;
        case 0x329a30u: goto label_329a30;
        case 0x329a34u: goto label_329a34;
        case 0x329a38u: goto label_329a38;
        case 0x329a3cu: goto label_329a3c;
        case 0x329a40u: goto label_329a40;
        case 0x329a44u: goto label_329a44;
        case 0x329a48u: goto label_329a48;
        case 0x329a4cu: goto label_329a4c;
        case 0x329a50u: goto label_329a50;
        case 0x329a54u: goto label_329a54;
        case 0x329a58u: goto label_329a58;
        case 0x329a5cu: goto label_329a5c;
        case 0x329a60u: goto label_329a60;
        case 0x329a64u: goto label_329a64;
        case 0x329a68u: goto label_329a68;
        case 0x329a6cu: goto label_329a6c;
        case 0x329a70u: goto label_329a70;
        case 0x329a74u: goto label_329a74;
        case 0x329a78u: goto label_329a78;
        case 0x329a7cu: goto label_329a7c;
        case 0x329a80u: goto label_329a80;
        case 0x329a84u: goto label_329a84;
        case 0x329a88u: goto label_329a88;
        case 0x329a8cu: goto label_329a8c;
        case 0x329a90u: goto label_329a90;
        case 0x329a94u: goto label_329a94;
        case 0x329a98u: goto label_329a98;
        case 0x329a9cu: goto label_329a9c;
        case 0x329aa0u: goto label_329aa0;
        case 0x329aa4u: goto label_329aa4;
        case 0x329aa8u: goto label_329aa8;
        case 0x329aacu: goto label_329aac;
        case 0x329ab0u: goto label_329ab0;
        case 0x329ab4u: goto label_329ab4;
        case 0x329ab8u: goto label_329ab8;
        case 0x329abcu: goto label_329abc;
        case 0x329ac0u: goto label_329ac0;
        case 0x329ac4u: goto label_329ac4;
        default: break;
    }

    ctx->pc = 0x3298f0u;

label_3298f0:
    // 0x3298f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3298f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3298f4:
    // 0x3298f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3298f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3298f8:
    // 0x3298f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3298f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3298fc:
    // 0x3298fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3298fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_329900:
    // 0x329900: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x329900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_329904:
    // 0x329904: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x329904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_329908:
    // 0x329908: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
label_32990c:
    if (ctx->pc == 0x32990Cu) {
        ctx->pc = 0x32990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329908u;
        // 0x32990c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329910u;
        goto label_329910;
    }
    ctx->pc = 0x329908u;
    {
        const bool branch_taken_0x329908 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x32990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329908u;
        // 0x32990c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329908) {
            ctx->pc = 0x329938u;
            goto label_329938;
        }
    }
    ctx->pc = 0x329910u;
label_329910:
    // 0x329910: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x329910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_329914:
    // 0x329914: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x329914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_329918:
    // 0x329918: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x329918u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_32991c:
    // 0x32991c: 0x24842010  addiu       $a0, $a0, 0x2010
    ctx->pc = 0x32991cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8208));
label_329920:
    // 0x329920: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x329920u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_329924:
    // 0x329924: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x329924u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_329928:
    // 0x329928: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x329928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32992c:
    // 0x32992c: 0x80cfc4c  j           func_33F130
label_329930:
    if (ctx->pc == 0x329930u) {
        ctx->pc = 0x329930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32992Cu;
        // 0x329930: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329934u;
        goto label_329934;
    }
    ctx->pc = 0x32992Cu;
    ctx->pc = 0x329930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32992Cu;
    // 0x329930: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x32992Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x329934u;
label_329934:
    // 0x329934: 0x0  nop
    ctx->pc = 0x329934u;
    // NOP
label_329938:
    // 0x329938: 0xc0ca612  jal         func_329848
label_32993c:
    if (ctx->pc == 0x32993Cu) {
        ctx->pc = 0x329940u;
        goto label_329940;
    }
    ctx->pc = 0x329938u;
    SET_GPR_U32(ctx, 31, 0x329940u);
    ctx->pc = 0x329848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329848u, 0x329938u, 0x329940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329940u;
label_329940:
    // 0x329940: 0xc0ca61c  jal         func_329870
label_329944:
    if (ctx->pc == 0x329944u) {
        ctx->pc = 0x329944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329940u;
        // 0x329944: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329948u;
        goto label_329948;
    }
    ctx->pc = 0x329940u;
    SET_GPR_U32(ctx, 31, 0x329948u);
    ctx->pc = 0x329944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329940u;
    // 0x329944: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329870u, 0x329940u, 0x329948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329948u;
label_329948:
    // 0x329948: 0xc0ca626  jal         func_329898
label_32994c:
    if (ctx->pc == 0x32994Cu) {
        ctx->pc = 0x32994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329948u;
        // 0x32994c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329950u;
        goto label_329950;
    }
    ctx->pc = 0x329948u;
    SET_GPR_U32(ctx, 31, 0x329950u);
    ctx->pc = 0x32994Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329948u;
    // 0x32994c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329898u, 0x329948u, 0x329950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329950u;
label_329950:
    // 0x329950: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x329950u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_329954:
    // 0x329954: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x329954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_329958:
    // 0x329958: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_32995c:
    if (ctx->pc == 0x32995Cu) {
        ctx->pc = 0x32995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329958u;
        // 0x32995c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329960u;
        goto label_329960;
    }
    ctx->pc = 0x329958u;
    {
        const bool branch_taken_0x329958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x329958) {
            ctx->pc = 0x32995Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329958u;
            // 0x32995c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32996Cu;
            goto label_32996c;
        }
    }
    ctx->pc = 0x329960u;
label_329960:
    // 0x329960: 0xc0ca7b6  jal         func_329ED8
label_329964:
    if (ctx->pc == 0x329964u) {
        ctx->pc = 0x329964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329960u;
        // 0x329964: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329968u;
        goto label_329968;
    }
    ctx->pc = 0x329960u;
    SET_GPR_U32(ctx, 31, 0x329968u);
    ctx->pc = 0x329964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329960u;
    // 0x329964: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329ED8u, 0x329960u, 0x329968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329968u;
label_329968:
    // 0x329968: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x329968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_32996c:
    // 0x32996c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_329970:
    if (ctx->pc == 0x329970u) {
        ctx->pc = 0x329970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32996Cu;
        // 0x329970: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329974u;
        goto label_329974;
    }
    ctx->pc = 0x32996Cu;
    {
        const bool branch_taken_0x32996c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32996c) {
            ctx->pc = 0x329970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32996Cu;
            // 0x329970: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329980u;
            goto label_329980;
        }
    }
    ctx->pc = 0x329974u;
label_329974:
    // 0x329974: 0xc0c98b6  jal         func_3262D8
label_329978:
    if (ctx->pc == 0x329978u) {
        ctx->pc = 0x329978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329974u;
        // 0x329978: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32997Cu;
        goto label_32997c;
    }
    ctx->pc = 0x329974u;
    SET_GPR_U32(ctx, 31, 0x32997Cu);
    ctx->pc = 0x329978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329974u;
    // 0x329978: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3262D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3262D8u, 0x329974u, 0x32997Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32997Cu;
label_32997c:
    // 0x32997c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x32997cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_329980:
    // 0x329980: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_329984:
    if (ctx->pc == 0x329984u) {
        ctx->pc = 0x329984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329980u;
        // 0x329984: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329988u;
        goto label_329988;
    }
    ctx->pc = 0x329980u;
    {
        const bool branch_taken_0x329980 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x329980) {
            ctx->pc = 0x329984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329980u;
            // 0x329984: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329994u;
            goto label_329994;
        }
    }
    ctx->pc = 0x329988u;
label_329988:
    // 0x329988: 0xc0c99c6  jal         func_326718
label_32998c:
    if (ctx->pc == 0x32998Cu) {
        ctx->pc = 0x32998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329988u;
        // 0x32998c: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329990u;
        goto label_329990;
    }
    ctx->pc = 0x329988u;
    SET_GPR_U32(ctx, 31, 0x329990u);
    ctx->pc = 0x32998Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329988u;
    // 0x32998c: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326718u, 0x329988u, 0x329990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329990u;
label_329990:
    // 0x329990: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x329990u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_329994:
    // 0x329994: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_329998:
    if (ctx->pc == 0x329998u) {
        ctx->pc = 0x329998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329994u;
        // 0x329998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32999Cu;
        goto label_32999c;
    }
    ctx->pc = 0x329994u;
    {
        const bool branch_taken_0x329994 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x329998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329994u;
        // 0x329998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329994) {
            ctx->pc = 0x3299B4u;
            goto label_3299b4;
        }
    }
    ctx->pc = 0x32999Cu;
label_32999c:
    // 0x32999c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x32999cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_3299a0:
    // 0x3299a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3299a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3299a4:
    // 0x3299a4: 0xc0ca0fa  jal         func_3283E8
label_3299a8:
    if (ctx->pc == 0x3299A8u) {
        ctx->pc = 0x3299A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3299A4u;
        // 0x3299a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3299ACu;
        goto label_3299ac;
    }
    ctx->pc = 0x3299A4u;
    SET_GPR_U32(ctx, 31, 0x3299ACu);
    ctx->pc = 0x3299A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3299A4u;
    // 0x3299a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3283E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3283E8u, 0x3299A4u, 0x3299ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3299ACu;
label_3299ac:
    // 0x3299ac: 0xc0c9f64  jal         func_327D90
label_3299b0:
    if (ctx->pc == 0x3299B0u) {
        ctx->pc = 0x3299B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3299ACu;
        // 0x3299b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3299B4u;
        goto label_3299b4;
    }
    ctx->pc = 0x3299ACu;
    SET_GPR_U32(ctx, 31, 0x3299B4u);
    ctx->pc = 0x3299B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3299ACu;
    // 0x3299b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327D90u, 0x3299ACu, 0x3299B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3299B4u;
label_3299b4:
    // 0x3299b4: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x3299b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_3299b8:
    // 0x3299b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3299bc:
    if (ctx->pc == 0x3299BCu) {
        ctx->pc = 0x3299C0u;
        goto label_3299c0;
    }
    ctx->pc = 0x3299B8u;
    {
        const bool branch_taken_0x3299b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3299b8) {
            ctx->pc = 0x3299C8u;
            goto label_3299c8;
        }
    }
    ctx->pc = 0x3299C0u;
label_3299c0:
    // 0x3299c0: 0xc0cd540  jal         func_335500
label_3299c4:
    if (ctx->pc == 0x3299C4u) {
        ctx->pc = 0x3299C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3299C0u;
        // 0x3299c4: 0xae200094  sw          $zero, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3299C8u;
        goto label_3299c8;
    }
    ctx->pc = 0x3299C0u;
    SET_GPR_U32(ctx, 31, 0x3299C8u);
    ctx->pc = 0x3299C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3299C0u;
    // 0x3299c4: 0xae200094  sw          $zero, 0x94($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335500u, 0x3299C0u, 0x3299C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3299C8u;
label_3299c8:
    // 0x3299c8: 0xc0cf99e  jal         func_33E678
label_3299cc:
    if (ctx->pc == 0x3299CCu) {
        ctx->pc = 0x3299D0u;
        goto label_3299d0;
    }
    ctx->pc = 0x3299C8u;
    SET_GPR_U32(ctx, 31, 0x3299D0u);
    ctx->pc = 0x33E678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E678u, 0x3299C8u, 0x3299D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3299D0u;
label_3299d0:
    // 0x3299d0: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x3299d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3299d4:
    // 0x3299d4: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_3299d8:
    if (ctx->pc == 0x3299D8u) {
        ctx->pc = 0x3299D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3299D4u;
        // 0x3299d8: 0x82220003  lb          $v0, 0x3($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3299DCu;
        goto label_3299dc;
    }
    ctx->pc = 0x3299D4u;
    {
        const bool branch_taken_0x3299d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3299d4) {
            ctx->pc = 0x3299D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3299D4u;
            // 0x3299d8: 0x82220003  lb          $v0, 0x3($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3299F4u;
            goto label_3299f4;
        }
    }
    ctx->pc = 0x3299DCu;
label_3299dc:
    // 0x3299dc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3299dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3299e0:
    // 0x3299e0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x3299e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_3299e4:
    // 0x3299e4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3299e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3299e8:
    // 0x3299e8: 0x40f809  jalr        $v0
label_3299ec:
    if (ctx->pc == 0x3299ECu) {
        ctx->pc = 0x3299F0u;
        goto label_3299f0;
    }
    ctx->pc = 0x3299E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3299F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3299E8u, 0x3299F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3299F0u;
label_3299f0:
    // 0x3299f0: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x3299f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_3299f4:
    // 0x3299f4: 0x18400022  blez        $v0, . + 4 + (0x22 << 2)
label_3299f8:
    if (ctx->pc == 0x3299F8u) {
        ctx->pc = 0x3299F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3299F4u;
        // 0x3299f8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3299FCu;
        goto label_3299fc;
    }
    ctx->pc = 0x3299F4u;
    {
        const bool branch_taken_0x3299f4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x3299F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3299F4u;
        // 0x3299f8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3299f4) {
            ctx->pc = 0x329A80u;
            goto label_329a80;
        }
    }
    ctx->pc = 0x3299FCu;
label_3299fc:
    // 0x3299fc: 0x26320080  addiu       $s2, $s1, 0x80
    ctx->pc = 0x3299fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_329a00:
    // 0x329a00: 0x26300078  addiu       $s0, $s1, 0x78
    ctx->pc = 0x329a00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_329a04:
    // 0x329a04: 0x0  nop
    ctx->pc = 0x329a04u;
    // NOP
label_329a08:
    // 0x329a08: 0x8e03ffa0  lw          $v1, -0x60($s0)
    ctx->pc = 0x329a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967200)));
label_329a0c:
    // 0x329a0c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_329a10:
    if (ctx->pc == 0x329A10u) {
        ctx->pc = 0x329A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A0Cu;
        // 0x329a10: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329A14u;
        goto label_329a14;
    }
    ctx->pc = 0x329A0Cu;
    {
        const bool branch_taken_0x329a0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x329A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A0Cu;
        // 0x329a10: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329a0c) {
            ctx->pc = 0x329A28u;
            goto label_329a28;
        }
    }
    ctx->pc = 0x329A14u;
label_329a14:
    // 0x329a14: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x329a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_329a18:
    // 0x329a18: 0xae00ffa0  sw          $zero, -0x60($s0)
    ctx->pc = 0x329a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967200), GPR_U32(ctx, 0));
label_329a1c:
    // 0x329a1c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x329a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_329a20:
    // 0x329a20: 0x40f809  jalr        $v0
label_329a24:
    if (ctx->pc == 0x329A24u) {
        ctx->pc = 0x329A28u;
        goto label_329a28;
    }
    ctx->pc = 0x329A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x329A28u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329A20u, 0x329A28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x329A28u;
label_329a28:
    // 0x329a28: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x329a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_329a2c:
    // 0x329a2c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_329a30:
    if (ctx->pc == 0x329A30u) {
        ctx->pc = 0x329A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A2Cu;
        // 0x329a30: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329A34u;
        goto label_329a34;
    }
    ctx->pc = 0x329A2Cu;
    {
        const bool branch_taken_0x329a2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x329a2c) {
            ctx->pc = 0x329A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329A2Cu;
            // 0x329a30: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329A4Cu;
            goto label_329a4c;
        }
    }
    ctx->pc = 0x329A34u;
label_329a34:
    // 0x329a34: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x329a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_329a38:
    // 0x329a38: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x329a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_329a3c:
    // 0x329a3c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x329a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_329a40:
    // 0x329a40: 0x40f809  jalr        $v0
label_329a44:
    if (ctx->pc == 0x329A44u) {
        ctx->pc = 0x329A48u;
        goto label_329a48;
    }
    ctx->pc = 0x329A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x329A48u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329A40u, 0x329A48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x329A48u;
label_329a48:
    // 0x329a48: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x329a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_329a4c:
    // 0x329a4c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_329a50:
    if (ctx->pc == 0x329A50u) {
        ctx->pc = 0x329A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A4Cu;
        // 0x329a50: 0x82220003  lb          $v0, 0x3($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329A54u;
        goto label_329a54;
    }
    ctx->pc = 0x329A4Cu;
    {
        const bool branch_taken_0x329a4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x329a4c) {
            ctx->pc = 0x329A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329A4Cu;
            // 0x329a50: 0x82220003  lb          $v0, 0x3($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329A6Cu;
            goto label_329a6c;
        }
    }
    ctx->pc = 0x329A54u;
label_329a54:
    // 0x329a54: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x329a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_329a58:
    // 0x329a58: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x329a58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_329a5c:
    // 0x329a5c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x329a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_329a60:
    // 0x329a60: 0x40f809  jalr        $v0
label_329a64:
    if (ctx->pc == 0x329A64u) {
        ctx->pc = 0x329A68u;
        goto label_329a68;
    }
    ctx->pc = 0x329A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x329A68u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329A60u, 0x329A68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x329A68u;
label_329a68:
    // 0x329a68: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x329a68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_329a6c:
    // 0x329a6c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x329a6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_329a70:
    // 0x329a70: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x329a70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_329a74:
    // 0x329a74: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x329a74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_329a78:
    // 0x329a78: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_329a7c:
    if (ctx->pc == 0x329A7Cu) {
        ctx->pc = 0x329A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A78u;
        // 0x329a7c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329A80u;
        goto label_329a80;
    }
    ctx->pc = 0x329A78u;
    {
        const bool branch_taken_0x329a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x329A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A78u;
        // 0x329a7c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329a78) {
            ctx->pc = 0x329A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329a08;
        }
    }
    ctx->pc = 0x329A80u;
label_329a80:
    // 0x329a80: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x329a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_329a84:
    // 0x329a84: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_329a88:
    if (ctx->pc == 0x329A88u) {
        ctx->pc = 0x329A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A84u;
        // 0x329a88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329A8Cu;
        goto label_329a8c;
    }
    ctx->pc = 0x329A84u;
    {
        const bool branch_taken_0x329a84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x329a84) {
            ctx->pc = 0x329A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329A84u;
            // 0x329a88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329A98u;
            goto label_329a98;
        }
    }
    ctx->pc = 0x329A8Cu;
label_329a8c:
    // 0x329a8c: 0xc0cf00e  jal         func_33C038
label_329a90:
    if (ctx->pc == 0x329A90u) {
        ctx->pc = 0x329A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A8Cu;
        // 0x329a90: 0xae200074  sw          $zero, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329A94u;
        goto label_329a94;
    }
    ctx->pc = 0x329A8Cu;
    SET_GPR_U32(ctx, 31, 0x329A94u);
    ctx->pc = 0x329A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329A8Cu;
    // 0x329a90: 0xae200074  sw          $zero, 0x74($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C038u, 0x329A8Cu, 0x329A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329A94u;
label_329a94:
    // 0x329a94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x329a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_329a98:
    // 0x329a98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x329a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_329a9c:
    // 0x329a9c: 0xc0e94bc  jal         func_3A52F0
label_329aa0:
    if (ctx->pc == 0x329AA0u) {
        ctx->pc = 0x329AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A9Cu;
        // 0x329aa0: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329AA4u;
        goto label_329aa4;
    }
    ctx->pc = 0x329A9Cu;
    SET_GPR_U32(ctx, 31, 0x329AA4u);
    ctx->pc = 0x329AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329A9Cu;
    // 0x329aa0: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x329A9Cu, 0x329AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329AA4u;
label_329aa4:
    // 0x329aa4: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x329aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_329aa8:
    // 0x329aa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x329aa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_329aac:
    // 0x329aac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x329aacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_329ab0:
    // 0x329ab0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x329ab0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_329ab4:
    // 0x329ab4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x329ab4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_329ab8:
    // 0x329ab8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x329ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_329abc:
    // 0x329abc: 0x80cf9a4  j           func_33E690
label_329ac0:
    if (ctx->pc == 0x329AC0u) {
        ctx->pc = 0x329AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329ABCu;
        // 0x329ac0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329AC4u;
        goto label_329ac4;
    }
    ctx->pc = 0x329ABCu;
    ctx->pc = 0x329AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329ABCu;
    // 0x329ac0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E690u, 0x329ABCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x329AC4u;
label_329ac4:
    // 0x329ac4: 0x0  nop
    ctx->pc = 0x329ac4u;
    // NOP
    ctx->pc = 0x329ac8u;
}
