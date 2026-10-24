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

// Function: func_00333CE0
// Address: 0x333ce0 - 0x333e68
void func_00333CE0_0x333ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00333CE0_0x333ce0");
#endif

    switch (ctx->pc) {
        case 0x333d20u: goto label_333d20;
        case 0x333d38u: goto label_333d38;
        case 0x333d58u: goto label_333d58;
        case 0x333d94u: goto label_333d94;
        case 0x333db0u: goto label_333db0;
        case 0x333dbcu: goto label_333dbc;
        case 0x333dd4u: goto label_333dd4;
        case 0x333de4u: goto label_333de4;
        case 0x333e1cu: goto label_333e1c;
        case 0x333e28u: goto label_333e28;
        default: break;
    }

    ctx->pc = 0x333ce0u;

    // 0x333ce0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x333ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x333ce4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x333ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x333ce8: 0x3c140075  lui         $s4, 0x75
    ctx->pc = 0x333ce8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)117 << 16));
    // 0x333cec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x333cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x333cf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x333cf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333cf4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x333cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x333cf8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x333cf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333cfc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x333cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x333d00: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x333d00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333d04: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x333d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x333d08: 0x268463c0  addiu       $a0, $s4, 0x63C0
    ctx->pc = 0x333d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25536));
    // 0x333d0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x333d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333d10: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x333d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x333d14: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x333d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x333d18: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x333D18u;
    SET_GPR_U32(ctx, 31, 0x333D20u);
    ctx->pc = 0x333D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333D18u;
    // 0x333d1c: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x333D18u, 0x333D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333D20u;
label_333d20:
    // 0x333d20: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x333d20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x333d24: 0x8c629dc0  lw          $v0, -0x6240($v1)
    ctx->pc = 0x333d24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3D9DC0u));
    // 0x333d28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x333D28u;
    {
        const bool branch_taken_0x333d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x333d28) {
            ctx->pc = 0x333D38u;
            goto label_333d38;
        }
    }
    ctx->pc = 0x333D30u;
    // 0x333d30: 0xc0cceb6  jal         func_333AD8
    ctx->pc = 0x333D30u;
    SET_GPR_U32(ctx, 31, 0x333D38u);
    ctx->pc = 0x333AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333AD8u, 0x333D30u, 0x333D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333D38u;
label_333d38:
    // 0x333d38: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x333D38u;
    {
        const bool branch_taken_0x333d38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x333d38) {
            ctx->pc = 0x333D50u;
            goto label_333d50;
        }
    }
    ctx->pc = 0x333D40u;
    // 0x333d40: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x333D40u;
    {
        const bool branch_taken_0x333d40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x333d40) {
            ctx->pc = 0x333D50u;
            goto label_333d50;
        }
    }
    ctx->pc = 0x333D48u;
    // 0x333d48: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x333D48u;
    {
        const bool branch_taken_0x333d48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x333d48) {
            ctx->pc = 0x333D58u;
            goto label_333d58;
        }
    }
    ctx->pc = 0x333D50u;
label_333d50:
    // 0x333d50: 0xc0cceb6  jal         func_333AD8
    ctx->pc = 0x333D50u;
    SET_GPR_U32(ctx, 31, 0x333D58u);
    ctx->pc = 0x333AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333AD8u, 0x333D50u, 0x333D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333D58u;
label_333d58:
    // 0x333d58: 0x12000038  beqz        $s0, . + 4 + (0x38 << 2)
    ctx->pc = 0x333D58u;
    {
        const bool branch_taken_0x333d58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x333D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333D58u;
        // 0x333d5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333d58) {
            ctx->pc = 0x333E3Cu;
            goto label_333e3c;
        }
    }
    ctx->pc = 0x333D60u;
    // 0x333d60: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x333D60u;
    {
        const bool branch_taken_0x333d60 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x333D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333D60u;
        // 0x333d64: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333d60) {
            ctx->pc = 0x333D78u;
            goto label_333d78;
        }
    }
    ctx->pc = 0x333D68u;
    // 0x333d68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x333d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333d6c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x333D6Cu;
    {
        const bool branch_taken_0x333d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333D6Cu;
        // 0x333d70: 0x248445e0  addiu       $a0, $a0, 0x45E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333d6c) {
            ctx->pc = 0x333D8Cu;
            goto label_333d8c;
        }
    }
    ctx->pc = 0x333D74u;
    // 0x333d74: 0x0  nop
    ctx->pc = 0x333d74u;
    // NOP
label_333d78:
    // 0x333d78: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x333D78u;
    {
        const bool branch_taken_0x333d78 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x333D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333D78u;
        // 0x333d7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333d78) {
            ctx->pc = 0x333DA0u;
            goto label_333da0;
        }
    }
    ctx->pc = 0x333D80u;
    // 0x333d80: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x333d80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x333d84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x333d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333d88: 0x24844610  addiu       $a0, $a0, 0x4610
    ctx->pc = 0x333d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17936));
label_333d8c:
    // 0x333d8c: 0xc0c9814  jal         func_326050
    ctx->pc = 0x333D8Cu;
    SET_GPR_U32(ctx, 31, 0x333D94u);
    ctx->pc = 0x326050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326050u, 0x333D8Cu, 0x333D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333D94u;
label_333d94:
    // 0x333d94: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x333D94u;
    {
        const bool branch_taken_0x333d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333D94u;
        // 0x333d98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333d94) {
            ctx->pc = 0x333E3Cu;
            goto label_333e3c;
        }
    }
    ctx->pc = 0x333D9Cu;
    // 0x333d9c: 0x0  nop
    ctx->pc = 0x333d9cu;
    // NOP
label_333da0:
    // 0x333da0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x333da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333da4: 0x269463c0  addiu       $s4, $s4, 0x63C0
    ctx->pc = 0x333da4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 25536));
    // 0x333da8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x333DA8u;
    SET_GPR_U32(ctx, 31, 0x333DB0u);
    ctx->pc = 0x333DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333DA8u;
    // 0x333dac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x333DA8u, 0x333DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333DB0u;
label_333db0:
    // 0x333db0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x333db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333db4: 0xc0ccdbe  jal         func_3336F8
    ctx->pc = 0x333DB4u;
    SET_GPR_U32(ctx, 31, 0x333DBCu);
    ctx->pc = 0x333DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333DB4u;
    // 0x333db8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3336F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3336F8u, 0x333DB4u, 0x333DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333DBCu;
label_333dbc:
    // 0x333dbc: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x333DBCu;
    {
        const bool branch_taken_0x333dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x333dbc) {
            ctx->pc = 0x333DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333DBCu;
            // 0x333dc0: 0x26700009  addiu       $s0, $s3, 0x9 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333DF0u;
            goto label_333df0;
        }
    }
    ctx->pc = 0x333DC4u;
    // 0x333dc4: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x333dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x333dc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x333dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333dcc: 0xc0c9814  jal         func_326050
    ctx->pc = 0x333DCCu;
    SET_GPR_U32(ctx, 31, 0x333DD4u);
    ctx->pc = 0x333DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333DCCu;
    // 0x333dd0: 0x24844640  addiu       $a0, $a0, 0x4640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326050u, 0x333DCCu, 0x333DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333DD4u;
label_333dd4:
    // 0x333dd4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x333dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x333dd8: 0x24a54668  addiu       $a1, $a1, 0x4668
    ctx->pc = 0x333dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18024));
    // 0x333ddc: 0xc0cca02  jal         func_332808
    ctx->pc = 0x333DDCu;
    SET_GPR_U32(ctx, 31, 0x333DE4u);
    ctx->pc = 0x333DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333DDCu;
    // 0x333de0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332808u, 0x333DDCu, 0x333DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333DE4u;
label_333de4:
    // 0x333de4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x333DE4u;
    {
        const bool branch_taken_0x333de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333DE4u;
        // 0x333de8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333de4) {
            ctx->pc = 0x333E3Cu;
            goto label_333e3c;
        }
    }
    ctx->pc = 0x333DECu;
    // 0x333dec: 0x0  nop
    ctx->pc = 0x333decu;
    // NOP
label_333df0:
    // 0x333df0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x333df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333df4: 0x230001b  divu        $zero, $s1, $s0
    ctx->pc = 0x333df4u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x333df8: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x333df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x333dfc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x333dfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333e00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x333e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333e04: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x333E04u;
    {
        const bool branch_taken_0x333e04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x333e04) {
            ctx->pc = 0x333E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333E04u;
            // 0x333e08: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x333E0Cu;
            goto label_333e0c;
        }
    }
    ctx->pc = 0x333E0Cu;
label_333e0c:
    // 0x333e0c: 0x8812  mflo        $s1
    ctx->pc = 0x333e0cu;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x333e10: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x333e10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333e14: 0xc0ccd58  jal         func_333560
    ctx->pc = 0x333E14u;
    SET_GPR_U32(ctx, 31, 0x333E1Cu);
    ctx->pc = 0x333E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333E14u;
    // 0x333e18: 0x1188c0  sll         $s1, $s1, 3 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333560u, 0x333E14u, 0x333E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333E1Cu;
label_333e1c:
    // 0x333e1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x333e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333e20: 0xc0cce20  jal         func_333880
    ctx->pc = 0x333E20u;
    SET_GPR_U32(ctx, 31, 0x333E28u);
    ctx->pc = 0x333E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333E20u;
    // 0x333e24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333880u, 0x333E20u, 0x333E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333E28u;
label_333e28:
    // 0x333e28: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x333E28u;
    {
        const bool branch_taken_0x333e28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x333e28) {
            ctx->pc = 0x333E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333E28u;
            // 0x333e2c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x333E30u;
            goto label_333e30;
        }
    }
    ctx->pc = 0x333E30u;
label_333e30:
    // 0x333e30: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x333e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x333e34: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x333e34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x333e38: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x333e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_333e3c:
    // 0x333e3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x333e3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333e40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x333e40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x333e44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x333e44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x333e48: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x333e48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x333e4c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x333e4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x333e50: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x333e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x333e54: 0x3e00008  jr          $ra
    ctx->pc = 0x333E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333E54u;
        // 0x333e58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333E5Cu;
    // 0x333e5c: 0x0  nop
    ctx->pc = 0x333e5cu;
    // NOP
    // 0x333e60: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x333e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x333e64: 0x0  nop
    ctx->pc = 0x333e64u;
    // NOP
    ctx->pc = 0x333e68u;
}
