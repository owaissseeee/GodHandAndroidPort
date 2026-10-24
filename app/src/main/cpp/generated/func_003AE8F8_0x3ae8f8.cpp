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

// Function: func_003AE8F8
// Address: 0x3ae8f8 - 0x3aea00
void func_003AE8F8_0x3ae8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003AE8F8_0x3ae8f8");
#endif

    switch (ctx->pc) {
        case 0x3ae930u: goto label_3ae930;
        case 0x3ae99cu: goto label_3ae99c;
        case 0x3ae9b8u: goto label_3ae9b8;
        case 0x3ae9c4u: goto label_3ae9c4;
        default: break;
    }

    ctx->pc = 0x3ae8f8u;

    // 0x3ae8f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3ae8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3ae8fc: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x3ae8fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae900: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3ae900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3ae904: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3ae904u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae908: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3ae908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3ae90c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3ae90cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae910: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3ae910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3ae914: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3ae914u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae918: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3ae918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3ae91c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3ae91cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae920: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ae920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ae924: 0x26270014  addiu       $a3, $s1, 0x14
    ctx->pc = 0x3ae924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x3ae928: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3ae928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3ae92c: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x3ae92cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3ae930:
    // 0x3ae930: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x3ae930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3ae934: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3ae934u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3ae938: 0x132302a  slt         $a2, $t1, $s2
    ctx->pc = 0x3ae938u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3ae93c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3ae93cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3ae940: 0x881018  mult        $v0, $a0, $t0
    ctx->pc = 0x3ae940u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3ae944: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x3ae944u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x3ae948: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x3ae948u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3ae94c: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x3ae94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3ae950: 0x42c02  srl         $a1, $a0, 16
    ctx->pc = 0x3ae950u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x3ae954: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3ae954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3ae958: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x3ae958u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3ae95c: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x3ae95cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x3ae960: 0x39c02  srl         $s3, $v1, 16
    ctx->pc = 0x3ae960u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x3ae964: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3ae964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3ae968: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x3ae968u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x3ae96c: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3AE96Cu;
    {
        const bool branch_taken_0x3ae96c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AE970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE96Cu;
        // 0x3ae970: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae96c) {
            ctx->pc = 0x3AE930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ae930;
        }
    }
    ctx->pc = 0x3AE974u;
    // 0x3ae974: 0x1260001a  beqz        $s3, . + 4 + (0x1A << 2)
    ctx->pc = 0x3AE974u;
    {
        const bool branch_taken_0x3ae974 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE974u;
        // 0x3ae978: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae974) {
            ctx->pc = 0x3AE9E0u;
            goto label_3ae9e0;
        }
    }
    ctx->pc = 0x3AE97Cu;
    // 0x3ae97c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3ae97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3ae980: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x3ae980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3ae984: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3AE984u;
    {
        const bool branch_taken_0x3ae984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AE988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE984u;
        // 0x3ae988: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae984) {
            ctx->pc = 0x3AE9CCu;
            goto label_3ae9cc;
        }
    }
    ctx->pc = 0x3AE98Cu;
    // 0x3ae98c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3ae98cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3ae990: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ae990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae994: 0xc0eba06  jal         func_3AE818
    ctx->pc = 0x3AE994u;
    SET_GPR_U32(ctx, 31, 0x3AE99Cu);
    ctx->pc = 0x3AE998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE994u;
    // 0x3ae998: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE818u, 0x3AE994u, 0x3AE99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE99Cu;
label_3ae99c:
    // 0x3ae99c: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x3ae99cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3ae9a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ae9a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae9a4: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x3ae9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x3ae9a8: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x3ae9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x3ae9ac: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x3ae9acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3ae9b0: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3AE9B0u;
    SET_GPR_U32(ctx, 31, 0x3AE9B8u);
    ctx->pc = 0x3AE9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE9B0u;
    // 0x3ae9b4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3AE9B0u, 0x3AE9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE9B8u;
label_3ae9b8:
    // 0x3ae9b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ae9b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae9bc: 0xc0eba30  jal         func_3AE8C0
    ctx->pc = 0x3AE9BCu;
    SET_GPR_U32(ctx, 31, 0x3AE9C4u);
    ctx->pc = 0x3AE9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE9BCu;
    // 0x3ae9c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE8C0u, 0x3AE9BCu, 0x3AE9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE9C4u;
label_3ae9c4:
    // 0x3ae9c4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x3ae9c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae9c8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x3ae9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_3ae9cc:
    // 0x3ae9cc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3ae9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3ae9d0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3ae9d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3ae9d4: 0xac530014  sw          $s3, 0x14($v0)
    ctx->pc = 0x3ae9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 19));
    // 0x3ae9d8: 0xae320010  sw          $s2, 0x10($s1)
    ctx->pc = 0x3ae9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
    // 0x3ae9dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3ae9dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ae9e0:
    // 0x3ae9e0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3ae9e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ae9e4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3ae9e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ae9e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3ae9e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ae9ec: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3ae9ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ae9f0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3ae9f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ae9f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ae9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ae9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE9F8u;
        // 0x3ae9fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AEA00u;
}
