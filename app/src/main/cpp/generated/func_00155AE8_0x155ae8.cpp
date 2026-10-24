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

// Function: func_00155AE8
// Address: 0x155ae8 - 0x155be8
void func_00155AE8_0x155ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00155AE8_0x155ae8");
#endif

    ctx->pc = 0x155ae8u;

    // 0x155ae8: 0x800013  mtlo        $a0
    ctx->pc = 0x155ae8u;
    ctx->lo = GPR_U64(ctx, 4);
    // 0x155aec: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x155aecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155af0: 0x5600024  bltz        $t3, . + 4 + (0x24 << 2)
    ctx->pc = 0x155AF0u;
    {
        const bool branch_taken_0x155af0 = (GPR_S64(ctx, 11) < 0);
        ctx->pc = 0x155AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155AF0u;
        // 0x155af4: 0xc0602d  daddu       $t4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155af0) {
            ctx->pc = 0x155B84u;
            goto label_155b84;
        }
    }
    ctx->pc = 0x155AF8u;
    // 0x155af8: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x155af8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x155afc: 0x3c07004a  lui         $a3, 0x4A
    ctx->pc = 0x155afcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)74 << 16));
    // 0x155b00: 0x24e75d80  addiu       $a3, $a3, 0x5D80
    ctx->pc = 0x155b00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23936));
    // 0x155b04: 0xb18c0  sll         $v1, $t3, 3
    ctx->pc = 0x155b04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x155b08: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x155b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x155b0c: 0x24e80004  addiu       $t0, $a3, 0x4
    ctx->pc = 0x155b0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x155b10: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x155b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x155b14: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x155b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x155b18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x155b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155b1c: 0x3c0a3000  lui         $t2, 0x3000
    ctx->pc = 0x155b1cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)12288 << 16));
    // 0x155b20: 0x240900b0  addiu       $t1, $zero, 0xB0
    ctx->pc = 0x155b20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x155b24: 0x3c060fff  lui         $a2, 0xFFF
    ctx->pc = 0x155b24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4095 << 16));
    // 0x155b28: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x155b28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x155b2c: 0x71894800  madd        $t1, $t4, $t1
    ctx->pc = 0x155b2cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 9); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x155b30: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x155b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x155b34: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x155b34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x155b38: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x155b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x155b3c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x155b3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x155b40: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x155b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x155b44: 0x25630001  addiu       $v1, $t3, 0x1
    ctx->pc = 0x155b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x155b48: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x155b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x155b4c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x155b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x155b50: 0xfd220070  sd          $v0, 0x70($t1)
    ctx->pc = 0x155b50u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 112), GPR_U64(ctx, 2));
    // 0x155b54: 0x684021  addu        $t0, $v1, $t0
    ctx->pc = 0x155b54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x155b58: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x155b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x155b5c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x155b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x155b60: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x155b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155b64: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x155b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x155b68: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x155b68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x155b6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x155b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x155b70: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x155b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x155b74: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x155b74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x155b78: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x155b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x155b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x155B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B7Cu;
        // 0x155b80: 0xfd220080  sd          $v0, 0x80($t1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 9), 128), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155B84u;
label_155b84:
    // 0x155b84: 0x240600b0  addiu       $a2, $zero, 0xB0
    ctx->pc = 0x155b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x155b88: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x155b88u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x155b8c: 0x71863000  madd        $a2, $t4, $a2
    ctx->pc = 0x155b8cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 6); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x155b90: 0x25650001  addiu       $a1, $t3, 0x1
    ctx->pc = 0x155b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x155b94: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x155b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x155b98: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x155b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x155b9c: 0x24425d80  addiu       $v0, $v0, 0x5D80
    ctx->pc = 0x155b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23936));
    // 0x155ba0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x155ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x155ba4: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x155ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x155ba8: 0x3c073000  lui         $a3, 0x3000
    ctx->pc = 0x155ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)12288 << 16));
    // 0x155bac: 0xfcc40070  sd          $a0, 0x70($a2)
    ctx->pc = 0x155bacu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 112), GPR_U64(ctx, 4));
    // 0x155bb0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x155bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x155bb4: 0x3c040fff  lui         $a0, 0xFFF
    ctx->pc = 0x155bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4095 << 16));
    // 0x155bb8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x155bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x155bbc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x155bbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x155bc0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x155bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x155bc4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x155bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x155bc8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x155bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x155bcc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x155bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x155bd0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x155bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x155bd4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x155bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x155bd8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x155bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x155bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x155BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155BDCu;
        // 0x155be0: 0xfcc20080  sd          $v0, 0x80($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 128), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155BE4u;
    // 0x155be4: 0x0  nop
    ctx->pc = 0x155be4u;
    // NOP
    ctx->pc = 0x155be8u;
}
