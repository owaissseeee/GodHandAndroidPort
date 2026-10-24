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

// Function: func_00300D20
// Address: 0x300d20 - 0x300e30
void func_00300D20_0x300d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00300D20_0x300d20");
#endif

    switch (ctx->pc) {
        case 0x300d78u: goto label_300d78;
        case 0x300de0u: goto label_300de0;
        default: break;
    }

    ctx->pc = 0x300d20u;

    // 0x300d20: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x300d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x300d24: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x300d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x300d28: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x300d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x300d2c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x300d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x300d30: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x300d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x300d34: 0x24761960  addiu       $s6, $v1, 0x1960
    ctx->pc = 0x300d34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 6496));
    // 0x300d38: 0x24571940  addiu       $s7, $v0, 0x1940
    ctx->pc = 0x300d38u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 6464));
    // 0x300d3c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x300d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x300d40: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x300d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x300d44: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x300d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x300d48: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x300d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x300d4c: 0x3c030072  lui         $v1, 0x72
    ctx->pc = 0x300d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
    // 0x300d50: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x300d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x300d54: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x300d54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300d58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x300d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x300d5c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x300d5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300d60: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x300d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x300d64: 0x2471b940  addiu       $s1, $v1, -0x46C0
    ctx->pc = 0x300d64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949184));
    // 0x300d68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x300d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x300d6c: 0x24551980  addiu       $s5, $v0, 0x1980
    ctx->pc = 0x300d6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 6528));
    // 0x300d70: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x300d70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300d74: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x300d74u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
label_300d78:
    // 0x300d78: 0x101142  srl         $v0, $s0, 5
    ctx->pc = 0x300d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x300d7c: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x300d7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x300d80: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x300d80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x300d84: 0x942006  srlv        $a0, $s4, $a0
    ctx->pc = 0x300d84u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 20), GPR_U32(ctx, 4) & 0x1F));
    // 0x300d88: 0xb71821  addu        $v1, $a1, $s7
    ctx->pc = 0x300d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x300d8c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x300d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x300d90: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x300d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x300d94: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x300D94u;
    {
        const bool branch_taken_0x300d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x300D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300D94u;
        // 0x300d98: 0xb61821  addu        $v1, $a1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300d94) {
            ctx->pc = 0x300DE0u;
            goto label_300de0;
        }
    }
    ctx->pc = 0x300D9Cu;
    // 0x300d9c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x300d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x300da0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x300da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x300da4: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x300DA4u;
    {
        const bool branch_taken_0x300da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x300da4) {
            ctx->pc = 0x300DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300DA4u;
            // 0x300da8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300DE4u;
            goto label_300de4;
        }
    }
    ctx->pc = 0x300DACu;
    // 0x300dac: 0xb51821  addu        $v1, $a1, $s5
    ctx->pc = 0x300dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x300db0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x300db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x300db4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x300db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x300db8: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x300DB8u;
    {
        const bool branch_taken_0x300db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x300db8) {
            ctx->pc = 0x300DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300DB8u;
            // 0x300dbc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300DE4u;
            goto label_300de4;
        }
    }
    ctx->pc = 0x300DC0u;
    // 0x300dc0: 0x8622018c  lh          $v0, 0x18C($s1)
    ctx->pc = 0x300dc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 396)));
    // 0x300dc4: 0x54530007  bnel        $v0, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x300DC4u;
    {
        const bool branch_taken_0x300dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x300dc4) {
            ctx->pc = 0x300DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300DC4u;
            // 0x300dc8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300DE4u;
            goto label_300de4;
        }
    }
    ctx->pc = 0x300DCCu;
    // 0x300dcc: 0x9622018e  lhu         $v0, 0x18E($s1)
    ctx->pc = 0x300dccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 398)));
    // 0x300dd0: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x300DD0u;
    {
        const bool branch_taken_0x300dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x300dd0) {
            ctx->pc = 0x300DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300DD0u;
            // 0x300dd4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300DE4u;
            goto label_300de4;
        }
    }
    ctx->pc = 0x300DD8u;
    // 0x300dd8: 0xc0c0a46  jal         func_302918
    ctx->pc = 0x300DD8u;
    SET_GPR_U32(ctx, 31, 0x300DE0u);
    ctx->pc = 0x300DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300DD8u;
    // 0x300ddc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302918u, 0x300DD8u, 0x300DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300DE0u;
label_300de0:
    // 0x300de0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x300de0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_300de4:
    // 0x300de4: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x300de4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x300de8: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x300DE8u;
    {
        const bool branch_taken_0x300de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x300DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300DE8u;
        // 0x300dec: 0x26310260  addiu       $s1, $s1, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300de8) {
            ctx->pc = 0x300D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300d78;
        }
    }
    ctx->pc = 0x300DF0u;
    // 0x300df0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x300df0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x300df4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x300df4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x300df8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x300df8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x300dfc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x300dfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x300e00: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x300e00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x300e04: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x300e04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x300e08: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x300e08u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x300e0c: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x300e0cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x300e10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x300e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x300e14: 0x3e00008  jr          $ra
    ctx->pc = 0x300E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300E14u;
        // 0x300e18: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300E1Cu;
    // 0x300e1c: 0x0  nop
    ctx->pc = 0x300e1cu;
    // NOP
    // 0x300e20: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x300e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x300e24: 0x0  nop
    ctx->pc = 0x300e24u;
    // NOP
    // 0x300e28: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x300e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x300e2c: 0x0  nop
    ctx->pc = 0x300e2cu;
    // NOP
    ctx->pc = 0x300e30u;
}
