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

// Function: _sceMpegNextHeader
// Address: 0x3a0e28 - 0x3a0f80
void _sceMpegNextHeader_0x3a0e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceMpegNextHeader_0x3a0e28");
#endif

    switch (ctx->pc) {
        case 0x3a0e70u: goto label_3a0e70;
        case 0x3a0e84u: goto label_3a0e84;
        case 0x3a0e90u: goto label_3a0e90;
        case 0x3a0e98u: goto label_3a0e98;
        case 0x3a0ea4u: goto label_3a0ea4;
        case 0x3a0ec0u: goto label_3a0ec0;
        case 0x3a0f04u: goto label_3a0f04;
        case 0x3a0f14u: goto label_3a0f14;
        case 0x3a0f24u: goto label_3a0f24;
        case 0x3a0f3cu: goto label_3a0f3c;
        default: break;
    }

    ctx->pc = 0x3a0e28u;

    // 0x3a0e28: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3a0e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3a0e2c: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x3a0e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x3a0e30: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x3a0e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x3a0e34: 0x241701b3  addiu       $s7, $zero, 0x1B3
    ctx->pc = 0x3a0e34u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 435));
    // 0x3a0e38: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x3a0e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x3a0e3c: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x3a0e3cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3a0e40: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x3a0e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x3a0e44: 0x24150100  addiu       $s5, $zero, 0x100
    ctx->pc = 0x3a0e44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3a0e48: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x3a0e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x3a0e4c: 0x241401b7  addiu       $s4, $zero, 0x1B7
    ctx->pc = 0x3a0e4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
    // 0x3a0e50: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x3a0e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x3a0e54: 0x241301b8  addiu       $s3, $zero, 0x1B8
    ctx->pc = 0x3a0e54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 440));
    // 0x3a0e58: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3a0e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3a0e5c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x3a0e5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a0e60: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3a0e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x3a0e64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a0e64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0e68: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x3a0e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x3a0e6c: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x3a0e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_3a0e70:
    // 0x3a0e70: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x3A0E70u;
    {
        const bool branch_taken_0x3a0e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0E70u;
        // 0x3a0e74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0e70) {
            ctx->pc = 0x3A0F50u;
            goto label_3a0f50;
        }
    }
    ctx->pc = 0x3A0E78u;
    // 0x3a0e78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0e7c: 0xc0e83e2  jal         func_3A0F88
    ctx->pc = 0x3A0E7Cu;
    SET_GPR_U32(ctx, 31, 0x3A0E84u);
    ctx->pc = 0x3A0E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0E7Cu;
    // 0x3a0e80: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0F88u, 0x3A0E7Cu, 0x3A0E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0E84u;
label_3a0e84:
    // 0x3a0e84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3A0E84u;
    {
        const bool branch_taken_0x3a0e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0E84u;
        // 0x3a0e88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0e84) {
            ctx->pc = 0x3A0E9Cu;
            goto label_3a0e9c;
        }
    }
    ctx->pc = 0x3A0E8Cu;
    // 0x3a0e8c: 0x0  nop
    ctx->pc = 0x3a0e8cu;
    // NOP
label_3a0e90:
    // 0x3a0e90: 0xc0e8388  jal         func_3A0E20
    ctx->pc = 0x3A0E90u;
    SET_GPR_U32(ctx, 31, 0x3A0E98u);
    ctx->pc = 0x3A0E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0E90u;
    // 0x3a0e94: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0E20u, 0x3A0E90u, 0x3A0E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0E98u;
label_3a0e98:
    // 0x3a0e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a0e9c:
    // 0x3a0e9c: 0xc0e7ae4  jal         func_39EB90
    ctx->pc = 0x3A0E9Cu;
    SET_GPR_U32(ctx, 31, 0x3A0EA4u);
    ctx->pc = 0x3A0EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0E9Cu;
    // 0x3a0ea0: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EB90u, 0x3A0E9Cu, 0x3A0EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0EA4u;
label_3a0ea4:
    // 0x3a0ea4: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A0EA4u;
    {
        const bool branch_taken_0x3a0ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x3A0EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0EA4u;
        // 0x3a0ea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0ea4) {
            ctx->pc = 0x3A0EB8u;
            goto label_3a0eb8;
        }
    }
    ctx->pc = 0x3A0EACu;
    // 0x3a0eac: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x3a0eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x3a0eb0: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3A0EB0u;
    {
        const bool branch_taken_0x3a0eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0eb0) {
            ctx->pc = 0x3A0E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0e90;
        }
    }
    ctx->pc = 0x3A0EB8u;
label_3a0eb8:
    // 0x3a0eb8: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A0EB8u;
    SET_GPR_U32(ctx, 31, 0x3A0EC0u);
    ctx->pc = 0x3A0EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0EB8u;
    // 0x3a0ebc: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A0EB8u, 0x3A0EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0EC0u;
label_3a0ec0:
    // 0x3a0ec0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3a0ec0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0ec4: 0x1077000d  beq         $v1, $s7, . + 4 + (0xD << 2)
    ctx->pc = 0x3A0EC4u;
    {
        const bool branch_taken_0x3a0ec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        ctx->pc = 0x3A0EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0EC4u;
        // 0x3a0ec8: 0x2c6201b4  sltiu       $v0, $v1, 0x1B4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)436) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0ec4) {
            ctx->pc = 0x3A0EFCu;
            goto label_3a0efc;
        }
    }
    ctx->pc = 0x3A0ECCu;
    // 0x3a0ecc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A0ECCu;
    {
        const bool branch_taken_0x3a0ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0ecc) {
            ctx->pc = 0x3A0EE4u;
            goto label_3a0ee4;
        }
    }
    ctx->pc = 0x3A0ED4u;
    // 0x3a0ed4: 0x10750011  beq         $v1, $s5, . + 4 + (0x11 << 2)
    ctx->pc = 0x3A0ED4u;
    {
        const bool branch_taken_0x3a0ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x3a0ed4) {
            ctx->pc = 0x3A0F1Cu;
            goto label_3a0f1c;
        }
    }
    ctx->pc = 0x3A0EDCu;
    // 0x3a0edc: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x3A0EDCu;
    {
        const bool branch_taken_0x3a0edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0EDCu;
        // 0x3a0ee0: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0edc) {
            ctx->pc = 0x3A0E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0e70;
        }
    }
    ctx->pc = 0x3A0EE4u;
label_3a0ee4:
    // 0x3a0ee4: 0x1074001a  beq         $v1, $s4, . + 4 + (0x1A << 2)
    ctx->pc = 0x3A0EE4u;
    {
        const bool branch_taken_0x3a0ee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x3A0EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0EE4u;
        // 0x3a0ee8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0ee4) {
            ctx->pc = 0x3A0F50u;
            goto label_3a0f50;
        }
    }
    ctx->pc = 0x3A0EECu;
    // 0x3a0eec: 0x10730007  beq         $v1, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A0EECu;
    {
        const bool branch_taken_0x3a0eec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x3a0eec) {
            ctx->pc = 0x3A0F0Cu;
            goto label_3a0f0c;
        }
    }
    ctx->pc = 0x3A0EF4u;
    // 0x3a0ef4: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x3A0EF4u;
    {
        const bool branch_taken_0x3a0ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0EF4u;
        // 0x3a0ef8: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0ef4) {
            ctx->pc = 0x3A0E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0e70;
        }
    }
    ctx->pc = 0x3A0EFCu;
label_3a0efc:
    // 0x3a0efc: 0xc0e80cc  jal         func_3A0330
    ctx->pc = 0x3A0EFCu;
    SET_GPR_U32(ctx, 31, 0x3A0F04u);
    ctx->pc = 0x3A0F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0EFCu;
    // 0x3a0f00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0330u, 0x3A0EFCu, 0x3A0F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0F04u;
label_3a0f04:
    // 0x3a0f04: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x3A0F04u;
    {
        const bool branch_taken_0x3a0f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0F04u;
        // 0x3a0f08: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0f04) {
            ctx->pc = 0x3A0E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0e70;
        }
    }
    ctx->pc = 0x3A0F0Cu;
label_3a0f0c:
    // 0x3a0f0c: 0xc0e8178  jal         func_3A05E0
    ctx->pc = 0x3A0F0Cu;
    SET_GPR_U32(ctx, 31, 0x3A0F14u);
    ctx->pc = 0x3A0F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0F0Cu;
    // 0x3a0f10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A05E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A05E0u, 0x3A0F0Cu, 0x3A0F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0F14u;
label_3a0f14:
    // 0x3a0f14: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x3A0F14u;
    {
        const bool branch_taken_0x3a0f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0F14u;
        // 0x3a0f18: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0f14) {
            ctx->pc = 0x3A0E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0e70;
        }
    }
    ctx->pc = 0x3A0F1Cu;
label_3a0f1c:
    // 0x3a0f1c: 0xc0e81a0  jal         func_3A0680
    ctx->pc = 0x3A0F1Cu;
    SET_GPR_U32(ctx, 31, 0x3A0F24u);
    ctx->pc = 0x3A0F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0F1Cu;
    // 0x3a0f20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0680u, 0x3A0F1Cu, 0x3A0F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0F24u;
label_3a0f24:
    // 0x3a0f24: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x3a0f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x3a0f28: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3a0f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0f2c: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x3a0f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
    // 0x3a0f30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a0f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a0f34: 0xc0e6ac8  jal         func_39AB20
    ctx->pc = 0x3A0F34u;
    SET_GPR_U32(ctx, 31, 0x3A0F3Cu);
    ctx->pc = 0x3A0F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0F34u;
    // 0x3a0f38: 0xffb20008  sd          $s2, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AB20u, 0x3A0F34u, 0x3A0F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0F3Cu;
label_3a0f3c:
    // 0x3a0f3c: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x3a0f3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a0f40: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x3a0f40u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a0f44: 0xfe020840  sd          $v0, 0x840($s0)
    ctx->pc = 0x3a0f44u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2112), GPR_U64(ctx, 2));
    // 0x3a0f48: 0xfe030838  sd          $v1, 0x838($s0)
    ctx->pc = 0x3a0f48u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2104), GPR_U64(ctx, 3));
    // 0x3a0f4c: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x3a0f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_3a0f50:
    // 0x3a0f50: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3a0f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3a0f54: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x3a0f54u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3a0f58: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x3a0f58u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3a0f5c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x3a0f5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a0f60: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x3a0f60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a0f64: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x3a0f64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a0f68: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x3a0f68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a0f6c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x3a0f6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a0f70: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3a0f70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a0f74: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0F74u;
        // 0x3a0f78: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0F7Cu;
    // 0x3a0f7c: 0x0  nop
    ctx->pc = 0x3a0f7cu;
    // NOP
    ctx->pc = 0x3a0f80u;
}
