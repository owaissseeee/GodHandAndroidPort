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

// Function: cDvd_ReadAllocSized
// Address: 0x200df8 - 0x200f50
void cDvd_ReadAllocSized_0x200df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDvd_ReadAllocSized_0x200df8");
#endif

    switch (ctx->pc) {
        case 0x200e4cu: goto label_200e4c;
        case 0x200e6cu: goto label_200e6c;
        case 0x200e9cu: goto label_200e9c;
        case 0x200ec8u: goto label_200ec8;
        case 0x200edcu: goto label_200edc;
        case 0x200f14u: goto label_200f14;
        default: break;
    }

    ctx->pc = 0x200df8u;

    // 0x200df8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x200df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x200dfc: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x200dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x200e00: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x200e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x200e04: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x200e04u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200e08: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x200e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x200e0c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x200e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x200e10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x200e10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200e14: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x200e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x200e18: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x200e18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200e1c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x200e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x200e20: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x200e20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200e24: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x200e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x200e28: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x200e28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200e2c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x200e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x200e30: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x200e30u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200e34: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x200e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x200e38: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x200e38u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200e3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200e40: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x200e40u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200e44: 0xc0805ea  jal         func_2017A8
    ctx->pc = 0x200E44u;
    SET_GPR_U32(ctx, 31, 0x200E4Cu);
    ctx->pc = 0x200E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200E44u;
    // 0x200e48: 0xafc00000  sw          $zero, 0x0($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2017A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2017A8u, 0x200E44u, 0x200E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200E4Cu;
label_200e4c:
    // 0x200e4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x200e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200e50: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x200E50u;
    {
        const bool branch_taken_0x200e50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x200E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E50u;
        // 0x200e54: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200e50) {
            ctx->pc = 0x200EDCu;
            goto label_200edc;
        }
    }
    ctx->pc = 0x200E58u;
    // 0x200e58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x200e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200e5c: 0x24840d40  addiu       $a0, $a0, 0xD40
    ctx->pc = 0x200e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3392));
    // 0x200e60: 0x26060078  addiu       $a2, $s0, 0x78
    ctx->pc = 0x200e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x200e64: 0xc07fe70  jal         func_1FF9C0
    ctx->pc = 0x200E64u;
    SET_GPR_U32(ctx, 31, 0x200E6Cu);
    ctx->pc = 0x200E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200E64u;
    // 0x200e68: 0x2607000c  addiu       $a3, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9C0u, 0x200E64u, 0x200E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200E6Cu;
label_200e6c:
    // 0x200e6c: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x200e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x200e70: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x200e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x200e74: 0x246307ff  addiu       $v1, $v1, 0x7FF
    ctx->pc = 0x200e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2047));
    // 0x200e78: 0xae14007c  sw          $s4, 0x7C($s0)
    ctx->pc = 0x200e78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 20));
    // 0x200e7c: 0x31ac2  srl         $v1, $v1, 11
    ctx->pc = 0x200e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 11));
    // 0x200e80: 0x4400016  bltz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x200E80u;
    {
        const bool branch_taken_0x200e80 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x200E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E80u;
        // 0x200e84: 0xae030074  sw          $v1, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200e80) {
            ctx->pc = 0x200EDCu;
            goto label_200edc;
        }
    }
    ctx->pc = 0x200E88u;
    // 0x200e88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x200e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200e8c: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x200E8Cu;
    {
        const bool branch_taken_0x200e8c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x200E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E8Cu;
        // 0x200e90: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200e8c) {
            ctx->pc = 0x200EA4u;
            goto label_200ea4;
        }
    }
    ctx->pc = 0x200E94u;
    // 0x200e94: 0xc0805e2  jal         func_201788
    ctx->pc = 0x200E94u;
    SET_GPR_U32(ctx, 31, 0x200E9Cu);
    ctx->pc = 0x200E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200E94u;
    // 0x200e98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201788u, 0x200E94u, 0x200E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200E9Cu;
label_200e9c:
    // 0x200e9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x200E9Cu;
    {
        const bool branch_taken_0x200e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E9Cu;
        // 0x200ea0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200e9c) {
            ctx->pc = 0x200EA8u;
            goto label_200ea8;
        }
    }
    ctx->pc = 0x200EA4u;
label_200ea4:
    // 0x200ea4: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x200ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
label_200ea8:
    // 0x200ea8: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x200ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x200eac: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x200eacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200eb0: 0xae16006c  sw          $s6, 0x6C($s0)
    ctx->pc = 0x200eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 22));
    // 0x200eb4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x200eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x200eb8: 0xae170070  sw          $s7, 0x70($s0)
    ctx->pc = 0x200eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 23));
    // 0x200ebc: 0x422c0  sll         $a0, $a0, 11
    ctx->pc = 0x200ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
    // 0x200ec0: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x200EC0u;
    SET_GPR_U32(ctx, 31, 0x200EC8u);
    ctx->pc = 0x200EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200EC0u;
    // 0x200ec4: 0xae000080  sw          $zero, 0x80($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x200EC0u, 0x200EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200EC8u;
label_200ec8:
    // 0x200ec8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x200EC8u;
    {
        const bool branch_taken_0x200ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200EC8u;
        // 0x200ecc: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ec8) {
            ctx->pc = 0x200EE4u;
            goto label_200ee4;
        }
    }
    ctx->pc = 0x200ED0u;
    // 0x200ed0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x200ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200ed4: 0xc08048a  jal         func_201228
    ctx->pc = 0x200ED4u;
    SET_GPR_U32(ctx, 31, 0x200EDCu);
    ctx->pc = 0x200ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200ED4u;
    // 0x200ed8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201228u, 0x200ED4u, 0x200EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200EDCu;
label_200edc:
    // 0x200edc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x200EDCu;
    {
        const bool branch_taken_0x200edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200EDCu;
        // 0x200ee0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200edc) {
            ctx->pc = 0x200F18u;
            goto label_200f18;
        }
    }
    ctx->pc = 0x200EE4u;
label_200ee4:
    // 0x200ee4: 0x52a00005  beql        $s5, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x200EE4u;
    {
        const bool branch_taken_0x200ee4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x200ee4) {
            ctx->pc = 0x200EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200EE4u;
            // 0x200ee8: 0x8e020080  lw          $v0, 0x80($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200EFCu;
            goto label_200efc;
        }
    }
    ctx->pc = 0x200EECu;
    // 0x200eec: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x200eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x200ef0: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x200ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x200ef4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x200ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x200ef8: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x200ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_200efc:
    // 0x200efc: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x200efcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x200f00: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x200f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x200f04: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x200F04u;
    {
        const bool branch_taken_0x200f04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x200f04) {
            ctx->pc = 0x200F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200F04u;
            // 0x200f08: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200F18u;
            goto label_200f18;
        }
    }
    ctx->pc = 0x200F0Cu;
    // 0x200f0c: 0xc0804a4  jal         func_201290
    ctx->pc = 0x200F0Cu;
    SET_GPR_U32(ctx, 31, 0x200F14u);
    ctx->pc = 0x200F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200F0Cu;
    // 0x200f10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201290u, 0x200F0Cu, 0x200F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200F14u;
label_200f14:
    // 0x200f14: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x200f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_200f18:
    // 0x200f18: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x200f18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x200f1c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x200f1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x200f20: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x200f20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x200f24: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x200f24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x200f28: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x200f28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x200f2c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x200f2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x200f30: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x200f30u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x200f34: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x200f34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200f38: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x200f38u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200f3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200f40: 0x3e00008  jr          $ra
    ctx->pc = 0x200F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F40u;
        // 0x200f44: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200F48u;
    // 0x200f48: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x200f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x200f4c: 0x0  nop
    ctx->pc = 0x200f4cu;
    // NOP
    ctx->pc = 0x200f50u;
}
