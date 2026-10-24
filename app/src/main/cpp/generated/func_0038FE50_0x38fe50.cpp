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

// Function: func_0038FE50
// Address: 0x38fe50 - 0x38ffe0
void func_0038FE50_0x38fe50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038FE50_0x38fe50");
#endif

    switch (ctx->pc) {
        case 0x38fe80u: goto label_38fe80;
        case 0x38fe94u: goto label_38fe94;
        case 0x38feccu: goto label_38fecc;
        case 0x38ff00u: goto label_38ff00;
        case 0x38ff58u: goto label_38ff58;
        case 0x38ffa0u: goto label_38ffa0;
        default: break;
    }

    ctx->pc = 0x38fe50u;

    // 0x38fe50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x38fe50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x38fe54: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x38fe54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x38fe58: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x38fe58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x38fe5c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x38fe5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fe60: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38fe60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38fe64: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x38fe64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fe68: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x38fe68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fe6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38fe6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38fe70: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x38fe70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x38fe74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x38fe74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fe78: 0xc0e3f7a  jal         func_38FDE8
    ctx->pc = 0x38FE78u;
    SET_GPR_U32(ctx, 31, 0x38FE80u);
    ctx->pc = 0x38FE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FE78u;
    // 0x38fe7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FDE8u, 0x38FE78u, 0x38FE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FE80u;
label_38fe80:
    // 0x38fe80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x38fe80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fe84: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x38FE84u;
    {
        const bool branch_taken_0x38fe84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FE84u;
        // 0x38fe88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fe84) {
            ctx->pc = 0x38FEA8u;
            goto label_38fea8;
        }
    }
    ctx->pc = 0x38FE8Cu;
    // 0x38fe8c: 0xc0e3d6e  jal         func_38F5B8
    ctx->pc = 0x38FE8Cu;
    SET_GPR_U32(ctx, 31, 0x38FE94u);
    ctx->pc = 0x38FE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FE8Cu;
    // 0x38fe90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F5B8u, 0x38FE8Cu, 0x38FE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FE94u;
label_38fe94:
    // 0x38fe94: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x38fe94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fe98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38fe98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38fe9c: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x38fe9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
    // 0x38fea0: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x38FEA0u;
    {
        const bool branch_taken_0x38fea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FEA0u;
        // 0x38fea4: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fea0) {
            ctx->pc = 0x38FFC0u;
            goto label_38ffc0;
        }
    }
    ctx->pc = 0x38FEA8u;
label_38fea8:
    // 0x38fea8: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38FEA8u;
    {
        const bool branch_taken_0x38fea8 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x38FEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FEA8u;
        // 0x38feac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fea8) {
            ctx->pc = 0x38FEC0u;
            goto label_38fec0;
        }
    }
    ctx->pc = 0x38FEB0u;
    // 0x38feb0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x38feb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38feb4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x38feb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38feb8: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x38feb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38febc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x38febcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38fec0:
    // 0x38fec0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x38fec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x38fec4: 0xc0e3d6e  jal         func_38F5B8
    ctx->pc = 0x38FEC4u;
    SET_GPR_U32(ctx, 31, 0x38FECCu);
    ctx->pc = 0x38FEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FEC4u;
    // 0x38fec8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F5B8u, 0x38FEC4u, 0x38FECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FECCu;
label_38fecc:
    // 0x38fecc: 0x8e2a0010  lw          $t2, 0x10($s1)
    ctx->pc = 0x38feccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x38fed0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x38fed0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fed4: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x38fed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x38fed8: 0x26280014  addiu       $t0, $s1, 0x14
    ctx->pc = 0x38fed8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x38fedc: 0x26460014  addiu       $a2, $s2, 0x14
    ctx->pc = 0x38fedcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x38fee0: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x38fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x38fee4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x38fee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x38fee8: 0xa670000e  sh          $s0, 0xE($s3)
    ctx->pc = 0x38fee8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 14), (uint16_t)GPR_U32(ctx, 16));
    // 0x38feec: 0x1025821  addu        $t3, $t0, $v0
    ctx->pc = 0x38feecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x38fef0: 0xc36021  addu        $t4, $a2, $v1
    ctx->pc = 0x38fef0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x38fef4: 0x26670014  addiu       $a3, $s3, 0x14
    ctx->pc = 0x38fef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x38fef8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x38fef8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fefc: 0x0  nop
    ctx->pc = 0x38fefcu;
    // NOP
label_38ff00:
    // 0x38ff00: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x38ff00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x38ff04: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x38ff04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38ff08: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x38ff08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x38ff0c: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x38ff0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x38ff10: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x38ff10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x38ff14: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x38ff14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x38ff18: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x38ff18u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x38ff1c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x38ff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x38ff20: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x38ff20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x38ff24: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x38ff24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x38ff28: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x38ff28u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x38ff2c: 0x34c03  sra         $t1, $v1, 16
    ctx->pc = 0x38ff2cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), 16));
    // 0x38ff30: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x38ff30u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x38ff34: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x38ff34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x38ff38: 0xcc102b  sltu        $v0, $a2, $t4
    ctx->pc = 0x38ff38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x38ff3c: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x38ff3cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x38ff40: 0x54c03  sra         $t1, $a1, 16
    ctx->pc = 0x38ff40u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 5), 16));
    // 0x38ff44: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x38FF44u;
    {
        const bool branch_taken_0x38ff44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FF44u;
        // 0x38ff48: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ff44) {
            ctx->pc = 0x38FF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38ff00;
        }
    }
    ctx->pc = 0x38FF4Cu;
    // 0x38ff4c: 0x10b102b  sltu        $v0, $t0, $t3
    ctx->pc = 0x38ff4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x38ff50: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x38FF50u;
    {
        const bool branch_taken_0x38ff50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ff50) {
            ctx->pc = 0x38FF54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38FF50u;
            // 0x38ff54: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38FF90u;
            goto label_38ff90;
        }
    }
    ctx->pc = 0x38FF58u;
label_38ff58:
    // 0x38ff58: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x38ff58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x38ff5c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x38ff5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x38ff60: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x38ff60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x38ff64: 0x10b202b  sltu        $a0, $t0, $t3
    ctx->pc = 0x38ff64u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x38ff68: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x38ff68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x38ff6c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x38ff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x38ff70: 0x34c03  sra         $t1, $v1, 16
    ctx->pc = 0x38ff70u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), 16));
    // 0x38ff74: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x38ff74u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x38ff78: 0x492821  addu        $a1, $v0, $t1
    ctx->pc = 0x38ff78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x38ff7c: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x38ff7cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x38ff80: 0x54c03  sra         $t1, $a1, 16
    ctx->pc = 0x38ff80u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 5), 16));
    // 0x38ff84: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x38FF84u;
    {
        const bool branch_taken_0x38ff84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FF84u;
        // 0x38ff88: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ff84) {
            ctx->pc = 0x38FF58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38ff58;
        }
    }
    ctx->pc = 0x38FF8Cu;
    // 0x38ff8c: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x38ff8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_38ff90:
    // 0x38ff90: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x38ff90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x38ff94: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x38FF94u;
    {
        const bool branch_taken_0x38ff94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38ff94) {
            ctx->pc = 0x38FF98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38FF94u;
            // 0x38ff98: 0xae6a0010  sw          $t2, 0x10($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38FFC0u;
            goto label_38ffc0;
        }
    }
    ctx->pc = 0x38FF9Cu;
    // 0x38ff9c: 0x0  nop
    ctx->pc = 0x38ff9cu;
    // NOP
label_38ffa0:
    // 0x38ffa0: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x38ffa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x38ffa4: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x38ffa4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x38ffa8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x38ffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x38ffac: 0x0  nop
    ctx->pc = 0x38ffacu;
    // NOP
    // 0x38ffb0: 0x0  nop
    ctx->pc = 0x38ffb0u;
    // NOP
    // 0x38ffb4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x38FFB4u;
    {
        const bool branch_taken_0x38ffb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ffb4) {
            ctx->pc = 0x38FFA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38ffa0;
        }
    }
    ctx->pc = 0x38FFBCu;
    // 0x38ffbc: 0xae6a0010  sw          $t2, 0x10($s3)
    ctx->pc = 0x38ffbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 10));
label_38ffc0:
    // 0x38ffc0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x38ffc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ffc4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x38ffc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38ffc8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x38ffc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38ffcc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x38ffccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38ffd0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38ffd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38ffd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38ffd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38ffd8: 0x3e00008  jr          $ra
    ctx->pc = 0x38FFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38FFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FFD8u;
        // 0x38ffdc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38FFE0u;
}
