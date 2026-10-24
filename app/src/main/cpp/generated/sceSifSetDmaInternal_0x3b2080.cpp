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

// Function: sceSifSetDmaInternal
// Address: 0x3b2080 - 0x3b2148
void sceSifSetDmaInternal_0x3b2080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifSetDmaInternal_0x3b2080");
#endif

    switch (ctx->pc) {
        case 0x3b20b8u: goto label_3b20b8;
        case 0x3b2110u: goto label_3b2110;
        case 0x3b2124u: goto label_3b2124;
        default: break;
    }

    ctx->pc = 0x3b2080u;

    // 0x3b2080: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x3b2080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
    // 0x3b2084: 0xffb10210  sd          $s1, 0x210($sp)
    ctx->pc = 0x3b2084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 17));
    // 0x3b2088: 0xffb20220  sd          $s2, 0x220($sp)
    ctx->pc = 0x3b2088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 18));
    // 0x3b208c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b208cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2090: 0xffbf0230  sd          $ra, 0x230($sp)
    ctx->pc = 0x3b2090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 31));
    // 0x3b2094: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3b2094u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2098: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x3b2098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3b209c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3B209Cu;
    {
        const bool branch_taken_0x3b209c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B20A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B209Cu;
        // 0x3b20a0: 0xffb00200  sd          $s0, 0x200($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b209c) {
            ctx->pc = 0x3B212Cu;
            goto label_3b212c;
        }
    }
    ctx->pc = 0x3B20A4u;
    // 0x3b20a4: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x3b20a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x3b20a8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3b20a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b20ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3b20acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b20b0: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3B20B0u;
    SET_GPR_U32(ctx, 31, 0x3B20B8u);
    ctx->pc = 0x3B20B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B20B0u;
    // 0x3b20b4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3B20B0u, 0x3B20B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B20B8u;
label_3b20b8:
    // 0x3b20b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3b20b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3b20bc: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x3b20bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x3b20c0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3b20c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3b20c4: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x3b20c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x3b20c8: 0x8c45e520  lw          $a1, -0x1AE0($v0)
    ctx->pc = 0x3b20c8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x77E520u));
    // 0x3b20cc: 0x3b02021  addu        $a0, $sp, $s0
    ctx->pc = 0x3b20ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x3b20d0: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x3b20d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x3b20d4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3b20d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3b20d8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3b20d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3b20dc: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x3b20dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x3b20e0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3b20e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x3b20e4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3b20e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3b20e8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3b20e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3b20ec: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3b20ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x3b20f0: 0x27a2000c  addiu       $v0, $sp, 0xC
    ctx->pc = 0x3b20f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x3b20f4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3b20f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3b20f8: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x3b20f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x3b20fc: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B20FCu;
    {
        const bool branch_taken_0x3b20fc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B2100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B20FCu;
        // 0x3b2100: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b20fc) {
            ctx->pc = 0x3B2118u;
            goto label_3b2118;
        }
    }
    ctx->pc = 0x3B2104u;
    // 0x3b2104: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b2104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2108: 0xc0ec018  jal         func_3B0060
    ctx->pc = 0x3B2108u;
    SET_GPR_U32(ctx, 31, 0x3B2110u);
    ctx->pc = 0x3B210Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2108u;
    // 0x3b210c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0060u, 0x3B2108u, 0x3B2110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2110u;
label_3b2110:
    // 0x3b2110: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B2110u;
    {
        const bool branch_taken_0x3b2110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2110u;
        // 0x3b2114: 0xdfbf0230  ld          $ra, 0x230($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2110) {
            ctx->pc = 0x3B2134u;
            goto label_3b2134;
        }
    }
    ctx->pc = 0x3B2118u;
label_3b2118:
    // 0x3b2118: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b2118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b211c: 0xc0ec01c  jal         func_3B0070
    ctx->pc = 0x3B211Cu;
    SET_GPR_U32(ctx, 31, 0x3B2124u);
    ctx->pc = 0x3B2120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B211Cu;
    // 0x3b2120: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0070u, 0x3B211Cu, 0x3B2124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2124u;
label_3b2124:
    // 0x3b2124: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B2124u;
    {
        const bool branch_taken_0x3b2124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2124u;
        // 0x3b2128: 0xdfbf0230  ld          $ra, 0x230($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2124) {
            ctx->pc = 0x3B2134u;
            goto label_3b2134;
        }
    }
    ctx->pc = 0x3B212Cu;
label_3b212c:
    // 0x3b212c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b212cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2130: 0xdfbf0230  ld          $ra, 0x230($sp)
    ctx->pc = 0x3b2130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 560)));
label_3b2134:
    // 0x3b2134: 0xdfb20220  ld          $s2, 0x220($sp)
    ctx->pc = 0x3b2134u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x3b2138: 0xdfb10210  ld          $s1, 0x210($sp)
    ctx->pc = 0x3b2138u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x3b213c: 0xdfb00200  ld          $s0, 0x200($sp)
    ctx->pc = 0x3b213cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x3b2140: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2140u;
        // 0x3b2144: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2148u;
}
