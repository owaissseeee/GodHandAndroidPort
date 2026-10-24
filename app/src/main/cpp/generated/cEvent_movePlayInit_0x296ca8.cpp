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

// Function: cEvent_movePlayInit
// Address: 0x296ca8 - 0x296dd8
void cEvent_movePlayInit_0x296ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEvent_movePlayInit_0x296ca8");
#endif

    switch (ctx->pc) {
        case 0x296cfcu: goto label_296cfc;
        case 0x296d04u: goto label_296d04;
        case 0x296d10u: goto label_296d10;
        case 0x296d1cu: goto label_296d1c;
        case 0x296d28u: goto label_296d28;
        case 0x296d34u: goto label_296d34;
        case 0x296d40u: goto label_296d40;
        case 0x296d4cu: goto label_296d4c;
        case 0x296d58u: goto label_296d58;
        case 0x296d64u: goto label_296d64;
        case 0x296d70u: goto label_296d70;
        case 0x296d7cu: goto label_296d7c;
        case 0x296d88u: goto label_296d88;
        case 0x296d94u: goto label_296d94;
        case 0x296da0u: goto label_296da0;
        case 0x296dacu: goto label_296dac;
        case 0x296db8u: goto label_296db8;
        default: break;
    }

    ctx->pc = 0x296ca8u;

    // 0x296ca8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x296ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x296cac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x296cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x296cb0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x296cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x296cb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x296cb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296cb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x296cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x296cbc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x296cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x296cc0: 0x3107a  dsrl        $v0, $v1, 1
    ctx->pc = 0x296cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 1);
    // 0x296cc4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x296cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x296cc8: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x296CC8u;
    {
        const bool branch_taken_0x296cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296CC8u;
        // 0x296ccc: 0x310ba  dsrl        $v0, $v1, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x296cc8) {
            ctx->pc = 0x296DC4u;
            goto label_296dc4;
        }
    }
    ctx->pc = 0x296CD0u;
    // 0x296cd0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x296cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x296cd4: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x296CD4u;
    {
        const bool branch_taken_0x296cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296CD4u;
        // 0x296cd8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296cd4) {
            ctx->pc = 0x296DC8u;
            goto label_296dc8;
        }
    }
    ctx->pc = 0x296CDCu;
    // 0x296cdc: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x296cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x296ce0: 0x3c100000  lui         $s0, 0x0
    ctx->pc = 0x296ce0u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296CE0u) & 0xFFFFu)) << 16));
    // 0x296ce4: 0x8c627a84  lw          $v0, 0x7A84($v1)
    ctx->pc = 0x296ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A84u));
    // 0x296ce8: 0x26100000  addiu       $s0, $s0, 0x0
    ctx->pc = 0x296ce8u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296CE8u) & 0xFFFFu))));
    // 0x296cec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x296cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296cf0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x296cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x296cf4: 0xc000000  jal         func_000000
    ctx->pc = 0x296CF4u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296CF4u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296CFCu);
        ctx->pc = 0x296CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296CF4u;
        // 0x296cf8: 0xac627a84  sw          $v0, 0x7A84($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 31364), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296CF4u, 0x296CFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296CFCu;
label_296cfc:
    // 0x296cfc: 0xc000000  jal         func_000000
    ctx->pc = 0x296CFCu;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296CFCu) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296D04u);
        ctx->pc = 0x296D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296CFCu;
        // 0x296d00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296CFCu, 0x296D04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296D04u;
label_296d04:
    // 0x296d04: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296d04u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296D04u) & 0xFFFFu)) << 16));
    // 0x296d08: 0xc000000  jal         func_000000
    ctx->pc = 0x296D08u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296D08u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296D10u);
        ctx->pc = 0x296D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D08u;
        // 0x296d0c: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296D0Cu) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296D08u, 0x296D10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296D10u;
label_296d10:
    // 0x296d10: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296d10u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296D10u) & 0xFFFFu)) << 16));
    // 0x296d14: 0xc000000  jal         func_000000
    ctx->pc = 0x296D14u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296D14u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296D1Cu);
        ctx->pc = 0x296D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D14u;
        // 0x296d18: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296D18u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296D14u, 0x296D1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296D1Cu;
label_296d1c:
    // 0x296d1c: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296d1cu;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296D1Cu) & 0xFFFFu)) << 16));
    // 0x296d20: 0xc000000  jal         func_000000
    ctx->pc = 0x296D20u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296D20u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296D28u);
        ctx->pc = 0x296D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D20u;
        // 0x296d24: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296D24u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296D20u, 0x296D28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296D28u;
label_296d28:
    // 0x296d28: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296d28u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296D28u) & 0xFFFFu)) << 16));
    // 0x296d2c: 0xc000000  jal         func_000000
    ctx->pc = 0x296D2Cu;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296D2Cu) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296D34u);
        ctx->pc = 0x296D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D2Cu;
        // 0x296d30: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296D30u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296D2Cu, 0x296D34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296D34u;
label_296d34:
    // 0x296d34: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296d34u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296D34u) & 0xFFFFu)) << 16));
    // 0x296d38: 0xc000000  jal         func_000000
    ctx->pc = 0x296D38u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296D38u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296D40u);
        ctx->pc = 0x296D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D38u;
        // 0x296d3c: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296D3Cu) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296D38u, 0x296D40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296D40u;
label_296d40:
    // 0x296d40: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296d40u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296D40u) & 0xFFFFu)) << 16));
    // 0x296d44: 0xc000000  jal         func_000000
    ctx->pc = 0x296D44u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296D44u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296D4Cu);
        ctx->pc = 0x296D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D44u;
        // 0x296d48: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296D48u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296D44u, 0x296D4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296D4Cu;
label_296d4c:
    // 0x296d4c: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296d4cu;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296D4Cu) & 0xFFFFu)) << 16));
    // 0x296d50: 0xc000000  jal         func_000000
    ctx->pc = 0x296D50u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296D50u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296D58u);
        ctx->pc = 0x296D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D50u;
        // 0x296d54: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296D54u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296D50u, 0x296D58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296D58u;
label_296d58:
    // 0x296d58: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296d58u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296D58u) & 0xFFFFu)) << 16));
    // 0x296d5c: 0xc000000  jal         func_000000
    ctx->pc = 0x296D5Cu;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296D5Cu) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296D64u);
        ctx->pc = 0x296D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D5Cu;
        // 0x296d60: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296D60u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296D5Cu, 0x296D64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296D64u;
label_296d64:
    // 0x296d64: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296d64u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296D64u) & 0xFFFFu)) << 16));
    // 0x296d68: 0xc000000  jal         func_000000
    ctx->pc = 0x296D68u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296D68u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296D70u);
        ctx->pc = 0x296D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D68u;
        // 0x296d6c: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296D6Cu) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296D68u, 0x296D70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296D70u;
label_296d70:
    // 0x296d70: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296d70u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296D70u) & 0xFFFFu)) << 16));
    // 0x296d74: 0xc000000  jal         func_000000
    ctx->pc = 0x296D74u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296D74u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296D7Cu);
        ctx->pc = 0x296D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D74u;
        // 0x296d78: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296D78u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296D74u, 0x296D7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296D7Cu;
label_296d7c:
    // 0x296d7c: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296d7cu;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296D7Cu) & 0xFFFFu)) << 16));
    // 0x296d80: 0xc000000  jal         func_000000
    ctx->pc = 0x296D80u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296D80u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296D88u);
        ctx->pc = 0x296D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D80u;
        // 0x296d84: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296D84u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296D80u, 0x296D88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296D88u;
label_296d88:
    // 0x296d88: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296d88u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296D88u) & 0xFFFFu)) << 16));
    // 0x296d8c: 0xc000000  jal         func_000000
    ctx->pc = 0x296D8Cu;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296D8Cu) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296D94u);
        ctx->pc = 0x296D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D8Cu;
        // 0x296d90: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296D90u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296D8Cu, 0x296D94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296D94u;
label_296d94:
    // 0x296d94: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296d94u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296D94u) & 0xFFFFu)) << 16));
    // 0x296d98: 0xc000000  jal         func_000000
    ctx->pc = 0x296D98u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296D98u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296DA0u);
        ctx->pc = 0x296D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D98u;
        // 0x296d9c: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296D9Cu) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296D98u, 0x296DA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296DA0u;
label_296da0:
    // 0x296da0: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296da0u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296DA0u) & 0xFFFFu)) << 16));
    // 0x296da4: 0xc000000  jal         func_000000
    ctx->pc = 0x296DA4u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296DA4u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296DACu);
        ctx->pc = 0x296DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296DA4u;
        // 0x296da8: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296DA8u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296DA4u, 0x296DACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296DACu;
label_296dac:
    // 0x296dac: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296dacu;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296DACu) & 0xFFFFu)) << 16));
    // 0x296db0: 0xc000000  jal         func_000000
    ctx->pc = 0x296DB0u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296DB0u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296DB8u);
        ctx->pc = 0x296DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296DB0u;
        // 0x296db4: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296DB4u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296DB0u, 0x296DB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296DB8u;
label_296db8:
    // 0x296db8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x296db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x296dbc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x296dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x296dc0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x296dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_296dc4:
    // 0x296dc4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x296dc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_296dc8:
    // 0x296dc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x296dc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296dcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x296DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296DD0u;
        // 0x296dd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296DD8u;
}
