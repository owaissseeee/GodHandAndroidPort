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

// Function: func_003849F8
// Address: 0x3849f8 - 0x384b10
void func_003849F8_0x3849f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003849F8_0x3849f8");
#endif

    switch (ctx->pc) {
        case 0x384a38u: goto label_384a38;
        case 0x384a54u: goto label_384a54;
        case 0x384a70u: goto label_384a70;
        case 0x384aacu: goto label_384aac;
        case 0x384ad0u: goto label_384ad0;
        case 0x384af4u: goto label_384af4;
        default: break;
    }

    ctx->pc = 0x3849f8u;

    // 0x3849f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3849f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3849fc: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x3849fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x384a00: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x384a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x384a04: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x384a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x384a08: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x384a08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384a0c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x384a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x384a10: 0x14c00019  bnez        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x384A10u;
    {
        const bool branch_taken_0x384a10 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x384A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384A10u;
        // 0x384a14: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384a10) {
            ctx->pc = 0x384A78u;
            goto label_384a78;
        }
    }
    ctx->pc = 0x384A18u;
    // 0x384a18: 0x86480008  lh          $t0, 0x8($s2)
    ctx->pc = 0x384a18u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x384a1c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x384a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x384a20: 0x86490012  lh          $t1, 0x12($s2)
    ctx->pc = 0x384a20u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x384a24: 0x24e7ccb0  addiu       $a3, $a3, -0x3350
    ctx->pc = 0x384a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954160));
    // 0x384a28: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x384a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x384a2c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x384a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x384a30: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x384A30u;
    SET_GPR_U32(ctx, 31, 0x384A38u);
    ctx->pc = 0x384A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384A30u;
    // 0x384a34: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x384A30u, 0x384A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384A38u;
label_384a38:
    // 0x384a38: 0x8648001c  lh          $t0, 0x1C($s2)
    ctx->pc = 0x384a38u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x384a3c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x384a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x384a40: 0x24e7ccd0  addiu       $a3, $a3, -0x3330
    ctx->pc = 0x384a40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954192));
    // 0x384a44: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x384a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x384a48: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x384a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x384a4c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x384A4Cu;
    SET_GPR_U32(ctx, 31, 0x384A54u);
    ctx->pc = 0x384A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384A4Cu;
    // 0x384a50: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x384A4Cu, 0x384A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384A54u;
label_384a54:
    // 0x384a54: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x384a54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x384a58: 0x86480026  lh          $t0, 0x26($s2)
    ctx->pc = 0x384a58u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 38)));
    // 0x384a5c: 0x24e7cce0  addiu       $a3, $a3, -0x3320
    ctx->pc = 0x384a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954208));
    // 0x384a60: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x384a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x384a64: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x384a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x384a68: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x384A68u;
    SET_GPR_U32(ctx, 31, 0x384A70u);
    ctx->pc = 0x384A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384A68u;
    // 0x384a6c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x384A68u, 0x384A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384A70u;
label_384a70:
    // 0x384a70: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x384A70u;
    {
        const bool branch_taken_0x384a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384A70u;
        // 0x384a74: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384a70) {
            ctx->pc = 0x384AF8u;
            goto label_384af8;
        }
    }
    ctx->pc = 0x384A78u;
label_384a78:
    // 0x384a78: 0x68040  sll         $s0, $a2, 1
    ctx->pc = 0x384a78u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x384a7c: 0x24d1ffff  addiu       $s1, $a2, -0x1
    ctx->pc = 0x384a7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x384a80: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x384a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x384a84: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x384a84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x384a88: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x384a88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384a8c: 0x84690008  lh          $t1, 0x8($v1)
    ctx->pc = 0x384a8cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x384a90: 0x844a0012  lh          $t2, 0x12($v0)
    ctx->pc = 0x384a90u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x384a94: 0x24e7ccf0  addiu       $a3, $a3, -0x3310
    ctx->pc = 0x384a94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954224));
    // 0x384a98: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x384a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x384a9c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x384a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x384aa0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x384aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x384aa4: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x384AA4u;
    SET_GPR_U32(ctx, 31, 0x384AACu);
    ctx->pc = 0x384AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384AA4u;
    // 0x384aa8: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x384AA4u, 0x384AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384AACu;
label_384aac:
    // 0x384aac: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x384aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x384ab0: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x384ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x384ab4: 0x8449001c  lh          $t1, 0x1C($v0)
    ctx->pc = 0x384ab4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x384ab8: 0x24e7cd10  addiu       $a3, $a3, -0x32F0
    ctx->pc = 0x384ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954256));
    // 0x384abc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x384abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x384ac0: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x384ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x384ac4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x384ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x384ac8: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x384AC8u;
    SET_GPR_U32(ctx, 31, 0x384AD0u);
    ctx->pc = 0x384ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384AC8u;
    // 0x384acc: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x384AC8u, 0x384AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384AD0u;
label_384ad0:
    // 0x384ad0: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x384ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x384ad4: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x384ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x384ad8: 0x86090026  lh          $t1, 0x26($s0)
    ctx->pc = 0x384ad8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x384adc: 0x24e7cd28  addiu       $a3, $a3, -0x32D8
    ctx->pc = 0x384adcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954280));
    // 0x384ae0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x384ae0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384ae4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x384ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x384ae8: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x384ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x384aec: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x384AECu;
    SET_GPR_U32(ctx, 31, 0x384AF4u);
    ctx->pc = 0x384AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384AECu;
    // 0x384af0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x384AECu, 0x384AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384AF4u;
label_384af4:
    // 0x384af4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x384af4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_384af8:
    // 0x384af8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x384af8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x384afc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x384afcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x384b00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x384b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x384b04: 0x3e00008  jr          $ra
    ctx->pc = 0x384B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384B04u;
        // 0x384b08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384B0Cu;
    // 0x384b0c: 0x0  nop
    ctx->pc = 0x384b0cu;
    // NOP
    ctx->pc = 0x384b10u;
}
