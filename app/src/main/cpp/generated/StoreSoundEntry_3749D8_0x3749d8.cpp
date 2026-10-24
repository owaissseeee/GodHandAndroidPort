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

// Function: StoreSoundEntry_3749D8
// Address: 0x3749d8 - 0x374ae0
void StoreSoundEntry_3749D8_0x3749d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StoreSoundEntry_3749D8_0x3749d8");
#endif

    switch (ctx->pc) {
        case 0x374ac4u: goto label_374ac4;
        default: break;
    }

    ctx->pc = 0x3749d8u;

    // 0x3749d8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3749d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3749dc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3749dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3749e0: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x3749e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x3749e4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x3749e4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x3749e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3749e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3749ec: 0x2442a7d4  addiu       $v0, $v0, -0x582C
    ctx->pc = 0x3749ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944724));
    // 0x3749f0: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x3749f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x3749f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3749f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3749f8: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x3749f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3749fc: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x3749fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x374a00: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x374A00u;
    {
        const bool branch_taken_0x374a00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x374A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374A00u;
        // 0x374a04: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374a00) {
            ctx->pc = 0x374A10u;
            goto label_374a10;
        }
    }
    ctx->pc = 0x374A08u;
    // 0x374a08: 0x95220002  lhu         $v0, 0x2($t1)
    ctx->pc = 0x374a08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x374a0c: 0x30480001  andi        $t0, $v0, 0x1
    ctx->pc = 0x374a0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_374a10:
    // 0x374a10: 0x952a0000  lhu         $t2, 0x0($t1)
    ctx->pc = 0x374a10u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x374a14: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x374a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x374a18: 0x95230004  lhu         $v1, 0x4($t1)
    ctx->pc = 0x374a18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x374a1c: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x374a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x374a20: 0x2d42000a  sltiu       $v0, $t2, 0xA
    ctx->pc = 0x374a20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x374a24: 0x95250006  lhu         $a1, 0x6($t1)
    ctx->pc = 0x374a24u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x374a28: 0x82400a  movz        $t0, $a0, $v0
    ctx->pc = 0x374a28u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 4));
    // 0x374a2c: 0x2c630081  sltiu       $v1, $v1, 0x81
    ctx->pc = 0x374a2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x374a30: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x374a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x374a34: 0x2ca50081  sltiu       $a1, $a1, 0x81
    ctx->pc = 0x374a34u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x374a38: 0x83400a  movz        $t0, $a0, $v1
    ctx->pc = 0x374a38u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 4));
    // 0x374a3c: 0x95220008  lhu         $v0, 0x8($t1)
    ctx->pc = 0x374a3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x374a40: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x374a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x374a44: 0x9526000a  lhu         $a2, 0xA($t1)
    ctx->pc = 0x374a44u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 10)));
    // 0x374a48: 0x65400a  movz        $t0, $v1, $a1
    ctx->pc = 0x374a48u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
    // 0x374a4c: 0x2c420080  sltiu       $v0, $v0, 0x80
    ctx->pc = 0x374a4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x374a50: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x374a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x374a54: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x374a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x374a58: 0x82400a  movz        $t0, $a0, $v0
    ctx->pc = 0x374a58u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 4));
    // 0x374a5c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x374a5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x374a60: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x374a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x374a64: 0x2cc60080  sltiu       $a2, $a2, 0x80
    ctx->pc = 0x374a64u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x374a68: 0x46400a  movz        $t0, $v0, $a2
    ctx->pc = 0x374a68u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
    // 0x374a6c: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x374a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x374a70: 0x671826  xor         $v1, $v1, $a3
    ctx->pc = 0x374a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 7));
    // 0x374a74: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x374a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x374a78: 0x43400b  movn        $t0, $v0, $v1
    ctx->pc = 0x374a78u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
    // 0x374a7c: 0x55000013  bnel        $t0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x374A7Cu;
    {
        const bool branch_taken_0x374a7c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x374a7c) {
            ctx->pc = 0x374A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x374A7Cu;
            // 0x374a80: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x374ACCu;
            goto label_374acc;
        }
    }
    ctx->pc = 0x374A84u;
    // 0x374a84: 0xa60a0000  sh          $t2, 0x0($s0)
    ctx->pc = 0x374a84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x374a88: 0xa2400  sll         $a0, $t2, 16
    ctx->pc = 0x374a88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x374a8c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x374a8cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x374a90: 0x95220002  lhu         $v0, 0x2($t1)
    ctx->pc = 0x374a90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x374a94: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x374a94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x374a98: 0x95230004  lhu         $v1, 0x4($t1)
    ctx->pc = 0x374a98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x374a9c: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x374a9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x374aa0: 0x95220006  lhu         $v0, 0x6($t1)
    ctx->pc = 0x374aa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x374aa4: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x374aa4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x374aa8: 0x95230008  lhu         $v1, 0x8($t1)
    ctx->pc = 0x374aa8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x374aac: 0xa6030008  sh          $v1, 0x8($s0)
    ctx->pc = 0x374aacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x374ab0: 0x9522000a  lhu         $v0, 0xA($t1)
    ctx->pc = 0x374ab0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 10)));
    // 0x374ab4: 0xa602000a  sh          $v0, 0xA($s0)
    ctx->pc = 0x374ab4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x374ab8: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x374ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x374abc: 0xc0dd2b8  jal         func_374AE0
    ctx->pc = 0x374ABCu;
    SET_GPR_U32(ctx, 31, 0x374AC4u);
    ctx->pc = 0x374AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374ABCu;
    // 0x374ac0: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374AE0u, 0x374ABCu, 0x374AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374AC4u;
label_374ac4:
    // 0x374ac4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x374ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x374ac8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x374ac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_374acc:
    // 0x374acc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x374accu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374ad0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x374AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374AD4u;
        // 0x374ad8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374ADCu;
    // 0x374adc: 0x0  nop
    ctx->pc = 0x374adcu;
    // NOP
    ctx->pc = 0x374ae0u;
}
