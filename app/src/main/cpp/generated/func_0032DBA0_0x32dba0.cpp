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

// Function: func_0032DBA0
// Address: 0x32dba0 - 0x32dc58
void func_0032DBA0_0x32dba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032DBA0_0x32dba0");
#endif

    switch (ctx->pc) {
        case 0x32dba0u: goto label_32dba0;
        case 0x32dba4u: goto label_32dba4;
        case 0x32dba8u: goto label_32dba8;
        case 0x32dbacu: goto label_32dbac;
        case 0x32dbb0u: goto label_32dbb0;
        case 0x32dbb4u: goto label_32dbb4;
        case 0x32dbb8u: goto label_32dbb8;
        case 0x32dbbcu: goto label_32dbbc;
        case 0x32dbc0u: goto label_32dbc0;
        case 0x32dbc4u: goto label_32dbc4;
        case 0x32dbc8u: goto label_32dbc8;
        case 0x32dbccu: goto label_32dbcc;
        case 0x32dbd0u: goto label_32dbd0;
        case 0x32dbd4u: goto label_32dbd4;
        case 0x32dbd8u: goto label_32dbd8;
        case 0x32dbdcu: goto label_32dbdc;
        case 0x32dbe0u: goto label_32dbe0;
        case 0x32dbe4u: goto label_32dbe4;
        case 0x32dbe8u: goto label_32dbe8;
        case 0x32dbecu: goto label_32dbec;
        case 0x32dbf0u: goto label_32dbf0;
        case 0x32dbf4u: goto label_32dbf4;
        case 0x32dbf8u: goto label_32dbf8;
        case 0x32dbfcu: goto label_32dbfc;
        case 0x32dc00u: goto label_32dc00;
        case 0x32dc04u: goto label_32dc04;
        case 0x32dc08u: goto label_32dc08;
        case 0x32dc0cu: goto label_32dc0c;
        case 0x32dc10u: goto label_32dc10;
        case 0x32dc14u: goto label_32dc14;
        case 0x32dc18u: goto label_32dc18;
        case 0x32dc1cu: goto label_32dc1c;
        case 0x32dc20u: goto label_32dc20;
        case 0x32dc24u: goto label_32dc24;
        case 0x32dc28u: goto label_32dc28;
        case 0x32dc2cu: goto label_32dc2c;
        case 0x32dc30u: goto label_32dc30;
        case 0x32dc34u: goto label_32dc34;
        case 0x32dc38u: goto label_32dc38;
        case 0x32dc3cu: goto label_32dc3c;
        case 0x32dc40u: goto label_32dc40;
        case 0x32dc44u: goto label_32dc44;
        case 0x32dc48u: goto label_32dc48;
        case 0x32dc4cu: goto label_32dc4c;
        case 0x32dc50u: goto label_32dc50;
        case 0x32dc54u: goto label_32dc54;
        default: break;
    }

    ctx->pc = 0x32dba0u;

label_32dba0:
    // 0x32dba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32dba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_32dba4:
    // 0x32dba4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32dba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_32dba8:
    // 0x32dba8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32dba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32dbac:
    // 0x32dbac: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_32dbb0:
    if (ctx->pc == 0x32DBB0u) {
        ctx->pc = 0x32DBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DBACu;
        // 0x32dbb0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32DBB4u;
        goto label_32dbb4;
    }
    ctx->pc = 0x32DBACu;
    {
        const bool branch_taken_0x32dbac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x32DBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DBACu;
        // 0x32dbb0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dbac) {
            ctx->pc = 0x32DBD0u;
            goto label_32dbd0;
        }
    }
    ctx->pc = 0x32DBB4u;
label_32dbb4:
    // 0x32dbb4: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32dbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_32dbb8:
    // 0x32dbb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32dbb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32dbbc:
    // 0x32dbbc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32dbbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_32dbc0:
    // 0x32dbc0: 0x24842b20  addiu       $a0, $a0, 0x2B20
    ctx->pc = 0x32dbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11040));
label_32dbc4:
    // 0x32dbc4: 0x80cff2c  j           func_33FCB0
label_32dbc8:
    if (ctx->pc == 0x32DBC8u) {
        ctx->pc = 0x32DBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DBC4u;
        // 0x32dbc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32DBCCu;
        goto label_32dbcc;
    }
    ctx->pc = 0x32DBC4u;
    ctx->pc = 0x32DBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DBC4u;
    // 0x32dbc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCB0u, 0x32DBC4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32DBCCu;
label_32dbcc:
    // 0x32dbcc: 0x0  nop
    ctx->pc = 0x32dbccu;
    // NOP
label_32dbd0:
    // 0x32dbd0: 0xc0cbbc0  jal         func_32EF00
label_32dbd4:
    if (ctx->pc == 0x32DBD4u) {
        ctx->pc = 0x32DBD8u;
        goto label_32dbd8;
    }
    ctx->pc = 0x32DBD0u;
    SET_GPR_U32(ctx, 31, 0x32DBD8u);
    ctx->pc = 0x32EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EF00u, 0x32DBD0u, 0x32DBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DBD8u;
label_32dbd8:
    // 0x32dbd8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x32dbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_32dbdc:
    // 0x32dbdc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_32dbe0:
    if (ctx->pc == 0x32DBE0u) {
        ctx->pc = 0x32DBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DBDCu;
        // 0x32dbe0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32DBE4u;
        goto label_32dbe4;
    }
    ctx->pc = 0x32DBDCu;
    {
        const bool branch_taken_0x32dbdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DBDCu;
        // 0x32dbe0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dbdc) {
            ctx->pc = 0x32DBECu;
            goto label_32dbec;
        }
    }
    ctx->pc = 0x32DBE4u;
label_32dbe4:
    // 0x32dbe4: 0xc0ca0b4  jal         func_3282D0
label_32dbe8:
    if (ctx->pc == 0x32DBE8u) {
        ctx->pc = 0x32DBECu;
        goto label_32dbec;
    }
    ctx->pc = 0x32DBE4u;
    SET_GPR_U32(ctx, 31, 0x32DBECu);
    ctx->pc = 0x3282D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3282D0u, 0x32DBE4u, 0x32DBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DBECu;
label_32dbec:
    // 0x32dbec: 0xc0cff1c  jal         func_33FC70
label_32dbf0:
    if (ctx->pc == 0x32DBF0u) {
        ctx->pc = 0x32DBF4u;
        goto label_32dbf4;
    }
    ctx->pc = 0x32DBECu;
    SET_GPR_U32(ctx, 31, 0x32DBF4u);
    ctx->pc = 0x33FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FC70u, 0x32DBECu, 0x32DBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DBF4u;
label_32dbf4:
    // 0x32dbf4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x32dbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_32dbf8:
    // 0x32dbf8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_32dbfc:
    if (ctx->pc == 0x32DBFCu) {
        ctx->pc = 0x32DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DBF8u;
        // 0x32dbfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32DC00u;
        goto label_32dc00;
    }
    ctx->pc = 0x32DBF8u;
    {
        const bool branch_taken_0x32dbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DBF8u;
        // 0x32dbfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dbf8) {
            ctx->pc = 0x32DC08u;
            goto label_32dc08;
        }
    }
    ctx->pc = 0x32DC00u;
label_32dc00:
    // 0x32dc00: 0xc0cbd2a  jal         func_32F4A8
label_32dc04:
    if (ctx->pc == 0x32DC04u) {
        ctx->pc = 0x32DC08u;
        goto label_32dc08;
    }
    ctx->pc = 0x32DC00u;
    SET_GPR_U32(ctx, 31, 0x32DC08u);
    ctx->pc = 0x32F4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F4A8u, 0x32DC00u, 0x32DC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DC08u;
label_32dc08:
    // 0x32dc08: 0x8e0301e0  lw          $v1, 0x1E0($s0)
    ctx->pc = 0x32dc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
label_32dc0c:
    // 0x32dc0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32dc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32dc10:
    // 0x32dc10: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
label_32dc14:
    if (ctx->pc == 0x32DC14u) {
        ctx->pc = 0x32DC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DC10u;
        // 0x32dc14: 0xae0001ac  sw          $zero, 0x1AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32DC18u;
        goto label_32dc18;
    }
    ctx->pc = 0x32DC10u;
    {
        const bool branch_taken_0x32dc10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32dc10) {
            ctx->pc = 0x32DC14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32DC10u;
            // 0x32dc14: 0xae0001ac  sw          $zero, 0x1AC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32DC3Cu;
            goto label_32dc3c;
        }
    }
    ctx->pc = 0x32DC18u;
label_32dc18:
    // 0x32dc18: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x32dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_32dc1c:
    // 0x32dc1c: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x32dc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_32dc20:
    // 0x32dc20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_32dc24:
    if (ctx->pc == 0x32DC24u) {
        ctx->pc = 0x32DC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DC20u;
        // 0x32dc24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32DC28u;
        goto label_32dc28;
    }
    ctx->pc = 0x32DC20u;
    {
        const bool branch_taken_0x32dc20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DC20u;
        // 0x32dc24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dc20) {
            ctx->pc = 0x32DC38u;
            goto label_32dc38;
        }
    }
    ctx->pc = 0x32DC28u;
label_32dc28:
    // 0x32dc28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32dc2c:
    // 0x32dc2c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x32dc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_32dc30:
    // 0x32dc30: 0x60f809  jalr        $v1
label_32dc34:
    if (ctx->pc == 0x32DC34u) {
        ctx->pc = 0x32DC38u;
        goto label_32dc38;
    }
    ctx->pc = 0x32DC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x32DC38u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32DC30u, 0x32DC38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32DC38u;
label_32dc38:
    // 0x32dc38: 0xae0001ac  sw          $zero, 0x1AC($s0)
    ctx->pc = 0x32dc38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 0));
label_32dc3c:
    // 0x32dc3c: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x32dc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_32dc40:
    // 0x32dc40: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x32dc40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_32dc44:
    // 0x32dc44: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32dc44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_32dc48:
    // 0x32dc48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32dc48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32dc4c:
    // 0x32dc4c: 0x80cff22  j           func_33FC88
label_32dc50:
    if (ctx->pc == 0x32DC50u) {
        ctx->pc = 0x32DC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DC4Cu;
        // 0x32dc50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32DC54u;
        goto label_32dc54;
    }
    ctx->pc = 0x32DC4Cu;
    ctx->pc = 0x32DC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DC4Cu;
    // 0x32dc50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FC88u, 0x32DC4Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32DC54u;
label_32dc54:
    // 0x32dc54: 0x0  nop
    ctx->pc = 0x32dc54u;
    // NOP
    ctx->pc = 0x32dc58u;
}
