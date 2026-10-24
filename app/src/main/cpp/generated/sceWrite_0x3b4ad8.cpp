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

// Function: sceWrite
// Address: 0x3b4ad8 - 0x3b4d98
void sceWrite_0x3b4ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceWrite_0x3b4ad8");
#endif

    switch (ctx->pc) {
        case 0x3b4b18u: goto label_3b4b18;
        case 0x3b4b24u: goto label_3b4b24;
        case 0x3b4b50u: goto label_3b4b50;
        case 0x3b4b9cu: goto label_3b4b9c;
        case 0x3b4bc4u: goto label_3b4bc4;
        case 0x3b4c00u: goto label_3b4c00;
        case 0x3b4c3cu: goto label_3b4c3c;
        case 0x3b4c88u: goto label_3b4c88;
        case 0x3b4ca0u: goto label_3b4ca0;
        case 0x3b4cf8u: goto label_3b4cf8;
        case 0x3b4d08u: goto label_3b4d08;
        case 0x3b4d10u: goto label_3b4d10;
        case 0x3b4d24u: goto label_3b4d24;
        case 0x3b4d34u: goto label_3b4d34;
        case 0x3b4d4cu: goto label_3b4d4c;
        case 0x3b4d5cu: goto label_3b4d5c;
        case 0x3b4d64u: goto label_3b4d64;
        default: break;
    }

    ctx->pc = 0x3b4ad8u;

    // 0x3b4ad8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3b4ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x3b4adc: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x3b4adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x3b4ae0: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x3b4ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x3b4ae4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x3b4ae4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4ae8: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x3b4ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x3b4aec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b4aecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4af0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x3b4af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x3b4af4: 0x3c1e0078  lui         $fp, 0x78
    ctx->pc = 0x3b4af4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)120 << 16));
    // 0x3b4af8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x3b4af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x3b4afc: 0x27d2ffc0  addiu       $s2, $fp, -0x40
    ctx->pc = 0x3b4afcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967232));
    // 0x3b4b00: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x3b4b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x3b4b04: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x3b4b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x3b4b08: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x3b4b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x3b4b0c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x3b4b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x3b4b10: 0xc0ece92  jal         func_3B3A48
    ctx->pc = 0x3B4B10u;
    SET_GPR_U32(ctx, 31, 0x3B4B18u);
    ctx->pc = 0x3B4B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4B10u;
    // 0x3b4b14: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3A48u, 0x3B4B10u, 0x3B4B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4B18u;
label_3b4b18:
    // 0x3b4b18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b4b18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4b1c: 0xc0ecfb2  jal         func_3B3EC8
    ctx->pc = 0x3B4B1Cu;
    SET_GPR_U32(ctx, 31, 0x3B4B24u);
    ctx->pc = 0x3B4B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4B1Cu;
    // 0x3b4b20: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EC8u, 0x3B4B1Cu, 0x3B4B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4B24u;
label_3b4b24:
    // 0x3b4b24: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3b4b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3b4b28: 0x8c62aedc  lw          $v0, -0x5124($v1)
    ctx->pc = 0x3b4b28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAEDCu));
    // 0x3b4b2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B4B2Cu;
    {
        const bool branch_taken_0x3b4b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4b2c) {
            ctx->pc = 0x3B4B48u;
            goto label_3b4b48;
        }
    }
    ctx->pc = 0x3B4B34u;
    // 0x3b4b34: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B4B34u;
    {
        const bool branch_taken_0x3b4b34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4b34) {
            ctx->pc = 0x3B4B48u;
            goto label_3b4b48;
        }
    }
    ctx->pc = 0x3B4B3Cu;
    // 0x3b4b3c: 0x8e170004  lw          $s7, 0x4($s0)
    ctx->pc = 0x3b4b3cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3b4b40: 0x16e00005  bnez        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B4B40u;
    {
        const bool branch_taken_0x3b4b40 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B4B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4B40u;
        // 0x3b4b44: 0x3c020078  lui         $v0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4b40) {
            ctx->pc = 0x3B4B58u;
            goto label_3b4b58;
        }
    }
    ctx->pc = 0x3B4B48u;
label_3b4b48:
    // 0x3b4b48: 0xc0ecfbe  jal         func_3B3EF8
    ctx->pc = 0x3B4B48u;
    SET_GPR_U32(ctx, 31, 0x3B4B50u);
    ctx->pc = 0x3B3EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EF8u, 0x3B4B48u, 0x3B4B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4B50u;
label_3b4b50:
    // 0x3b4b50: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x3B4B50u;
    {
        const bool branch_taken_0x3b4b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4B50u;
        // 0x3b4b54: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4b50) {
            ctx->pc = 0x3B4D68u;
            goto label_3b4d68;
        }
    }
    ctx->pc = 0x3B4B58u;
label_3b4b58:
    // 0x3b4b58: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3b4b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b4b5c: 0x244214c0  addiu       $v0, $v0, 0x14C0
    ctx->pc = 0x3b4b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5312));
    // 0x3b4b60: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3b4b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3b4b64: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x3b4b64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3b4b68: 0xae44000c  sw          $a0, 0xC($s2)
    ctx->pc = 0x3b4b68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
    // 0x3b4b6c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3b4b6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3b4b70: 0x24630180  addiu       $v1, $v1, 0x180
    ctx->pc = 0x3b4b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x3b4b74: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x3b4b74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
    // 0x3b4b78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3b4b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b4b7c: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x3b4b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x3b4b80: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3b4b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3b4b84: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x3b4b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x3b4b88: 0x32f08000  andi        $s0, $s7, 0x8000
    ctx->pc = 0x3b4b88u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)32768);
    // 0x3b4b8c: 0xae560014  sw          $s6, 0x14($s2)
    ctx->pc = 0x3b4b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 22));
    // 0x3b4b90: 0xae510010  sw          $s1, 0x10($s2)
    ctx->pc = 0x3b4b90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
    // 0x3b4b94: 0xc0ebf28  jal         func_3AFCA0
    ctx->pc = 0x3B4B94u;
    SET_GPR_U32(ctx, 31, 0x3B4B9Cu);
    ctx->pc = 0x3B4B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4B94u;
    // 0x3b4b98: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCA0u, 0x3B4B94u, 0x3B4B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4B9Cu;
label_3b4b9c:
    // 0x3b4b9c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3b4b9cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4ba0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3b4ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b4ba4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x3b4ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3b4ba8: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x3b4ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x3b4bac: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x3b4bacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x3b4bb0: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3B4BB0u;
    {
        const bool branch_taken_0x3b4bb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4BB0u;
        // 0x3b4bb4: 0xafd5ffc0  sw          $s5, -0x40($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4294967232), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4bb0) {
            ctx->pc = 0x3B4C44u;
            goto label_3b4c44;
        }
    }
    ctx->pc = 0x3B4BB8u;
    // 0x3b4bb8: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x3b4bb8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x3b4bbc: 0xc0ebf38  jal         func_3AFCE0
    ctx->pc = 0x3B4BBCu;
    SET_GPR_U32(ctx, 31, 0x3B4BC4u);
    ctx->pc = 0x3B4BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4BBCu;
    // 0x3b4bc0: 0x8e64aeec  lw          $a0, -0x5114($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294946540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE0u, 0x3B4BBCu, 0x3B4BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4BC4u;
label_3b4bc4:
    // 0x3b4bc4: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x3b4bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x3b4bc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b4bc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4bcc: 0x8ce3ae58  lw          $v1, -0x51A8($a3)
    ctx->pc = 0x3b4bccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FAE58u));
    // 0x3b4bd0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b4bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b4bd4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3B4BD4u;
    {
        const bool branch_taken_0x3b4bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B4BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4BD4u;
        // 0x3b4bd8: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4bd4) {
            ctx->pc = 0x3B4BF8u;
            goto label_3b4bf8;
        }
    }
    ctx->pc = 0x3B4BDCu;
    // 0x3b4bdc: 0x8fc3ffc0  lw          $v1, -0x40($fp)
    ctx->pc = 0x3b4bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294967232)));
    // 0x3b4be0: 0x3230000f  andi        $s0, $s1, 0xF
    ctx->pc = 0x3b4be0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x3b4be4: 0x31023  negu        $v0, $v1
    ctx->pc = 0x3b4be4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x3b4be8: 0xace3ae58  sw          $v1, -0x51A8($a3)
    ctx->pc = 0x3b4be8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294946392), GPR_U32(ctx, 3));
    // 0x3b4bec: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3B4BECu;
    {
        const bool branch_taken_0x3b4bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4BECu;
        // 0x3b4bf0: 0xafc2ffc0  sw          $v0, -0x40($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4294967232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4bec) {
            ctx->pc = 0x3B4C34u;
            goto label_3b4c34;
        }
    }
    ctx->pc = 0x3B4BF4u;
    // 0x3b4bf4: 0x0  nop
    ctx->pc = 0x3b4bf4u;
    // NOP
label_3b4bf8:
    // 0x3b4bf8: 0x3230000f  andi        $s0, $s1, 0xF
    ctx->pc = 0x3b4bf8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x3b4bfc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3b4bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3b4c00:
    // 0x3b4c00: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x3b4c00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3b4c04: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3B4C04u;
    {
        const bool branch_taken_0x3b4c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4C04u;
        // 0x3b4c08: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4c04) {
            ctx->pc = 0x3B4C34u;
            goto label_3b4c34;
        }
    }
    ctx->pc = 0x3B4C0Cu;
    // 0x3b4c0c: 0x24e3ae58  addiu       $v1, $a3, -0x51A8
    ctx->pc = 0x3b4c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946392));
    // 0x3b4c10: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x3b4c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b4c14: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3b4c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b4c18: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3b4c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3b4c1c: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3B4C1Cu;
    {
        const bool branch_taken_0x3b4c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3B4C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4C1Cu;
        // 0x3b4c20: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4c1c) {
            ctx->pc = 0x3B4C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b4c00;
        }
    }
    ctx->pc = 0x3B4C24u;
    // 0x3b4c24: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3b4c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3b4c28: 0x21823  negu        $v1, $v0
    ctx->pc = 0x3b4c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x3b4c2c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3b4c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x3b4c30: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3b4c30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_3b4c34:
    // 0x3b4c34: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x3B4C34u;
    SET_GPR_U32(ctx, 31, 0x3B4C3Cu);
    ctx->pc = 0x3B4C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4C34u;
    // 0x3b4c38: 0x8e64aeec  lw          $a0, -0x5114($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294946540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x3B4C34u, 0x3B4C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4C3Cu;
label_3b4c3c:
    // 0x3b4c3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B4C3Cu;
    {
        const bool branch_taken_0x3b4c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4c3c) {
            ctx->pc = 0x3B4C4Cu;
            goto label_3b4c4c;
        }
    }
    ctx->pc = 0x3B4C44u;
label_3b4c44:
    // 0x3b4c44: 0x3230000f  andi        $s0, $s1, 0xF
    ctx->pc = 0x3b4c44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x3b4c48: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3b4c48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b4c4c:
    // 0x3b4c4c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B4C4Cu;
    {
        const bool branch_taken_0x3b4c4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B4C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4C4Cu;
        // 0x3b4c50: 0x111102  srl         $v0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4c4c) {
            ctx->pc = 0x3B4C5Cu;
            goto label_3b4c5c;
        }
    }
    ctx->pc = 0x3B4C54u;
    // 0x3b4c54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B4C54u;
    {
        const bool branch_taken_0x3b4c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4C54u;
        // 0x3b4c58: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4c54) {
            ctx->pc = 0x3B4C68u;
            goto label_3b4c68;
        }
    }
    ctx->pc = 0x3B4C5Cu;
label_3b4c5c:
    // 0x3b4c5c: 0x2623fff0  addiu       $v1, $s1, -0x10
    ctx->pc = 0x3b4c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x3b4c60: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3b4c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3b4c64: 0x438023  subu        $s0, $v0, $v1
    ctx->pc = 0x3b4c64u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3b4c68:
    // 0x3b4c68: 0x2d0182a  slt         $v1, $s6, $s0
    ctx->pc = 0x3b4c68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3b4c6c: 0x3c132000  lui         $s3, 0x2000
    ctx->pc = 0x3b4c6cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)8192 << 16));
    // 0x3b4c70: 0x2f31024  and         $v0, $s7, $s3
    ctx->pc = 0x3b4c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & GPR_U64(ctx, 19));
    // 0x3b4c74: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B4C74u;
    {
        const bool branch_taken_0x3b4c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B4C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4C74u;
        // 0x3b4c78: 0x2c3800b  movn        $s0, $s6, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4c74) {
            ctx->pc = 0x3B4C88u;
            goto label_3b4c88;
        }
    }
    ctx->pc = 0x3B4C7Cu;
    // 0x3b4c7c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3b4c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4c80: 0xc0eca14  jal         func_3B2850
    ctx->pc = 0x3B4C80u;
    SET_GPR_U32(ctx, 31, 0x3B4C88u);
    ctx->pc = 0x3B4C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4C80u;
    // 0x3b4c84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2850u, 0x3B4C80u, 0x3B4C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4C88u;
label_3b4c88:
    // 0x3b4c88: 0x2338825  or          $s1, $s1, $s3
    ctx->pc = 0x3b4c88u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 19));
    // 0x3b4c8c: 0xae500018  sw          $s0, 0x18($s2)
    ctx->pc = 0x3b4c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 16));
    // 0x3b4c90: 0x1a00000b  blez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x3B4C90u;
    {
        const bool branch_taken_0x3b4c90 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x3B4C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4C90u;
        // 0x3b4c94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4c90) {
            ctx->pc = 0x3B4CC0u;
            goto label_3b4cc0;
        }
    }
    ctx->pc = 0x3B4C98u;
    // 0x3b4c98: 0x2646001c  addiu       $a2, $s2, 0x1C
    ctx->pc = 0x3b4c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x3b4c9c: 0x0  nop
    ctx->pc = 0x3b4c9cu;
    // NOP
label_3b4ca0:
    // 0x3b4ca0: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x3b4ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x3b4ca4: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x3b4ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x3b4ca8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3b4ca8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b4cac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3b4cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3b4cb0: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x3b4cb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3b4cb4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3b4cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b4cb8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3B4CB8u;
    {
        const bool branch_taken_0x3b4cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b4cb8) {
            ctx->pc = 0x3B4CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b4ca0;
        }
    }
    ctx->pc = 0x3B4CC0u;
label_3b4cc0:
    // 0x3b4cc0: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x3b4cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x3b4cc4: 0x27c7ffc0  addiu       $a3, $fp, -0x40
    ctx->pc = 0x3b4cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967232));
    // 0x3b4cc8: 0x24500c00  addiu       $s0, $v0, 0xC00
    ctx->pc = 0x3b4cc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3072));
    // 0x3b4ccc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3b4cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3b4cd0: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x3b4cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x3b4cd4: 0xafb40008  sw          $s4, 0x8($sp)
    ctx->pc = 0x3b4cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 20));
    // 0x3b4cd8: 0x244416c0  addiu       $a0, $v0, 0x16C0
    ctx->pc = 0x3b4cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x3b4cdc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3b4cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b4ce0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b4ce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4ce4: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x3b4ce4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3b4ce8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x3b4ce8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4cec: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x3b4cecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b4cf0: 0xc0ece56  jal         func_3B3958
    ctx->pc = 0x3B4CF0u;
    SET_GPR_U32(ctx, 31, 0x3B4CF8u);
    ctx->pc = 0x3B4CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4CF0u;
    // 0x3b4cf4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3958u, 0x3B4CF0u, 0x3B4CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4CF8u;
label_3b4cf8:
    // 0x3b4cf8: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B4CF8u;
    {
        const bool branch_taken_0x3b4cf8 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3B4CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4CF8u;
        // 0x3b4cfc: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4cf8) {
            ctx->pc = 0x3B4D18u;
            goto label_3b4d18;
        }
    }
    ctx->pc = 0x3B4D00u;
    // 0x3b4d00: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B4D00u;
    SET_GPR_U32(ctx, 31, 0x3B4D08u);
    ctx->pc = 0x3B4D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4D00u;
    // 0x3b4d04: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B4D00u, 0x3B4D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4D08u;
label_3b4d08:
    // 0x3b4d08: 0xc0ecfbe  jal         func_3B3EF8
    ctx->pc = 0x3B4D08u;
    SET_GPR_U32(ctx, 31, 0x3B4D10u);
    ctx->pc = 0x3B3EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EF8u, 0x3B4D08u, 0x3B4D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4D10u;
label_3b4d10:
    // 0x3b4d10: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3B4D10u;
    {
        const bool branch_taken_0x3b4d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4D10u;
        // 0x3b4d14: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4d10) {
            ctx->pc = 0x3B4D68u;
            goto label_3b4d68;
        }
    }
    ctx->pc = 0x3B4D18u;
label_3b4d18:
    // 0x3b4d18: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x3b4d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x3b4d1c: 0xc0ecfbe  jal         func_3B3EF8
    ctx->pc = 0x3B4D1Cu;
    SET_GPR_U32(ctx, 31, 0x3B4D24u);
    ctx->pc = 0x3B4D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4D1Cu;
    // 0x3b4d20: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EF8u, 0x3B4D1Cu, 0x3B4D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4D24u;
label_3b4d24:
    // 0x3b4d24: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B4D24u;
    {
        const bool branch_taken_0x3b4d24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b4d24) {
            ctx->pc = 0x3B4D3Cu;
            goto label_3b4d3c;
        }
    }
    ctx->pc = 0x3B4D2Cu;
    // 0x3b4d2c: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B4D2Cu;
    SET_GPR_U32(ctx, 31, 0x3B4D34u);
    ctx->pc = 0x3B4D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4D2Cu;
    // 0x3b4d30: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B4D2Cu, 0x3B4D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4D34u;
label_3b4d34:
    // 0x3b4d34: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3B4D34u;
    {
        const bool branch_taken_0x3b4d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4D34u;
        // 0x3b4d38: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4d34) {
            ctx->pc = 0x3B4D68u;
            goto label_3b4d68;
        }
    }
    ctx->pc = 0x3B4D3Cu;
label_3b4d3c:
    // 0x3b4d3c: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B4D3Cu;
    {
        const bool branch_taken_0x3b4d3c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4d3c) {
            ctx->pc = 0x3B4D54u;
            goto label_3b4d54;
        }
    }
    ctx->pc = 0x3B4D44u;
    // 0x3b4d44: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B4D44u;
    SET_GPR_U32(ctx, 31, 0x3B4D4Cu);
    ctx->pc = 0x3B4D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4D44u;
    // 0x3b4d48: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B4D44u, 0x3B4D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4D4Cu;
label_3b4d4c:
    // 0x3b4d4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3B4D4Cu;
    {
        const bool branch_taken_0x3b4d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4D4Cu;
        // 0x3b4d50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4d4c) {
            ctx->pc = 0x3B4D68u;
            goto label_3b4d68;
        }
    }
    ctx->pc = 0x3B4D54u;
label_3b4d54:
    // 0x3b4d54: 0xc0ebf38  jal         func_3AFCE0
    ctx->pc = 0x3B4D54u;
    SET_GPR_U32(ctx, 31, 0x3B4D5Cu);
    ctx->pc = 0x3B4D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4D54u;
    // 0x3b4d58: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE0u, 0x3B4D54u, 0x3B4D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4D5Cu;
label_3b4d5c:
    // 0x3b4d5c: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B4D5Cu;
    SET_GPR_U32(ctx, 31, 0x3B4D64u);
    ctx->pc = 0x3B4D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4D5Cu;
    // 0x3b4d60: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B4D5Cu, 0x3B4D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4D64u;
label_3b4d64:
    // 0x3b4d64: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3b4d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3b4d68:
    // 0x3b4d68: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x3b4d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3b4d6c: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x3b4d6cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3b4d70: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x3b4d70u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3b4d74: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x3b4d74u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3b4d78: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x3b4d78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3b4d7c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x3b4d7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3b4d80: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x3b4d80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b4d84: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x3b4d84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b4d88: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x3b4d88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b4d8c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x3b4d8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b4d90: 0x3e00008  jr          $ra
    ctx->pc = 0x3B4D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4D90u;
        // 0x3b4d94: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4D98u;
}
