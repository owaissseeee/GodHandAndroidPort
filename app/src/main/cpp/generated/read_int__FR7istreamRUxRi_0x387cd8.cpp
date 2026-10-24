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

// Function: read_int__FR7istreamRUxRi
// Address: 0x387cd8 - 0x387f78
void read_int__FR7istreamRUxRi_0x387cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("read_int__FR7istreamRUxRi_0x387cd8");
#endif

    switch (ctx->pc) {
        case 0x387d40u: goto label_387d40;
        case 0x387d64u: goto label_387d64;
        case 0x387d88u: goto label_387d88;
        case 0x387dc8u: goto label_387dc8;
        case 0x387dfcu: goto label_387dfc;
        case 0x387e0cu: goto label_387e0c;
        case 0x387e30u: goto label_387e30;
        case 0x387e54u: goto label_387e54;
        case 0x387e90u: goto label_387e90;
        case 0x387edcu: goto label_387edc;
        case 0x387ef8u: goto label_387ef8;
        case 0x387f08u: goto label_387f08;
        default: break;
    }

    ctx->pc = 0x387cd8u;

    // 0x387cd8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x387cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x387cdc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x387cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x387ce0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x387ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x387ce4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x387ce4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387ce8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x387ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x387cec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x387cecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387cf0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x387cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x387cf4: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x387cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x387cf8: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x387cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x387cfc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x387cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x387d00: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x387d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x387d04: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x387d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x387d08: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x387d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x387d0c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x387d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x387d10: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x387d10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x387d14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x387D14u;
    {
        const bool branch_taken_0x387d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x387D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387D14u;
        // 0x387d18: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387d14) {
            ctx->pc = 0x387D2Cu;
            goto label_387d2c;
        }
    }
    ctx->pc = 0x387D1Cu;
    // 0x387d1c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x387d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x387d20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x387d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387d24: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x387D24u;
    {
        const bool branch_taken_0x387d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387D24u;
        // 0x387d28: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387d24) {
            ctx->pc = 0x387D68u;
            goto label_387d68;
        }
    }
    ctx->pc = 0x387D2Cu;
label_387d2c:
    // 0x387d2c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x387d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x387d30: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x387D30u;
    {
        const bool branch_taken_0x387d30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x387d30) {
            ctx->pc = 0x387D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387D30u;
            // 0x387d34: 0xdc620010  ld          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387D48u;
            goto label_387d48;
        }
    }
    ctx->pc = 0x387D38u;
    // 0x387d38: 0xc0e249a  jal         func_389268
    ctx->pc = 0x387D38u;
    SET_GPR_U32(ctx, 31, 0x387D40u);
    ctx->pc = 0x389268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389268u, 0x387D38u, 0x387D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387D40u;
label_387d40:
    // 0x387d40: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x387d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x387d44: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x387d44u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_387d48:
    // 0x387d48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x387d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x387d4c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x387d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x387d50: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x387d50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x387d54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x387D54u;
    {
        const bool branch_taken_0x387d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x387D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387D54u;
        // 0x387d58: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387d54) {
            ctx->pc = 0x387D68u;
            goto label_387d68;
        }
    }
    ctx->pc = 0x387D5Cu;
    // 0x387d5c: 0xc0e24e6  jal         func_389398
    ctx->pc = 0x387D5Cu;
    SET_GPR_U32(ctx, 31, 0x387D64u);
    ctx->pc = 0x387D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387D5Cu;
    // 0x387d60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389398u, 0x387D5Cu, 0x387D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387D64u;
label_387d64:
    // 0x387d64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x387d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_387d68:
    // 0x387d68: 0x10800076  beqz        $a0, . + 4 + (0x76 << 2)
    ctx->pc = 0x387D68u;
    {
        const bool branch_taken_0x387d68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x387D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387D68u;
        // 0x387d6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387d68) {
            ctx->pc = 0x387F44u;
            goto label_387f44;
        }
    }
    ctx->pc = 0x387D70u;
    // 0x387d70: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x387d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x387d74: 0x2413000a  addiu       $s3, $zero, 0xA
    ctx->pc = 0x387d74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x387d78: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x387d78u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387d7c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x387d7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x387d80: 0xc0e1d6a  jal         func_3875A8
    ctx->pc = 0x387D80u;
    SET_GPR_U32(ctx, 31, 0x387D88u);
    ctx->pc = 0x387D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387D80u;
    // 0x387d84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3875A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3875A8u, 0x387D80u, 0x387D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387D88u;
label_387d88:
    // 0x387d88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x387d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387d8c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x387d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x387d90: 0x10a20067  beq         $a1, $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x387D90u;
    {
        const bool branch_taken_0x387d90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x387D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387D90u;
        // 0x387d94: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387d90) {
            ctx->pc = 0x387F30u;
            goto label_387f30;
        }
    }
    ctx->pc = 0x387D98u;
    // 0x387d98: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x387D98u;
    {
        const bool branch_taken_0x387d98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x387D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387D98u;
        // 0x387d9c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387d98) {
            ctx->pc = 0x387DA8u;
            goto label_387da8;
        }
    }
    ctx->pc = 0x387DA0u;
    // 0x387da0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x387DA0u;
    {
        const bool branch_taken_0x387da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387DA0u;
        // 0x387da4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387da0) {
            ctx->pc = 0x387DC0u;
            goto label_387dc0;
        }
    }
    ctx->pc = 0x387DA8u;
label_387da8:
    // 0x387da8: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x387da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x387dac: 0x54a20007  bnel        $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x387DACu;
    {
        const bool branch_taken_0x387dac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x387dac) {
            ctx->pc = 0x387DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387DACu;
            // 0x387db0: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387DCCu;
            goto label_387dcc;
        }
    }
    ctx->pc = 0x387DB4u;
    // 0x387db4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x387db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x387db8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x387db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387dbc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x387dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_387dc0:
    // 0x387dc0: 0xc0e1d6a  jal         func_3875A8
    ctx->pc = 0x387DC0u;
    SET_GPR_U32(ctx, 31, 0x387DC8u);
    ctx->pc = 0x387DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387DC0u;
    // 0x387dc4: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3875A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3875A8u, 0x387DC0u, 0x387DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387DC8u;
label_387dc8:
    // 0x387dc8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x387dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_387dcc:
    // 0x387dcc: 0x50b00059  beql        $a1, $s0, . + 4 + (0x59 << 2)
    ctx->pc = 0x387DCCu;
    {
        const bool branch_taken_0x387dcc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        if (branch_taken_0x387dcc) {
            ctx->pc = 0x387DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387DCCu;
            // 0x387dd0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387F34u;
            goto label_387f34;
        }
    }
    ctx->pc = 0x387DD4u;
    // 0x387dd4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x387dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x387dd8: 0xdc430010  ld          $v1, 0x10($v0)
    ctx->pc = 0x387dd8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x387ddc: 0x30630070  andi        $v1, $v1, 0x70
    ctx->pc = 0x387ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)112);
    // 0x387de0: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x387DE0u;
    {
        const bool branch_taken_0x387de0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x387DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387DE0u;
        // 0x387de4: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387de0) {
            ctx->pc = 0x387E5Cu;
            goto label_387e5c;
        }
    }
    ctx->pc = 0x387DE8u;
    // 0x387de8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x387de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x387dec: 0x54a20022  bnel        $a1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x387DECu;
    {
        const bool branch_taken_0x387dec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x387dec) {
            ctx->pc = 0x387DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387DECu;
            // 0x387df0: 0xfe800000  sd          $zero, 0x0($s4) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387E78u;
            goto label_387e78;
        }
    }
    ctx->pc = 0x387DF4u;
    // 0x387df4: 0xc0e3ab8  jal         func_38EAE0
    ctx->pc = 0x387DF4u;
    SET_GPR_U32(ctx, 31, 0x387DFCu);
    ctx->pc = 0x387DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387DF4u;
    // 0x387df8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EAE0u, 0x387DF4u, 0x387DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387DFCu;
label_387dfc:
    // 0x387dfc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x387dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387e00: 0x14b00004  bne         $a1, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x387E00u;
    {
        const bool branch_taken_0x387e00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 16));
        ctx->pc = 0x387E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387E00u;
        // 0x387e04: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387e00) {
            ctx->pc = 0x387E14u;
            goto label_387e14;
        }
    }
    ctx->pc = 0x387E08u;
    // 0x387e08: 0xfe800000  sd          $zero, 0x0($s4)
    ctx->pc = 0x387e08u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 0));
label_387e0c:
    // 0x387e0c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x387E0Cu;
    {
        const bool branch_taken_0x387e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387E0Cu;
        // 0x387e10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387e0c) {
            ctx->pc = 0x387F44u;
            goto label_387f44;
        }
    }
    ctx->pc = 0x387E14u;
label_387e14:
    // 0x387e14: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x387E14u;
    {
        const bool branch_taken_0x387e14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x387E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387E14u;
        // 0x387e18: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387e14) {
            ctx->pc = 0x387E24u;
            goto label_387e24;
        }
    }
    ctx->pc = 0x387E1Cu;
    // 0x387e1c: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x387E1Cu;
    {
        const bool branch_taken_0x387e1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x387E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387E1Cu;
        // 0x387e20: 0x52e00  sll         $a1, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387e1c) {
            ctx->pc = 0x387E44u;
            goto label_387e44;
        }
    }
    ctx->pc = 0x387E24u;
label_387e24:
    // 0x387e24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x387e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387e28: 0xc0e3ab8  jal         func_38EAE0
    ctx->pc = 0x387E28u;
    SET_GPR_U32(ctx, 31, 0x387E30u);
    ctx->pc = 0x387E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387E28u;
    // 0x387e2c: 0x24130010  addiu       $s3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EAE0u, 0x387E28u, 0x387E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387E30u;
label_387e30:
    // 0x387e30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x387e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387e34: 0x50b0003f  beql        $a1, $s0, . + 4 + (0x3F << 2)
    ctx->pc = 0x387E34u;
    {
        const bool branch_taken_0x387e34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        if (branch_taken_0x387e34) {
            ctx->pc = 0x387E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387E34u;
            // 0x387e38: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387F34u;
            goto label_387f34;
        }
    }
    ctx->pc = 0x387E3Cu;
    // 0x387e3c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x387E3Cu;
    {
        const bool branch_taken_0x387e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387E3Cu;
        // 0x387e40: 0xfe800000  sd          $zero, 0x0($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387e3c) {
            ctx->pc = 0x387E78u;
            goto label_387e78;
        }
    }
    ctx->pc = 0x387E44u;
label_387e44:
    // 0x387e44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x387e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387e48: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x387e48u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x387e4c: 0xc0e2d18  jal         func_38B460
    ctx->pc = 0x387E4Cu;
    SET_GPR_U32(ctx, 31, 0x387E54u);
    ctx->pc = 0x387E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387E4Cu;
    // 0x387e50: 0x24130008  addiu       $s3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B460u, 0x387E4Cu, 0x387E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387E54u;
label_387e54:
    // 0x387e54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x387E54u;
    {
        const bool branch_taken_0x387e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387E54u;
        // 0x387e58: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387e54) {
            ctx->pc = 0x387E74u;
            goto label_387e74;
        }
    }
    ctx->pc = 0x387E5Cu;
label_387e5c:
    // 0x387e5c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x387E5Cu;
    {
        const bool branch_taken_0x387e5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x387E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387E5Cu;
        // 0x387e60: 0x38630020  xori        $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x387e5c) {
            ctx->pc = 0x387E6Cu;
            goto label_387e6c;
        }
    }
    ctx->pc = 0x387E64u;
    // 0x387e64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x387E64u;
    {
        const bool branch_taken_0x387e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387E64u;
        // 0x387e68: 0x24130010  addiu       $s3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387e64) {
            ctx->pc = 0x387E74u;
            goto label_387e74;
        }
    }
    ctx->pc = 0x387E6Cu;
label_387e6c:
    // 0x387e6c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x387e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x387e70: 0x43980a  movz        $s3, $v0, $v1
    ctx->pc = 0x387e70u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
label_387e74:
    // 0x387e74: 0xfe800000  sd          $zero, 0x0($s4)
    ctx->pc = 0x387e74u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 0));
label_387e78:
    // 0x387e78: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x387e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x387e7c: 0x10a2ffe3  beq         $a1, $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x387E7Cu;
    {
        const bool branch_taken_0x387e7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x387E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387E7Cu;
        // 0x387e80: 0x241e0005  addiu       $fp, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387e7c) {
            ctx->pc = 0x387E0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387e0c;
        }
    }
    ctx->pc = 0x387E84u;
    // 0x387e84: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x387e84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387e88: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x387e88u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x387e8c: 0x24a3ffd0  addiu       $v1, $a1, -0x30
    ctx->pc = 0x387e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
label_387e90:
    // 0x387e90: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x387e90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x387e94: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x387E94u;
    {
        const bool branch_taken_0x387e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387E94u;
        // 0x387e98: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387e94) {
            ctx->pc = 0x387EC0u;
            goto label_387ec0;
        }
    }
    ctx->pc = 0x387E9Cu;
    // 0x387e9c: 0x24a2ffbf  addiu       $v0, $a1, -0x41
    ctx->pc = 0x387e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967231));
    // 0x387ea0: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x387ea0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x387ea4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x387EA4u;
    {
        const bool branch_taken_0x387ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387EA4u;
        // 0x387ea8: 0x24b0ffc9  addiu       $s0, $a1, -0x37 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387ea4) {
            ctx->pc = 0x387EC0u;
            goto label_387ec0;
        }
    }
    ctx->pc = 0x387EACu;
    // 0x387eac: 0x24a3ff9f  addiu       $v1, $a1, -0x61
    ctx->pc = 0x387eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967199));
    // 0x387eb0: 0x241003e7  addiu       $s0, $zero, 0x3E7
    ctx->pc = 0x387eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x387eb4: 0x3c3182b  sltu        $v1, $fp, $v1
    ctx->pc = 0x387eb4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x387eb8: 0x24a2ffa9  addiu       $v0, $a1, -0x57
    ctx->pc = 0x387eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967209));
    // 0x387ebc: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x387ebcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_387ec0:
    // 0x387ec0: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x387ec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x387ec4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x387EC4u;
    {
        const bool branch_taken_0x387ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x387ec4) {
            ctx->pc = 0x387EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387EC4u;
            // 0x387ec8: 0xde850000  ld          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387EECu;
            goto label_387eec;
        }
    }
    ctx->pc = 0x387ECCu;
    // 0x387ecc: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x387eccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x387ed0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x387ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387ed4: 0xc0e2d18  jal         func_38B460
    ctx->pc = 0x387ED4u;
    SET_GPR_U32(ctx, 31, 0x387EDCu);
    ctx->pc = 0x387ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387ED4u;
    // 0x387ed8: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B460u, 0x387ED4u, 0x387EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387EDCu;
label_387edc:
    // 0x387edc: 0x12c0000f  beqz        $s6, . + 4 + (0xF << 2)
    ctx->pc = 0x387EDCu;
    {
        const bool branch_taken_0x387edc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x387EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387EDCu;
        // 0x387ee0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387edc) {
            ctx->pc = 0x387F1Cu;
            goto label_387f1c;
        }
    }
    ctx->pc = 0x387EE4u;
    // 0x387ee4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x387EE4u;
    {
        const bool branch_taken_0x387ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387EE4u;
        // 0x387ee8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387ee4) {
            ctx->pc = 0x387F48u;
            goto label_387f48;
        }
    }
    ctx->pc = 0x387EECu;
label_387eec:
    // 0x387eec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x387eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387ef0: 0xc0c7784  jal         func_31DE10
    ctx->pc = 0x387EF0u;
    SET_GPR_U32(ctx, 31, 0x387EF8u);
    ctx->pc = 0x387EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387EF0u;
    // 0x387ef4: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DE10u, 0x387EF0u, 0x387EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387EF8u;
label_387ef8:
    // 0x387ef8: 0x202102d  daddu       $v0, $s0, $v0
    ctx->pc = 0x387ef8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x387efc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x387efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387f00: 0xc0e3ab8  jal         func_38EAE0
    ctx->pc = 0x387F00u;
    SET_GPR_U32(ctx, 31, 0x387F08u);
    ctx->pc = 0x387F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387F00u;
    // 0x387f04: 0xfe820000  sd          $v0, 0x0($s4) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EAE0u, 0x387F00u, 0x387F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387F08u;
label_387f08:
    // 0x387f08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x387f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387f0c: 0x14b7ffe0  bne         $a1, $s7, . + 4 + (-0x20 << 2)
    ctx->pc = 0x387F0Cu;
    {
        const bool branch_taken_0x387f0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 23));
        ctx->pc = 0x387F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387F0Cu;
        // 0x387f10: 0x24a3ffd0  addiu       $v1, $a1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387f0c) {
            ctx->pc = 0x387E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387e90;
        }
    }
    ctx->pc = 0x387F14u;
    // 0x387f14: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x387F14u;
    {
        const bool branch_taken_0x387f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387F14u;
        // 0x387f18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387f14) {
            ctx->pc = 0x387F44u;
            goto label_387f44;
        }
    }
    ctx->pc = 0x387F1Cu;
label_387f1c:
    // 0x387f1c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x387f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x387f20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x387f20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387f24: 0x9083001a  lbu         $v1, 0x1A($a0)
    ctx->pc = 0x387f24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x387f28: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x387F28u;
    {
        const bool branch_taken_0x387f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387F28u;
        // 0x387f2c: 0x34630002  ori         $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x387f28) {
            ctx->pc = 0x387F40u;
            goto label_387f40;
        }
    }
    ctx->pc = 0x387F30u;
label_387f30:
    // 0x387f30: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x387f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_387f34:
    // 0x387f34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x387f34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387f38: 0x9083001a  lbu         $v1, 0x1A($a0)
    ctx->pc = 0x387f38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x387f3c: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x387f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
label_387f40:
    // 0x387f40: 0xa083001a  sb          $v1, 0x1A($a0)
    ctx->pc = 0x387f40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 3));
label_387f44:
    // 0x387f44: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x387f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_387f48:
    // 0x387f48: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x387f48u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x387f4c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x387f4cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x387f50: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x387f50u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x387f54: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x387f54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x387f58: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x387f58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x387f5c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x387f5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x387f60: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x387f60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x387f64: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x387f64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x387f68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x387f68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x387f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x387F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387F6Cu;
        // 0x387f70: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387F74u;
    // 0x387f74: 0x0  nop
    ctx->pc = 0x387f74u;
    // NOP
    ctx->pc = 0x387f78u;
}
