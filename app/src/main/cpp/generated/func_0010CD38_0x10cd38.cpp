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

// Function: func_0010CD38
// Address: 0x10cd38 - 0x10d0e0
void func_0010CD38_0x10cd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0010CD38_0x10cd38");
#endif

    switch (ctx->pc) {
        case 0x10cdbcu: goto label_10cdbc;
        case 0x10cdccu: goto label_10cdcc;
        case 0x10cdecu: goto label_10cdec;
        case 0x10ce24u: goto label_10ce24;
        case 0x10ce58u: goto label_10ce58;
        case 0x10ce7cu: goto label_10ce7c;
        case 0x10ce9cu: goto label_10ce9c;
        case 0x10ced0u: goto label_10ced0;
        case 0x10cef0u: goto label_10cef0;
        case 0x10cf24u: goto label_10cf24;
        case 0x10cf58u: goto label_10cf58;
        case 0x10cf7cu: goto label_10cf7c;
        case 0x10cfb0u: goto label_10cfb0;
        case 0x10d01cu: goto label_10d01c;
        case 0x10d058u: goto label_10d058;
        case 0x10d060u: goto label_10d060;
        case 0x10d0a8u: goto label_10d0a8;
        case 0x10d0b4u: goto label_10d0b4;
        case 0x10d0c0u: goto label_10d0c0;
        default: break;
    }

    ctx->pc = 0x10cd38u;

    // 0x10cd38: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10cd38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10cd3c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x10cd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x10cd40: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x10cd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x10cd44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10cd44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cd48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10cd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10cd4c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x10cd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x10cd50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10cd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10cd54: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x10cd54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x10cd58: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x10cd58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x10cd5c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10CD5Cu;
    {
        const bool branch_taken_0x10cd5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CD5Cu;
        // 0x10cd60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cd5c) {
            ctx->pc = 0x10CD74u;
            goto label_10cd74;
        }
    }
    ctx->pc = 0x10CD64u;
    // 0x10cd64: 0x10620095  beq         $v1, $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x10CD64u;
    {
        const bool branch_taken_0x10cd64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10CD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CD64u;
        // 0x10cd68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cd64) {
            ctx->pc = 0x10CFBCu;
            goto label_10cfbc;
        }
    }
    ctx->pc = 0x10CD6Cu;
    // 0x10cd6c: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x10CD6Cu;
    {
        const bool branch_taken_0x10cd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10cd6c) {
            ctx->pc = 0x10D0B8u;
            goto label_10d0b8;
        }
    }
    ctx->pc = 0x10CD74u;
label_10cd74:
    // 0x10cd74: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x10cd74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x10cd78: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x10CD78u;
    {
        const bool branch_taken_0x10cd78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10cd78) {
            ctx->pc = 0x10CD7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CD78u;
            // 0x10cd7c: 0xa60005e0  sh          $zero, 0x5E0($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CDC0u;
            goto label_10cdc0;
        }
    }
    ctx->pc = 0x10CD80u;
    // 0x10cd80: 0x8e020640  lw          $v0, 0x640($s0)
    ctx->pc = 0x10cd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1600)));
    // 0x10cd84: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x10CD84u;
    {
        const bool branch_taken_0x10cd84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10cd84) {
            ctx->pc = 0x10CD88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CD84u;
            // 0x10cd88: 0xa60005e0  sh          $zero, 0x5E0($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CDC0u;
            goto label_10cdc0;
        }
    }
    ctx->pc = 0x10CD8Cu;
    // 0x10cd8c: 0x944302fe  lhu         $v1, 0x2FE($v0)
    ctx->pc = 0x10cd8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
    // 0x10cd90: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x10cd90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x10cd94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10CD94u;
    {
        const bool branch_taken_0x10cd94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10CD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CD94u;
        // 0x10cd98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cd94) {
            ctx->pc = 0x10CDA4u;
            goto label_10cda4;
        }
    }
    ctx->pc = 0x10CD9Cu;
    // 0x10cd9c: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x10cd9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x10cda0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10cda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10cda4:
    // 0x10cda4: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x10cda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x10cda8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10CDA8u;
    {
        const bool branch_taken_0x10cda8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CDA8u;
        // 0x10cdac: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cda8) {
            ctx->pc = 0x10CDBCu;
            goto label_10cdbc;
        }
    }
    ctx->pc = 0x10CDB0u;
    // 0x10cdb0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x10cdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x10cdb4: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x10CDB4u;
    SET_GPR_U32(ctx, 31, 0x10CDBCu);
    ctx->pc = 0x10CDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CDB4u;
    // 0x10cdb8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x10CDB4u, 0x10CDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CDBCu;
label_10cdbc:
    // 0x10cdbc: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x10cdbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
label_10cdc0:
    // 0x10cdc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cdc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cdc4: 0xc049a3c  jal         func_1268F0
    ctx->pc = 0x10CDC4u;
    SET_GPR_U32(ctx, 31, 0x10CDCCu);
    ctx->pc = 0x10CDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CDC4u;
    // 0x10cdc8: 0xa60005e2  sh          $zero, 0x5E2($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1506), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1268F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1268F0u, 0x10CDC4u, 0x10CDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CDCCu;
label_10cdcc:
    // 0x10cdcc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x10cdccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x10cdd0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10cdd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10cdd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10cdd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10cdd8: 0x2453ee00  addiu       $s3, $v0, -0x1200
    ctx->pc = 0x10cdd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    // 0x10cddc: 0x8e051620  lw          $a1, 0x1620($s0)
    ctx->pc = 0x10cddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5664)));
    // 0x10cde0: 0xe60015c0  swc1        $f0, 0x15C0($s0)
    ctx->pc = 0x10cde0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5568), bits); }
    // 0x10cde4: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x10CDE4u;
    SET_GPR_U32(ctx, 31, 0x10CDECu);
    ctx->pc = 0x10CDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CDE4u;
    // 0x10cde8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x10CDE4u, 0x10CDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CDECu;
label_10cdec:
    // 0x10cdec: 0x920302f7  lbu         $v1, 0x2F7($s0)
    ctx->pc = 0x10cdecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x10cdf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10cdf4: 0xae001620  sw          $zero, 0x1620($s0)
    ctx->pc = 0x10cdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5664), GPR_U32(ctx, 0));
    // 0x10cdf8: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x10CDF8u;
    {
        const bool branch_taken_0x10cdf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10CDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CDF8u;
        // 0x10cdfc: 0xa6000568  sh          $zero, 0x568($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cdf8) {
            ctx->pc = 0x10CE88u;
            goto label_10ce88;
        }
    }
    ctx->pc = 0x10CE00u;
    // 0x10ce00: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x10ce00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x10ce04: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10CE04u;
    {
        const bool branch_taken_0x10ce04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10CE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CE04u;
        // 0x10ce08: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ce04) {
            ctx->pc = 0x10CE1Cu;
            goto label_10ce1c;
        }
    }
    ctx->pc = 0x10CE0Cu;
    // 0x10ce0c: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x10CE0Cu;
    {
        const bool branch_taken_0x10ce0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10CE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CE0Cu;
        // 0x10ce10: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ce0c) {
            ctx->pc = 0x10CED8u;
            goto label_10ced8;
        }
    }
    ctx->pc = 0x10CE14u;
    // 0x10ce14: 0x1062003e  beq         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x10CE14u;
    {
        const bool branch_taken_0x10ce14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10CE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CE14u;
        // 0x10ce18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ce14) {
            ctx->pc = 0x10CF10u;
            goto label_10cf10;
        }
    }
    ctx->pc = 0x10CE1Cu;
label_10ce1c:
    // 0x10ce1c: 0xc049396  jal         func_124E58
    ctx->pc = 0x10CE1Cu;
    SET_GPR_U32(ctx, 31, 0x10CE24u);
    ctx->pc = 0x10CE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CE1Cu;
    // 0x10ce20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x10CE1Cu, 0x10CE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CE24u;
label_10ce24:
    // 0x10ce24: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x10ce24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x10ce28: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x10ce28u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x10ce2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10ce2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ce30: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x10ce30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x10ce34: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x10ce34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x10ce38: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10ce38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ce3c: 0x8c4a004c  lw          $t2, 0x4C($v0)
    ctx->pc = 0x10ce3cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x10ce40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10ce40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ce44: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x10ce44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10ce48: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x10ce48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10ce4c: 0x1428821  addu        $s1, $t2, $v0
    ctx->pc = 0x10ce4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x10ce50: 0xc0c194a  jal         func_306528
    ctx->pc = 0x10CE50u;
    SET_GPR_U32(ctx, 31, 0x10CE58u);
    ctx->pc = 0x10CE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CE50u;
    // 0x10ce54: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x10CE50u, 0x10CE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CE58u;
label_10ce58:
    // 0x10ce58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10ce58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ce5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10ce5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ce60: 0x2406002a  addiu       $a2, $zero, 0x2A
    ctx->pc = 0x10ce60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x10ce64: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x10ce64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ce68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10ce68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ce6c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10ce6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ce70: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x10ce70u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ce74: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x10CE74u;
    SET_GPR_U32(ctx, 31, 0x10CE7Cu);
    ctx->pc = 0x10CE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CE74u;
    // 0x10ce78: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x10CE74u, 0x10CE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CE7Cu;
label_10ce7c:
    // 0x10ce7c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x10ce7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10ce80: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x10CE80u;
    {
        const bool branch_taken_0x10ce80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CE80u;
        // 0x10ce84: 0xa6030568  sh          $v1, 0x568($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ce80) {
            ctx->pc = 0x10CF90u;
            goto label_10cf90;
        }
    }
    ctx->pc = 0x10CE88u;
label_10ce88:
    // 0x10ce88: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x10ce88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x10ce8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10ce8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10ce90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ce90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ce94: 0xc049396  jal         func_124E58
    ctx->pc = 0x10CE94u;
    SET_GPR_U32(ctx, 31, 0x10CE9Cu);
    ctx->pc = 0x10CE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CE94u;
    // 0x10ce98: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x10CE94u, 0x10CE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CE9Cu;
label_10ce9c:
    // 0x10ce9c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x10ce9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x10cea0: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x10cea0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x10cea4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10cea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cea8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x10cea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x10ceac: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x10ceacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x10ceb0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10ceb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ceb4: 0x8c4a0054  lw          $t2, 0x54($v0)
    ctx->pc = 0x10ceb4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x10ceb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10ceb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cebc: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x10cebcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10cec0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x10cec0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10cec4: 0x1428821  addu        $s1, $t2, $v0
    ctx->pc = 0x10cec4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x10cec8: 0xc0c194a  jal         func_306528
    ctx->pc = 0x10CEC8u;
    SET_GPR_U32(ctx, 31, 0x10CED0u);
    ctx->pc = 0x10CECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CEC8u;
    // 0x10cecc: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x10CEC8u, 0x10CED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CED0u;
label_10ced0:
    // 0x10ced0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x10CED0u;
    {
        const bool branch_taken_0x10ced0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ced0) {
            ctx->pc = 0x10CF90u;
            goto label_10cf90;
        }
    }
    ctx->pc = 0x10CED8u;
label_10ced8:
    // 0x10ced8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x10ced8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x10cedc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10cedcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10cee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cee4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x10cee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10cee8: 0xc049150  jal         func_124540
    ctx->pc = 0x10CEE8u;
    SET_GPR_U32(ctx, 31, 0x10CEF0u);
    ctx->pc = 0x10CEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CEE8u;
    // 0x10ceec: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x124540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124540u, 0x10CEE8u, 0x10CEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CEF0u;
label_10cef0:
    // 0x10cef0: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x10cef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x10cef4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x10cef4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x10cef8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10cef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cefc: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x10cefcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x10cf00: 0x8c6a0044  lw          $t2, 0x44($v1)
    ctx->pc = 0x10cf00u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x10cf04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10cf04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf08: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x10CF08u;
    {
        const bool branch_taken_0x10cf08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CF08u;
        // 0x10cf0c: 0x8c620040  lw          $v0, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cf08) {
            ctx->pc = 0x10CF40u;
            goto label_10cf40;
        }
    }
    ctx->pc = 0x10CF10u;
label_10cf10:
    // 0x10cf10: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x10cf10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x10cf14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10cf14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10cf18: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x10cf18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10cf1c: 0xc049150  jal         func_124540
    ctx->pc = 0x10CF1Cu;
    SET_GPR_U32(ctx, 31, 0x10CF24u);
    ctx->pc = 0x10CF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CF1Cu;
    // 0x10cf20: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x124540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124540u, 0x10CF1Cu, 0x10CF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CF24u;
label_10cf24:
    // 0x10cf24: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x10cf24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x10cf28: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x10cf28u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x10cf2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10cf2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf30: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x10cf30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x10cf34: 0x8c6a003c  lw          $t2, 0x3C($v1)
    ctx->pc = 0x10cf34u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x10cf38: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10cf38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf3c: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x10cf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_10cf40:
    // 0x10cf40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10cf40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf44: 0x1438821  addu        $s1, $t2, $v1
    ctx->pc = 0x10cf44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x10cf48: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x10cf48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10cf4c: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x10cf4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10cf50: 0xc0c194a  jal         func_306528
    ctx->pc = 0x10CF50u;
    SET_GPR_U32(ctx, 31, 0x10CF58u);
    ctx->pc = 0x10CF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CF50u;
    // 0x10cf54: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x10CF50u, 0x10CF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CF58u;
label_10cf58:
    // 0x10cf58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10cf58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10cf5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf60: 0x2406002a  addiu       $a2, $zero, 0x2A
    ctx->pc = 0x10cf60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x10cf64: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x10cf64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10cf68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf6c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10cf6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf70: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x10cf70u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf74: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x10CF74u;
    SET_GPR_U32(ctx, 31, 0x10CF7Cu);
    ctx->pc = 0x10CF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CF74u;
    // 0x10cf78: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x10CF74u, 0x10CF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CF7Cu;
label_10cf7c:
    // 0x10cf7c: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x10cf7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x10cf80: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x10cf80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x10cf84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10cf84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10cf88: 0x0  nop
    ctx->pc = 0x10cf88u;
    // NOP
    // 0x10cf8c: 0xe60015c0  swc1        $f0, 0x15C0($s0)
    ctx->pc = 0x10cf8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5568), bits); }
label_10cf90:
    // 0x10cf90: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x10cf90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10cf94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10cf94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x10cf98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cfa0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x10cfa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10cfa4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10cfa4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cfa8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x10CFA8u;
    SET_GPR_U32(ctx, 31, 0x10CFB0u);
    ctx->pc = 0x10CFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CFA8u;
    // 0x10cfac: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x10CFA8u, 0x10CFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CFB0u;
label_10cfb0:
    // 0x10cfb0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x10cfb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x10cfb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10cfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10cfb8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x10cfb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_10cfbc:
    // 0x10cfbc: 0x8e020640  lw          $v0, 0x640($s0)
    ctx->pc = 0x10cfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1600)));
    // 0x10cfc0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10CFC0u;
    {
        const bool branch_taken_0x10cfc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CFC0u;
        // 0x10cfc4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cfc0) {
            ctx->pc = 0x10CFCCu;
            goto label_10cfcc;
        }
    }
    ctx->pc = 0x10CFC8u;
    // 0x10cfc8: 0xa2020648  sb          $v0, 0x648($s0)
    ctx->pc = 0x10cfc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1608), (uint8_t)GPR_U32(ctx, 2));
label_10cfcc:
    // 0x10cfcc: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x10cfccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x10cfd0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x10CFD0u;
    {
        const bool branch_taken_0x10cfd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10cfd0) {
            ctx->pc = 0x10CFD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CFD0u;
            // 0x10cfd4: 0x920302f7  lbu         $v1, 0x2F7($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CFE8u;
            goto label_10cfe8;
        }
    }
    ctx->pc = 0x10CFD8u;
    // 0x10cfd8: 0x8e0215f4  lw          $v0, 0x15F4($s0)
    ctx->pc = 0x10cfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5620)));
    // 0x10cfdc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x10cfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x10cfe0: 0xae0215f4  sw          $v0, 0x15F4($s0)
    ctx->pc = 0x10cfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5620), GPR_U32(ctx, 2));
    // 0x10cfe4: 0x920302f7  lbu         $v1, 0x2F7($s0)
    ctx->pc = 0x10cfe4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
label_10cfe8:
    // 0x10cfe8: 0x460000c  bltz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x10CFE8u;
    {
        const bool branch_taken_0x10cfe8 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x10CFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CFE8u;
        // 0x10cfec: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cfe8) {
            ctx->pc = 0x10D01Cu;
            goto label_10d01c;
        }
    }
    ctx->pc = 0x10CFF0u;
    // 0x10cff0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x10CFF0u;
    {
        const bool branch_taken_0x10cff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10cff0) {
            ctx->pc = 0x10CFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CFF0u;
            // 0x10cff4: 0x86020568  lh          $v0, 0x568($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D020u;
            goto label_10d020;
        }
    }
    ctx->pc = 0x10CFF8u;
    // 0x10cff8: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x10cff8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x10cffc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x10CFFCu;
    {
        const bool branch_taken_0x10cffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10cffc) {
            ctx->pc = 0x10D000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CFFCu;
            // 0x10d000: 0x86020568  lh          $v0, 0x568($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D020u;
            goto label_10d020;
        }
    }
    ctx->pc = 0x10D004u;
    // 0x10d004: 0x8e020640  lw          $v0, 0x640($s0)
    ctx->pc = 0x10d004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1600)));
    // 0x10d008: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x10D008u;
    {
        const bool branch_taken_0x10d008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d008) {
            ctx->pc = 0x10D00Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D008u;
            // 0x10d00c: 0x86020568  lh          $v0, 0x568($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D020u;
            goto label_10d020;
        }
    }
    ctx->pc = 0x10D010u;
    // 0x10d010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10d010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d014: 0xc049150  jal         func_124540
    ctx->pc = 0x10D014u;
    SET_GPR_U32(ctx, 31, 0x10D01Cu);
    ctx->pc = 0x10D018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D014u;
    // 0x10d018: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124540u, 0x10D014u, 0x10D01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D01Cu;
label_10d01c:
    // 0x10d01c: 0x86020568  lh          $v0, 0x568($s0)
    ctx->pc = 0x10d01cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
label_10d020:
    // 0x10d020: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10D020u;
    {
        const bool branch_taken_0x10d020 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x10D024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D020u;
        // 0x10d024: 0x96030568  lhu         $v1, 0x568($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d020) {
            ctx->pc = 0x10D044u;
            goto label_10d044;
        }
    }
    ctx->pc = 0x10D028u;
    // 0x10d028: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x10d028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x10d02c: 0x9203061f  lbu         $v1, 0x61F($s0)
    ctx->pc = 0x10d02cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1567)));
    // 0x10d030: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D030u;
    {
        const bool branch_taken_0x10d030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D030u;
        // 0x10d034: 0xa6020568  sh          $v0, 0x568($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d030) {
            ctx->pc = 0x10D044u;
            goto label_10d044;
        }
    }
    ctx->pc = 0x10D038u;
    // 0x10d038: 0x8e0215f4  lw          $v0, 0x15F4($s0)
    ctx->pc = 0x10d038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5620)));
    // 0x10d03c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x10d03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x10d040: 0xae0215f4  sw          $v0, 0x15F4($s0)
    ctx->pc = 0x10d040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5620), GPR_U32(ctx, 2));
label_10d044:
    // 0x10d044: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x10d044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x10d048: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x10d048u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x10d04c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10d04cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10d050: 0xc04939a  jal         func_124E68
    ctx->pc = 0x10D050u;
    SET_GPR_U32(ctx, 31, 0x10D058u);
    ctx->pc = 0x10D054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D050u;
    // 0x10d054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E68u, 0x10D050u, 0x10D058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D058u;
label_10d058:
    // 0x10d058: 0xc055f06  jal         func_157C18
    ctx->pc = 0x10D058u;
    SET_GPR_U32(ctx, 31, 0x10D060u);
    ctx->pc = 0x10D05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D058u;
    // 0x10d05c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x10D058u, 0x10D060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D060u;
label_10d060:
    // 0x10d060: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x10D060u;
    {
        const bool branch_taken_0x10d060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d060) {
            ctx->pc = 0x10D064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D060u;
            // 0x10d064: 0xc6010330  lwc1        $f1, 0x330($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D07Cu;
            goto label_10d07c;
        }
    }
    ctx->pc = 0x10D068u;
    // 0x10d068: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x10d068u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x10d06c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x10d06cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x10d070: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x10d070u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x10d074: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x10d074u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x10d078: 0xc6010330  lwc1        $f1, 0x330($s0)
    ctx->pc = 0x10d078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10d07c:
    // 0x10d07c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10d07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d080: 0xc60215c0  lwc1        $f2, 0x15C0($s0)
    ctx->pc = 0x10d080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10d084: 0xc6000338  lwc1        $f0, 0x338($s0)
    ctx->pc = 0x10d084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10d088: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x10d088u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x10d08c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10d08cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10d090: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10d090u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x10d094: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x10d094u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x10d098: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10d098u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x10d09c: 0xe6010330  swc1        $f1, 0x330($s0)
    ctx->pc = 0x10d09cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 816), bits); }
    // 0x10d0a0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x10D0A0u;
    SET_GPR_U32(ctx, 31, 0x10D0A8u);
    ctx->pc = 0x10D0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D0A0u;
    // 0x10d0a4: 0xe6000338  swc1        $f0, 0x338($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x10D0A0u, 0x10D0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D0A8u;
label_10d0a8:
    // 0x10d0a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10d0a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x10d0ac: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x10D0ACu;
    SET_GPR_U32(ctx, 31, 0x10D0B4u);
    ctx->pc = 0x10D0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D0ACu;
    // 0x10d0b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x10D0ACu, 0x10D0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D0B4u;
label_10d0b4:
    // 0x10d0b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10d0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10d0b8:
    // 0x10d0b8: 0xc048e4e  jal         func_123938
    ctx->pc = 0x10D0B8u;
    SET_GPR_U32(ctx, 31, 0x10D0C0u);
    ctx->pc = 0x10D0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D0B8u;
    // 0x10d0bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x10D0B8u, 0x10D0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D0C0u;
label_10d0c0:
    // 0x10d0c0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x10d0c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10d0c4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x10d0c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d0c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10d0c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d0cc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x10d0ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d0d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10d0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d0d4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x10d0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10d0d8: 0x3e00008  jr          $ra
    ctx->pc = 0x10D0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D0D8u;
        // 0x10d0dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D0D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D0E0u;
}
