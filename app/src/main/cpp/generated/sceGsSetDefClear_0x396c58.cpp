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

// Function: sceGsSetDefClear
// Address: 0x396c58 - 0x396d60
void sceGsSetDefClear_0x396c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceGsSetDefClear_0x396c58");
#endif

    ctx->pc = 0x396c58u;

    // 0x396c58: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x396c58u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x396c5c: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x396c5cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x396c60: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x396c60u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x396c64: 0x94c03  sra         $t1, $t1, 16
    ctx->pc = 0x396c64u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 16));
    // 0x396c68: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x396c68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x396c6c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x396c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x396c70: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x396c70u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x396c74: 0x93ac0000  lbu         $t4, 0x0($sp)
    ctx->pc = 0x396c74u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x396c78: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x396c78u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x396c7c: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x396c7cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
    // 0x396c80: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x396c80u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x396c84: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x396c84u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x396c88: 0x9fa30010  lwu         $v1, 0x10($sp)
    ctx->pc = 0x396c88u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x396c8c: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x396c8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x396c90: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x396c90u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x396c94: 0x93ad0008  lbu         $t5, 0x8($sp)
    ctx->pc = 0x396c94u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x396c98: 0xb5a38  dsll        $t3, $t3, 8
    ctx->pc = 0x396c98u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 8);
    // 0x396c9c: 0x3402fe00  ori         $v0, $zero, 0xFE00
    ctx->pc = 0x396c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x396ca0: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x396ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x396ca4: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x396ca4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x396ca8: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x396ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x396cac: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x396cacu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x396cb0: 0xc6438  dsll        $t4, $t4, 16
    ctx->pc = 0x396cb0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 16);
    // 0x396cb4: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x396cb4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x396cb8: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x396cb8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x396cbc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x396cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x396cc0: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x396cc0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x396cc4: 0x18b6025  or          $t4, $t4, $t3
    ctx->pc = 0x396cc4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
    // 0x396cc8: 0xc73825  or          $a3, $a2, $a3
    ctx->pc = 0x396cc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x396ccc: 0x1094825  or          $t1, $t0, $t1
    ctx->pc = 0x396cccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x396cd0: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x396cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x396cd4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x396cd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396cd8: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x396cd8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x396cdc: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x396cdcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x396ce0: 0x14c5025  or          $t2, $t2, $t4
    ctx->pc = 0x396ce0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 12));
    // 0x396ce4: 0xd6e38  dsll        $t5, $t5, 24
    ctx->pc = 0x396ce4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 24);
    // 0x396ce8: 0x54403  sra         $t0, $a1, 16
    ctx->pc = 0x396ce8u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 5), 16));
    // 0x396cec: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x396cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x396cf0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x396cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x396cf4: 0x14d5025  or          $t2, $t2, $t5
    ctx->pc = 0x396cf4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 13));
    // 0x396cf8: 0x3c0b0003  lui         $t3, 0x3
    ctx->pc = 0x396cf8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)3 << 16));
    // 0x396cfc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x396cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x396d00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x396d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x396d04: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x396d04u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x396d08: 0xfcc30028  sd          $v1, 0x28($a2)
    ctx->pc = 0x396d08u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 40), GPR_U64(ctx, 3));
    // 0x396d0c: 0xfcca0020  sd          $t2, 0x20($a2)
    ctx->pc = 0x396d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 10));
    // 0x396d10: 0xfcc70030  sd          $a3, 0x30($a2)
    ctx->pc = 0x396d10u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 48), GPR_U64(ctx, 7));
    // 0x396d14: 0xfcc50048  sd          $a1, 0x48($a2)
    ctx->pc = 0x396d14u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 72), GPR_U64(ctx, 5));
    // 0x396d18: 0xfcc90040  sd          $t1, 0x40($a2)
    ctx->pc = 0x396d18u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 64), GPR_U64(ctx, 9));
    // 0x396d1c: 0xfcc40058  sd          $a0, 0x58($a2)
    ctx->pc = 0x396d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 88), GPR_U64(ctx, 4));
    // 0x396d20: 0xfcc40008  sd          $a0, 0x8($a2)
    ctx->pc = 0x396d20u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 4));
    // 0x396d24: 0xfccb0000  sd          $t3, 0x0($a2)
    ctx->pc = 0x396d24u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 11));
    // 0x396d28: 0xfcc00018  sd          $zero, 0x18($a2)
    ctx->pc = 0x396d28u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 0));
    // 0x396d2c: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x396D2Cu;
    {
        const bool branch_taken_0x396d2c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x396D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D2Cu;
        // 0x396d30: 0xfcc50038  sd          $a1, 0x38($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 56), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396d2c) {
            ctx->pc = 0x396D4Cu;
            goto label_396d4c;
        }
    }
    ctx->pc = 0x396D34u;
    // 0x396d34: 0x31020003  andi        $v0, $t0, 0x3
    ctx->pc = 0x396d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x396d38: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x396d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x396d3c: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x396d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x396d40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x396d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x396d44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x396D44u;
    {
        const bool branch_taken_0x396d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x396D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D44u;
        // 0x396d48: 0xfcc20050  sd          $v0, 0x50($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 80), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396d44) {
            ctx->pc = 0x396D50u;
            goto label_396d50;
        }
    }
    ctx->pc = 0x396D4Cu;
label_396d4c:
    // 0x396d4c: 0xfccb0050  sd          $t3, 0x50($a2)
    ctx->pc = 0x396d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 80), GPR_U64(ctx, 11));
label_396d50:
    // 0x396d50: 0xf  sync
    ctx->pc = 0x396d50u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x396d54: 0x3e00008  jr          $ra
    ctx->pc = 0x396D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D54u;
        // 0x396d58: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396D5Cu;
    // 0x396d5c: 0x0  nop
    ctx->pc = 0x396d5cu;
    // NOP
    ctx->pc = 0x396d60u;
}
