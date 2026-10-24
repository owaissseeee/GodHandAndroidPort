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

// Function: __fixunssfdi
// Address: 0x31dba0 - 0x31dc98
void ps2___fixunssfdi_0x31dba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___fixunssfdi_0x31dba0");
#endif

    switch (ctx->pc) {
        case 0x31dbb8u: goto label_31dbb8;
        case 0x31dbc8u: goto label_31dbc8;
        case 0x31dbe0u: goto label_31dbe0;
        case 0x31dbe8u: goto label_31dbe8;
        case 0x31dbfcu: goto label_31dbfc;
        case 0x31dc10u: goto label_31dc10;
        case 0x31dc1cu: goto label_31dc1c;
        case 0x31dc28u: goto label_31dc28;
        case 0x31dc3cu: goto label_31dc3c;
        case 0x31dc4cu: goto label_31dc4c;
        case 0x31dc54u: goto label_31dc54;
        case 0x31dc6cu: goto label_31dc6c;
        default: break;
    }

    ctx->pc = 0x31dba0u;

    // 0x31dba0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31dba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31dba4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x31dba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x31dba8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x31dba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x31dbac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x31dbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x31dbb0: 0xc0c7b74  jal         func_31EDD0
    ctx->pc = 0x31DBB0u;
    SET_GPR_U32(ctx, 31, 0x31DBB8u);
    ctx->pc = 0x31DBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DBB0u;
    // 0x31dbb4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EDD0u, 0x31DBB0u, 0x31DBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DBB8u;
label_31dbb8:
    // 0x31dbb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31dbb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dbbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31dbbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dbc0: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x31DBC0u;
    SET_GPR_U32(ctx, 31, 0x31DBC8u);
    ctx->pc = 0x31DBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DBC0u;
    // 0x31dbc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x31DBC0u, 0x31DBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DBC8u;
label_31dbc8:
    // 0x31dbc8: 0x440002c  bltz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x31DBC8u;
    {
        const bool branch_taken_0x31dbc8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x31DBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DBC8u;
        // 0x31dbcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dbc8) {
            ctx->pc = 0x31DC7Cu;
            goto label_31dc7c;
        }
    }
    ctx->pc = 0x31DBD0u;
    // 0x31dbd0: 0x3405f7c0  ori         $a1, $zero, 0xF7C0
    ctx->pc = 0x31dbd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63424);
    // 0x31dbd4: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x31dbd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x31dbd8: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x31DBD8u;
    SET_GPR_U32(ctx, 31, 0x31DBE0u);
    ctx->pc = 0x31DBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DBD8u;
    // 0x31dbdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x31DBD8u, 0x31DBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DBE0u;
label_31dbe0:
    // 0x31dbe0: 0xc0c7a84  jal         func_31EA10
    ctx->pc = 0x31DBE0u;
    SET_GPR_U32(ctx, 31, 0x31DBE8u);
    ctx->pc = 0x31DBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DBE0u;
    // 0x31dbe4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EA10u, 0x31DBE0u, 0x31DBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DBE8u;
label_31dbe8:
    // 0x31dbe8: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x31dbe8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31dbec: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31DBECu;
    {
        const bool branch_taken_0x31dbec = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x31DBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DBECu;
        // 0x31dbf0: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dbec) {
            ctx->pc = 0x31DC04u;
            goto label_31dc04;
        }
    }
    ctx->pc = 0x31DBF4u;
    // 0x31dbf4: 0xc0c7726  jal         func_31DC98
    ctx->pc = 0x31DBF4u;
    SET_GPR_U32(ctx, 31, 0x31DBFCu);
    ctx->pc = 0x31DBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DBF4u;
    // 0x31dbf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DC98u, 0x31DBF4u, 0x31DBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DBFCu;
label_31dbfc:
    // 0x31dbfc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31DBFCu;
    {
        const bool branch_taken_0x31dbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DBFCu;
        // 0x31dc00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dbfc) {
            ctx->pc = 0x31DC20u;
            goto label_31dc20;
        }
    }
    ctx->pc = 0x31DC04u;
label_31dc04:
    // 0x31dc04: 0x10207a  dsrl        $a0, $s0, 1
    ctx->pc = 0x31dc04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> 1);
    // 0x31dc08: 0xc0c7726  jal         func_31DC98
    ctx->pc = 0x31DC08u;
    SET_GPR_U32(ctx, 31, 0x31DC10u);
    ctx->pc = 0x31DC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DC08u;
    // 0x31dc0c: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DC98u, 0x31DC08u, 0x31DC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DC10u;
label_31dc10:
    // 0x31dc10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31dc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dc14: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x31DC14u;
    SET_GPR_U32(ctx, 31, 0x31DC1Cu);
    ctx->pc = 0x31DC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DC14u;
    // 0x31dc18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x31DC14u, 0x31DC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DC1Cu;
label_31dc1c:
    // 0x31dc1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31dc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31dc20:
    // 0x31dc20: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x31DC20u;
    SET_GPR_U32(ctx, 31, 0x31DC28u);
    ctx->pc = 0x31DC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DC20u;
    // 0x31dc24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x31DC20u, 0x31DC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DC28u;
label_31dc28:
    // 0x31dc28: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x31dc28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dc2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31dc2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dc30: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31dc30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dc34: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x31DC34u;
    SET_GPR_U32(ctx, 31, 0x31DC3Cu);
    ctx->pc = 0x31DC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DC34u;
    // 0x31dc38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x31DC34u, 0x31DC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DC3Cu;
label_31dc3c:
    // 0x31dc3c: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31DC3Cu;
    {
        const bool branch_taken_0x31dc3c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x31DC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DC3Cu;
        // 0x31dc40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dc3c) {
            ctx->pc = 0x31DC64u;
            goto label_31dc64;
        }
    }
    ctx->pc = 0x31DC44u;
    // 0x31dc44: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x31DC44u;
    SET_GPR_U32(ctx, 31, 0x31DC4Cu);
    ctx->pc = 0x31DC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DC44u;
    // 0x31dc48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x31DC44u, 0x31DC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DC4Cu;
label_31dc4c:
    // 0x31dc4c: 0xc0c7a84  jal         func_31EA10
    ctx->pc = 0x31DC4Cu;
    SET_GPR_U32(ctx, 31, 0x31DC54u);
    ctx->pc = 0x31DC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DC4Cu;
    // 0x31dc50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EA10u, 0x31DC4Cu, 0x31DC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DC54u;
label_31dc54:
    // 0x31dc54: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31dc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31dc58: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x31dc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x31dc5c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31DC5Cu;
    {
        const bool branch_taken_0x31dc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DC5Cu;
        // 0x31dc60: 0x202802f  dsubu       $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dc5c) {
            ctx->pc = 0x31DC78u;
            goto label_31dc78;
        }
    }
    ctx->pc = 0x31DC64u;
label_31dc64:
    // 0x31dc64: 0xc0c7a84  jal         func_31EA10
    ctx->pc = 0x31DC64u;
    SET_GPR_U32(ctx, 31, 0x31DC6Cu);
    ctx->pc = 0x31DC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DC64u;
    // 0x31dc68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EA10u, 0x31DC64u, 0x31DC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DC6Cu;
label_31dc6c:
    // 0x31dc6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31dc6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31dc70: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x31dc70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x31dc74: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x31dc74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_31dc78:
    // 0x31dc78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x31dc78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31dc7c:
    // 0x31dc7c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x31dc7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31dc80: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x31dc80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31dc84: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x31dc84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31dc88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31dc88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31dc8c: 0x3e00008  jr          $ra
    ctx->pc = 0x31DC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DC8Cu;
        // 0x31dc90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31DC94u;
    // 0x31dc94: 0x0  nop
    ctx->pc = 0x31dc94u;
    // NOP
    ctx->pc = 0x31dc98u;
}
