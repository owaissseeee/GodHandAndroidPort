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

// Function: func_003398F8
// Address: 0x3398f8 - 0x339a98
void func_003398F8_0x3398f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003398F8_0x3398f8");
#endif

    switch (ctx->pc) {
        case 0x3398f8u: goto label_3398f8;
        case 0x3398fcu: goto label_3398fc;
        case 0x339900u: goto label_339900;
        case 0x339904u: goto label_339904;
        case 0x339908u: goto label_339908;
        case 0x33990cu: goto label_33990c;
        case 0x339910u: goto label_339910;
        case 0x339914u: goto label_339914;
        case 0x339918u: goto label_339918;
        case 0x33991cu: goto label_33991c;
        case 0x339920u: goto label_339920;
        case 0x339924u: goto label_339924;
        case 0x339928u: goto label_339928;
        case 0x33992cu: goto label_33992c;
        case 0x339930u: goto label_339930;
        case 0x339934u: goto label_339934;
        case 0x339938u: goto label_339938;
        case 0x33993cu: goto label_33993c;
        case 0x339940u: goto label_339940;
        case 0x339944u: goto label_339944;
        case 0x339948u: goto label_339948;
        case 0x33994cu: goto label_33994c;
        case 0x339950u: goto label_339950;
        case 0x339954u: goto label_339954;
        case 0x339958u: goto label_339958;
        case 0x33995cu: goto label_33995c;
        case 0x339960u: goto label_339960;
        case 0x339964u: goto label_339964;
        case 0x339968u: goto label_339968;
        case 0x33996cu: goto label_33996c;
        case 0x339970u: goto label_339970;
        case 0x339974u: goto label_339974;
        case 0x339978u: goto label_339978;
        case 0x33997cu: goto label_33997c;
        case 0x339980u: goto label_339980;
        case 0x339984u: goto label_339984;
        case 0x339988u: goto label_339988;
        case 0x33998cu: goto label_33998c;
        case 0x339990u: goto label_339990;
        case 0x339994u: goto label_339994;
        case 0x339998u: goto label_339998;
        case 0x33999cu: goto label_33999c;
        case 0x3399a0u: goto label_3399a0;
        case 0x3399a4u: goto label_3399a4;
        case 0x3399a8u: goto label_3399a8;
        case 0x3399acu: goto label_3399ac;
        case 0x3399b0u: goto label_3399b0;
        case 0x3399b4u: goto label_3399b4;
        case 0x3399b8u: goto label_3399b8;
        case 0x3399bcu: goto label_3399bc;
        case 0x3399c0u: goto label_3399c0;
        case 0x3399c4u: goto label_3399c4;
        case 0x3399c8u: goto label_3399c8;
        case 0x3399ccu: goto label_3399cc;
        case 0x3399d0u: goto label_3399d0;
        case 0x3399d4u: goto label_3399d4;
        case 0x3399d8u: goto label_3399d8;
        case 0x3399dcu: goto label_3399dc;
        case 0x3399e0u: goto label_3399e0;
        case 0x3399e4u: goto label_3399e4;
        case 0x3399e8u: goto label_3399e8;
        case 0x3399ecu: goto label_3399ec;
        case 0x3399f0u: goto label_3399f0;
        case 0x3399f4u: goto label_3399f4;
        case 0x3399f8u: goto label_3399f8;
        case 0x3399fcu: goto label_3399fc;
        case 0x339a00u: goto label_339a00;
        case 0x339a04u: goto label_339a04;
        case 0x339a08u: goto label_339a08;
        case 0x339a0cu: goto label_339a0c;
        case 0x339a10u: goto label_339a10;
        case 0x339a14u: goto label_339a14;
        case 0x339a18u: goto label_339a18;
        case 0x339a1cu: goto label_339a1c;
        case 0x339a20u: goto label_339a20;
        case 0x339a24u: goto label_339a24;
        case 0x339a28u: goto label_339a28;
        case 0x339a2cu: goto label_339a2c;
        case 0x339a30u: goto label_339a30;
        case 0x339a34u: goto label_339a34;
        case 0x339a38u: goto label_339a38;
        case 0x339a3cu: goto label_339a3c;
        case 0x339a40u: goto label_339a40;
        case 0x339a44u: goto label_339a44;
        case 0x339a48u: goto label_339a48;
        case 0x339a4cu: goto label_339a4c;
        case 0x339a50u: goto label_339a50;
        case 0x339a54u: goto label_339a54;
        case 0x339a58u: goto label_339a58;
        case 0x339a5cu: goto label_339a5c;
        case 0x339a60u: goto label_339a60;
        case 0x339a64u: goto label_339a64;
        case 0x339a68u: goto label_339a68;
        case 0x339a6cu: goto label_339a6c;
        case 0x339a70u: goto label_339a70;
        case 0x339a74u: goto label_339a74;
        case 0x339a78u: goto label_339a78;
        case 0x339a7cu: goto label_339a7c;
        case 0x339a80u: goto label_339a80;
        case 0x339a84u: goto label_339a84;
        case 0x339a88u: goto label_339a88;
        case 0x339a8cu: goto label_339a8c;
        case 0x339a90u: goto label_339a90;
        case 0x339a94u: goto label_339a94;
        default: break;
    }

    ctx->pc = 0x3398f8u;

label_3398f8:
    // 0x3398f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3398f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3398fc:
    // 0x3398fc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3398fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_339900:
    // 0x339900: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x339900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_339904:
    // 0x339904: 0x15000008  bnez        $t0, . + 4 + (0x8 << 2)
label_339908:
    if (ctx->pc == 0x339908u) {
        ctx->pc = 0x339908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339904u;
        // 0x339908: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33990Cu;
        goto label_33990c;
    }
    ctx->pc = 0x339904u;
    {
        const bool branch_taken_0x339904 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x339908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339904u;
        // 0x339908: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339904) {
            ctx->pc = 0x339928u;
            goto label_339928;
        }
    }
    ctx->pc = 0x33990Cu;
label_33990c:
    // 0x33990c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33990cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_339910:
    // 0x339910: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x339910u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_339914:
    // 0x339914: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x339914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_339918:
    // 0x339918: 0x24845af0  addiu       $a0, $a0, 0x5AF0
    ctx->pc = 0x339918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23280));
label_33991c:
    // 0x33991c: 0x24a55a80  addiu       $a1, $a1, 0x5A80
    ctx->pc = 0x33991cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23168));
label_339920:
    // 0x339920: 0x80ce516  j           func_339458
label_339924:
    if (ctx->pc == 0x339924u) {
        ctx->pc = 0x339924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339920u;
        // 0x339924: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339928u;
        goto label_339928;
    }
    ctx->pc = 0x339920u;
    ctx->pc = 0x339924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339920u;
    // 0x339924: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339458u, 0x339920u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x339928u;
label_339928:
    // 0x339928: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x339928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_33992c:
    // 0x33992c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_339930:
    if (ctx->pc == 0x339930u) {
        ctx->pc = 0x339930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33992Cu;
        // 0x339930: 0x8d040020  lw          $a0, 0x20($t0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339934u;
        goto label_339934;
    }
    ctx->pc = 0x33992Cu;
    {
        const bool branch_taken_0x33992c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33992c) {
            ctx->pc = 0x339930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33992Cu;
            // 0x339930: 0x8d040020  lw          $a0, 0x20($t0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339950u;
            goto label_339950;
        }
    }
    ctx->pc = 0x339934u;
label_339934:
    // 0x339934: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x339934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_339938:
    // 0x339938: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x339938u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_33993c:
    // 0x33993c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33993cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_339940:
    // 0x339940: 0x24845b00  addiu       $a0, $a0, 0x5B00
    ctx->pc = 0x339940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23296));
label_339944:
    // 0x339944: 0x24a55ab0  addiu       $a1, $a1, 0x5AB0
    ctx->pc = 0x339944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23216));
label_339948:
    // 0x339948: 0x80ce516  j           func_339458
label_33994c:
    if (ctx->pc == 0x33994Cu) {
        ctx->pc = 0x33994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339948u;
        // 0x33994c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339950u;
        goto label_339950;
    }
    ctx->pc = 0x339948u;
    ctx->pc = 0x33994Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339948u;
    // 0x33994c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339458u, 0x339948u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x339950u;
label_339950:
    // 0x339950: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_339954:
    if (ctx->pc == 0x339954u) {
        ctx->pc = 0x339954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339950u;
        // 0x339954: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339958u;
        goto label_339958;
    }
    ctx->pc = 0x339950u;
    {
        const bool branch_taken_0x339950 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x339954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339950u;
        // 0x339954: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339950) {
            ctx->pc = 0x339970u;
            goto label_339970;
        }
    }
    ctx->pc = 0x339958u;
label_339958:
    // 0x339958: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x339958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_33995c:
    // 0x33995c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x33995cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_339960:
    // 0x339960: 0x24845b10  addiu       $a0, $a0, 0x5B10
    ctx->pc = 0x339960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23312));
label_339964:
    // 0x339964: 0x24a55b20  addiu       $a1, $a1, 0x5B20
    ctx->pc = 0x339964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23328));
label_339968:
    // 0x339968: 0x80ce516  j           func_339458
label_33996c:
    if (ctx->pc == 0x33996Cu) {
        ctx->pc = 0x33996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339968u;
        // 0x33996c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339970u;
        goto label_339970;
    }
    ctx->pc = 0x339968u;
    ctx->pc = 0x33996Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339968u;
    // 0x33996c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339458u, 0x339968u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x339970u;
label_339970:
    // 0x339970: 0x14a0001f  bnez        $a1, . + 4 + (0x1F << 2)
label_339974:
    if (ctx->pc == 0x339974u) {
        ctx->pc = 0x339974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339970u;
        // 0x339974: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339978u;
        goto label_339978;
    }
    ctx->pc = 0x339970u;
    {
        const bool branch_taken_0x339970 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x339974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339970u;
        // 0x339974: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339970) {
            ctx->pc = 0x3399F0u;
            goto label_3399f0;
        }
    }
    ctx->pc = 0x339978u;
label_339978:
    // 0x339978: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x339978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_33997c:
    // 0x33997c: 0x8d030024  lw          $v1, 0x24($t0)
    ctx->pc = 0x33997cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
label_339980:
    // 0x339980: 0x8d050010  lw          $a1, 0x10($t0)
    ctx->pc = 0x339980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_339984:
    // 0x339984: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x339984u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_339988:
    // 0x339988: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x339988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33998c:
    // 0x33998c: 0x8d06001c  lw          $a2, 0x1C($t0)
    ctx->pc = 0x33998cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
label_339990:
    // 0x339990: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x339990u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_339994:
    // 0x339994: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x339994u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_339998:
    // 0x339998: 0x49202a  slt         $a0, $v0, $t1
    ctx->pc = 0x339998u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_33999c:
    // 0x33999c: 0x124100a  movz        $v0, $t1, $a0
    ctx->pc = 0x33999cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 9));
label_3399a0:
    // 0x3399a0: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x3399a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_3399a4:
    // 0x3399a4: 0x8d040014  lw          $a0, 0x14($t0)
    ctx->pc = 0x3399a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_3399a8:
    // 0x3399a8: 0x8d030020  lw          $v1, 0x20($t0)
    ctx->pc = 0x3399a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_3399ac:
    // 0x3399ac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3399acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3399b0:
    // 0x3399b0: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x3399b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_3399b4:
    // 0x3399b4: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x3399b4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3399b8:
    // 0x3399b8: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x3399b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
label_3399bc:
    // 0x3399bc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_3399c0:
    if (ctx->pc == 0x3399C0u) {
        ctx->pc = 0x3399C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3399BCu;
        // 0x3399c0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3399C4u;
        goto label_3399c4;
    }
    ctx->pc = 0x3399BCu;
    {
        const bool branch_taken_0x3399bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3399bc) {
            ctx->pc = 0x3399C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3399BCu;
            // 0x3399c0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3399C4u;
            goto label_3399c4;
        }
    }
    ctx->pc = 0x3399C4u;
label_3399c4:
    // 0x3399c4: 0x8d040010  lw          $a0, 0x10($t0)
    ctx->pc = 0x3399c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_3399c8:
    // 0x3399c8: 0x8d030028  lw          $v1, 0x28($t0)
    ctx->pc = 0x3399c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
label_3399cc:
    // 0x3399cc: 0x2810  mfhi        $a1
    ctx->pc = 0x3399ccu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_3399d0:
    // 0x3399d0: 0xad050014  sw          $a1, 0x14($t0)
    ctx->pc = 0x3399d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 5));
label_3399d4:
    // 0x3399d4: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x3399d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_3399d8:
    // 0x3399d8: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x3399d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3399dc:
    // 0x3399dc: 0xad040010  sw          $a0, 0x10($t0)
    ctx->pc = 0x3399dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 4));
label_3399e0:
    // 0x3399e0: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x3399e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_3399e4:
    // 0x3399e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3399e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3399e8:
    // 0x3399e8: 0x10000027  b           . + 4 + (0x27 << 2)
label_3399ec:
    if (ctx->pc == 0x3399ECu) {
        ctx->pc = 0x3399ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3399E8u;
        // 0x3399ec: 0xad030028  sw          $v1, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3399F0u;
        goto label_3399f0;
    }
    ctx->pc = 0x3399E8u;
    {
        const bool branch_taken_0x3399e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3399ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3399E8u;
        // 0x3399ec: 0xad030028  sw          $v1, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3399e8) {
            ctx->pc = 0x339A88u;
            goto label_339a88;
        }
    }
    ctx->pc = 0x3399F0u;
label_3399f0:
    // 0x3399f0: 0x54a2001f  bnel        $a1, $v0, . + 4 + (0x1F << 2)
label_3399f4:
    if (ctx->pc == 0x3399F4u) {
        ctx->pc = 0x3399F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3399F0u;
        // 0x3399f4: 0x8d020038  lw          $v0, 0x38($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3399F8u;
        goto label_3399f8;
    }
    ctx->pc = 0x3399F0u;
    {
        const bool branch_taken_0x3399f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3399f0) {
            ctx->pc = 0x3399F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3399F0u;
            // 0x3399f4: 0x8d020038  lw          $v0, 0x38($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339A70u;
            goto label_339a70;
        }
    }
    ctx->pc = 0x3399F8u;
label_3399f8:
    // 0x3399f8: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x3399f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_3399fc:
    // 0x3399fc: 0x8d030024  lw          $v1, 0x24($t0)
    ctx->pc = 0x3399fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
label_339a00:
    // 0x339a00: 0x8d05000c  lw          $a1, 0xC($t0)
    ctx->pc = 0x339a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_339a04:
    // 0x339a04: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x339a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_339a08:
    // 0x339a08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x339a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_339a0c:
    // 0x339a0c: 0x8d06001c  lw          $a2, 0x1C($t0)
    ctx->pc = 0x339a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
label_339a10:
    // 0x339a10: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x339a10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_339a14:
    // 0x339a14: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x339a14u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_339a18:
    // 0x339a18: 0x49202a  slt         $a0, $v0, $t1
    ctx->pc = 0x339a18u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_339a1c:
    // 0x339a1c: 0x124100a  movz        $v0, $t1, $a0
    ctx->pc = 0x339a1cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 9));
label_339a20:
    // 0x339a20: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x339a20u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_339a24:
    // 0x339a24: 0x8d040018  lw          $a0, 0x18($t0)
    ctx->pc = 0x339a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_339a28:
    // 0x339a28: 0x8d030020  lw          $v1, 0x20($t0)
    ctx->pc = 0x339a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_339a2c:
    // 0x339a2c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x339a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_339a30:
    // 0x339a30: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x339a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_339a34:
    // 0x339a34: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x339a34u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_339a38:
    // 0x339a38: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x339a38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
label_339a3c:
    // 0x339a3c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_339a40:
    if (ctx->pc == 0x339A40u) {
        ctx->pc = 0x339A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339A3Cu;
        // 0x339a40: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x339A44u;
        goto label_339a44;
    }
    ctx->pc = 0x339A3Cu;
    {
        const bool branch_taken_0x339a3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x339a3c) {
            ctx->pc = 0x339A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339A3Cu;
            // 0x339a40: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x339A44u;
            goto label_339a44;
        }
    }
    ctx->pc = 0x339A44u;
label_339a44:
    // 0x339a44: 0x8d04000c  lw          $a0, 0xC($t0)
    ctx->pc = 0x339a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_339a48:
    // 0x339a48: 0x8d030030  lw          $v1, 0x30($t0)
    ctx->pc = 0x339a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
label_339a4c:
    // 0x339a4c: 0x2810  mfhi        $a1
    ctx->pc = 0x339a4cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_339a50:
    // 0x339a50: 0xad050018  sw          $a1, 0x18($t0)
    ctx->pc = 0x339a50u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 5));
label_339a54:
    // 0x339a54: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x339a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_339a58:
    // 0x339a58: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x339a58u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_339a5c:
    // 0x339a5c: 0xad04000c  sw          $a0, 0xC($t0)
    ctx->pc = 0x339a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 4));
label_339a60:
    // 0x339a60: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x339a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_339a64:
    // 0x339a64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x339a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_339a68:
    // 0x339a68: 0x10000007  b           . + 4 + (0x7 << 2)
label_339a6c:
    if (ctx->pc == 0x339A6Cu) {
        ctx->pc = 0x339A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339A68u;
        // 0x339a6c: 0xad030030  sw          $v1, 0x30($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339A70u;
        goto label_339a70;
    }
    ctx->pc = 0x339A68u;
    {
        const bool branch_taken_0x339a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339A68u;
        // 0x339a6c: 0xad030030  sw          $v1, 0x30($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339a68) {
            ctx->pc = 0x339A88u;
            goto label_339a88;
        }
    }
    ctx->pc = 0x339A70u;
label_339a70:
    // 0x339a70: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x339a70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_339a74:
    // 0x339a74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_339a78:
    if (ctx->pc == 0x339A78u) {
        ctx->pc = 0x339A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339A74u;
        // 0x339a78: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339A7Cu;
        goto label_339a7c;
    }
    ctx->pc = 0x339A74u;
    {
        const bool branch_taken_0x339a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x339A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339A74u;
        // 0x339a78: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339a74) {
            ctx->pc = 0x339A88u;
            goto label_339a88;
        }
    }
    ctx->pc = 0x339A7Cu;
label_339a7c:
    // 0x339a7c: 0x8d04003c  lw          $a0, 0x3C($t0)
    ctx->pc = 0x339a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 60)));
label_339a80:
    // 0x339a80: 0x40f809  jalr        $v0
label_339a84:
    if (ctx->pc == 0x339A84u) {
        ctx->pc = 0x339A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339A80u;
        // 0x339a84: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339A88u;
        goto label_339a88;
    }
    ctx->pc = 0x339A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x339A88u);
        ctx->pc = 0x339A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339A80u;
        // 0x339a84: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339A80u, 0x339A88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x339A88u;
label_339a88:
    // 0x339a88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x339a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_339a8c:
    // 0x339a8c: 0x3e00008  jr          $ra
label_339a90:
    if (ctx->pc == 0x339A90u) {
        ctx->pc = 0x339A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339A8Cu;
        // 0x339a90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339A94u;
        goto label_339a94;
    }
    ctx->pc = 0x339A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339A8Cu;
        // 0x339a90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339A94u;
label_339a94:
    // 0x339a94: 0x0  nop
    ctx->pc = 0x339a94u;
    // NOP
    ctx->pc = 0x339a98u;
}
