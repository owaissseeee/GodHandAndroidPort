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

// Function: func_00378B58
// Address: 0x378b58 - 0x378bf8
void func_00378B58_0x378b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00378B58_0x378b58");
#endif

    switch (ctx->pc) {
        case 0x378bc8u: goto label_378bc8;
        default: break;
    }

    ctx->pc = 0x378b58u;

    // 0x378b58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x378b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x378b5c: 0x3c030f00  lui         $v1, 0xF00
    ctx->pc = 0x378b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3840 << 16));
    // 0x378b60: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x378b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x378b64: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x378b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x378b68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x378b68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378b6c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x378b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x378b70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x378b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x378b74: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x378b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x378b78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x378b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x378b7c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x378B7Cu;
    {
        const bool branch_taken_0x378b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x378b7c) {
            ctx->pc = 0x378B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x378B7Cu;
            // 0x378b80: 0x82110005  lb          $s1, 0x5($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x378B8Cu;
            goto label_378b8c;
        }
    }
    ctx->pc = 0x378B84u;
    // 0x378b84: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x378B84u;
    {
        const bool branch_taken_0x378b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378B84u;
        // 0x378b88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378b84) {
            ctx->pc = 0x378BDCu;
            goto label_378bdc;
        }
    }
    ctx->pc = 0x378B8Cu;
label_378b8c:
    // 0x378b8c: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x378B8Cu;
    {
        const bool branch_taken_0x378b8c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x378B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378B8Cu;
        // 0x378b90: 0x82120007  lb          $s2, 0x7($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378b8c) {
            ctx->pc = 0x378BA4u;
            goto label_378ba4;
        }
    }
    ctx->pc = 0x378B94u;
    // 0x378b94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x378b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x378b98: 0xa2020007  sb          $v0, 0x7($s0)
    ctx->pc = 0x378b98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x378b9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x378B9Cu;
    {
        const bool branch_taken_0x378b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378B9Cu;
        // 0x378ba0: 0xa2020005  sb          $v0, 0x5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378b9c) {
            ctx->pc = 0x378BACu;
            goto label_378bac;
        }
    }
    ctx->pc = 0x378BA4u;
label_378ba4:
    // 0x378ba4: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x378ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x378ba8: 0xa2000007  sb          $zero, 0x7($s0)
    ctx->pc = 0x378ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 0));
label_378bac:
    // 0x378bac: 0x82020007  lb          $v0, 0x7($s0)
    ctx->pc = 0x378bacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x378bb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x378bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378bb4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x378bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378bb8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x378bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x378bbc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x378bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x378bc0: 0xc0de83c  jal         func_37A0F0
    ctx->pc = 0x378BC0u;
    SET_GPR_U32(ctx, 31, 0x378BC8u);
    ctx->pc = 0x378BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378BC0u;
    // 0x378bc4: 0x84450016  lh          $a1, 0x16($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A0F0u, 0x378BC0u, 0x378BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378BC8u;
label_378bc8:
    // 0x378bc8: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x378BC8u;
    {
        const bool branch_taken_0x378bc8 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x378BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378BC8u;
        // 0x378bcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378bc8) {
            ctx->pc = 0x378BDCu;
            goto label_378bdc;
        }
    }
    ctx->pc = 0x378BD0u;
    // 0x378bd0: 0xa2120007  sb          $s2, 0x7($s0)
    ctx->pc = 0x378bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 18));
    // 0x378bd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x378bd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378bd8: 0xa2110005  sb          $s1, 0x5($s0)
    ctx->pc = 0x378bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 17));
label_378bdc:
    // 0x378bdc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x378bdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x378be0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x378be0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x378be4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x378be4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x378be8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x378be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x378bec: 0x3e00008  jr          $ra
    ctx->pc = 0x378BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378BECu;
        // 0x378bf0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378BF4u;
    // 0x378bf4: 0x0  nop
    ctx->pc = 0x378bf4u;
    // NOP
    ctx->pc = 0x378bf8u;
}
