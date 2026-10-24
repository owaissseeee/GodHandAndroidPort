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

// Function: CreateObjectWithVtableA
// Address: 0x3139e0 - 0x313a60
void CreateObjectWithVtableA_0x3139e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateObjectWithVtableA_0x3139e0");
#endif

    switch (ctx->pc) {
        case 0x313a14u: goto label_313a14;
        case 0x313a2cu: goto label_313a2c;
        case 0x313a34u: goto label_313a34;
        default: break;
    }

    ctx->pc = 0x3139e0u;

    // 0x3139e0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x3139e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x3139e4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3139e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3139e8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x3139e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x3139ec: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3139ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3139f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3139f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3139f4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3139f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3139f8: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3139F8u;
    {
        const bool branch_taken_0x3139f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3139FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3139F8u;
        // 0x3139fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3139f8) {
            ctx->pc = 0x313A48u;
            goto label_313a48;
        }
    }
    ctx->pc = 0x313A00u;
    // 0x313a00: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x313a00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x313a04: 0x240404e0  addiu       $a0, $zero, 0x4E0
    ctx->pc = 0x313a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1248));
    // 0x313a08: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x313a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x313a0c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x313A0Cu;
    SET_GPR_U32(ctx, 31, 0x313A14u);
    ctx->pc = 0x313A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313A0Cu;
    // 0x313a10: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x313A0Cu, 0x313A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313A14u;
label_313a14:
    // 0x313a14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x313a14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313a18: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x313A18u;
    {
        const bool branch_taken_0x313a18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x313A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313A18u;
        // 0x313a1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313a18) {
            ctx->pc = 0x313A48u;
            goto label_313a48;
        }
    }
    ctx->pc = 0x313A20u;
    // 0x313a20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x313a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313a24: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x313A24u;
    SET_GPR_U32(ctx, 31, 0x313A2Cu);
    ctx->pc = 0x313A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313A24u;
    // 0x313a28: 0x240604e0  addiu       $a2, $zero, 0x4E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x313A24u, 0x313A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313A2Cu;
label_313a2c:
    // 0x313a2c: 0xc053a64  jal         func_14E990
    ctx->pc = 0x313A2Cu;
    SET_GPR_U32(ctx, 31, 0x313A34u);
    ctx->pc = 0x313A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313A2Cu;
    // 0x313a30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E990u, 0x313A2Cu, 0x313A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313A34u;
label_313a34:
    // 0x313a34: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x313a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x313a38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x313a38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313a3c: 0x2463b840  addiu       $v1, $v1, -0x47C0
    ctx->pc = 0x313a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948928));
    // 0x313a40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x313A40u;
    {
        const bool branch_taken_0x313a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313A40u;
        // 0x313a44: 0xae030214  sw          $v1, 0x214($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313a40) {
            ctx->pc = 0x313A4Cu;
            goto label_313a4c;
        }
    }
    ctx->pc = 0x313A48u;
label_313a48:
    // 0x313a48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x313a48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_313a4c:
    // 0x313a4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x313a4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x313a50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313a54: 0x3e00008  jr          $ra
    ctx->pc = 0x313A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313A54u;
        // 0x313a58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313A5Cu;
    // 0x313a5c: 0x0  nop
    ctx->pc = 0x313a5cu;
    // NOP
    ctx->pc = 0x313a60u;
}
