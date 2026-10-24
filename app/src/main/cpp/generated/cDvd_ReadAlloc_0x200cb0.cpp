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

// Function: cDvd_ReadAlloc
// Address: 0x200cb0 - 0x200df8
void cDvd_ReadAlloc_0x200cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDvd_ReadAlloc_0x200cb0");
#endif

    switch (ctx->pc) {
        case 0x200d04u: goto label_200d04;
        case 0x200d24u: goto label_200d24;
        case 0x200d54u: goto label_200d54;
        case 0x200d90u: goto label_200d90;
        case 0x200da4u: goto label_200da4;
        case 0x200dc4u: goto label_200dc4;
        default: break;
    }

    ctx->pc = 0x200cb0u;

    // 0x200cb0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x200cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x200cb4: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x200cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x200cb8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x200cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x200cbc: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x200cbcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200cc0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x200cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x200cc4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x200cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x200cc8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x200cc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200ccc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x200cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x200cd0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x200cd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200cd4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x200cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x200cd8: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x200cd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200cdc: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x200cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x200ce0: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x200ce0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200ce4: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x200ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x200ce8: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x200ce8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200cec: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x200cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x200cf0: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x200cf0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200cf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200cf8: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x200cf8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200cfc: 0xc0805ea  jal         func_2017A8
    ctx->pc = 0x200CFCu;
    SET_GPR_U32(ctx, 31, 0x200D04u);
    ctx->pc = 0x200D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200CFCu;
    // 0x200d00: 0xafc00000  sw          $zero, 0x0($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2017A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2017A8u, 0x200CFCu, 0x200D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D04u;
label_200d04:
    // 0x200d04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x200d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200d08: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x200D08u;
    {
        const bool branch_taken_0x200d08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x200D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D08u;
        // 0x200d0c: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200d08) {
            ctx->pc = 0x200DA4u;
            goto label_200da4;
        }
    }
    ctx->pc = 0x200D10u;
    // 0x200d10: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x200d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200d14: 0x24840d40  addiu       $a0, $a0, 0xD40
    ctx->pc = 0x200d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3392));
    // 0x200d18: 0x26060078  addiu       $a2, $s0, 0x78
    ctx->pc = 0x200d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x200d1c: 0xc07fe70  jal         func_1FF9C0
    ctx->pc = 0x200D1Cu;
    SET_GPR_U32(ctx, 31, 0x200D24u);
    ctx->pc = 0x200D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200D1Cu;
    // 0x200d20: 0x2607000c  addiu       $a3, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9C0u, 0x200D1Cu, 0x200D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D24u;
label_200d24:
    // 0x200d24: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x200d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x200d28: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x200d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x200d2c: 0x246307ff  addiu       $v1, $v1, 0x7FF
    ctx->pc = 0x200d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2047));
    // 0x200d30: 0xae15007c  sw          $s5, 0x7C($s0)
    ctx->pc = 0x200d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 21));
    // 0x200d34: 0x31ac2  srl         $v1, $v1, 11
    ctx->pc = 0x200d34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 11));
    // 0x200d38: 0x440001a  bltz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x200D38u;
    {
        const bool branch_taken_0x200d38 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x200D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D38u;
        // 0x200d3c: 0xae030074  sw          $v1, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200d38) {
            ctx->pc = 0x200DA4u;
            goto label_200da4;
        }
    }
    ctx->pc = 0x200D40u;
    // 0x200d40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x200d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200d44: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x200D44u;
    {
        const bool branch_taken_0x200d44 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x200D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D44u;
        // 0x200d48: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200d44) {
            ctx->pc = 0x200D5Cu;
            goto label_200d5c;
        }
    }
    ctx->pc = 0x200D4Cu;
    // 0x200d4c: 0xc0805e2  jal         func_201788
    ctx->pc = 0x200D4Cu;
    SET_GPR_U32(ctx, 31, 0x200D54u);
    ctx->pc = 0x200D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200D4Cu;
    // 0x200d50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201788u, 0x200D4Cu, 0x200D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D54u;
label_200d54:
    // 0x200d54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x200D54u;
    {
        const bool branch_taken_0x200d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D54u;
        // 0x200d58: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200d54) {
            ctx->pc = 0x200D60u;
            goto label_200d60;
        }
    }
    ctx->pc = 0x200D5Cu;
label_200d5c:
    // 0x200d5c: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x200d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
label_200d60:
    // 0x200d60: 0xae16006c  sw          $s6, 0x6C($s0)
    ctx->pc = 0x200d60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 22));
    // 0x200d64: 0xae170070  sw          $s7, 0x70($s0)
    ctx->pc = 0x200d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 23));
    // 0x200d68: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x200D68u;
    {
        const bool branch_taken_0x200d68 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x200D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D68u;
        // 0x200d6c: 0xae000080  sw          $zero, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200d68) {
            ctx->pc = 0x200D7Cu;
            goto label_200d7c;
        }
    }
    ctx->pc = 0x200D70u;
    // 0x200d70: 0x268207ff  addiu       $v0, $s4, 0x7FF
    ctx->pc = 0x200d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 2047));
    // 0x200d74: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x200d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x200d78: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x200d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_200d7c:
    // 0x200d7c: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x200d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x200d80: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x200d80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200d84: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x200d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x200d88: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x200D88u;
    SET_GPR_U32(ctx, 31, 0x200D90u);
    ctx->pc = 0x200D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200D88u;
    // 0x200d8c: 0x422c0  sll         $a0, $a0, 11 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x200D88u, 0x200D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D90u;
label_200d90:
    // 0x200d90: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x200D90u;
    {
        const bool branch_taken_0x200d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D90u;
        // 0x200d94: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200d90) {
            ctx->pc = 0x200DACu;
            goto label_200dac;
        }
    }
    ctx->pc = 0x200D98u;
    // 0x200d98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x200d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200d9c: 0xc08048a  jal         func_201228
    ctx->pc = 0x200D9Cu;
    SET_GPR_U32(ctx, 31, 0x200DA4u);
    ctx->pc = 0x200DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200D9Cu;
    // 0x200da0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201228u, 0x200D9Cu, 0x200DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200DA4u;
label_200da4:
    // 0x200da4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x200DA4u;
    {
        const bool branch_taken_0x200da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200DA4u;
        // 0x200da8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200da4) {
            ctx->pc = 0x200DC8u;
            goto label_200dc8;
        }
    }
    ctx->pc = 0x200DACu;
label_200dac:
    // 0x200dac: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x200dacu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x200db0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x200db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x200db4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x200DB4u;
    {
        const bool branch_taken_0x200db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200db4) {
            ctx->pc = 0x200DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200DB4u;
            // 0x200db8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200DC8u;
            goto label_200dc8;
        }
    }
    ctx->pc = 0x200DBCu;
    // 0x200dbc: 0xc0804a4  jal         func_201290
    ctx->pc = 0x200DBCu;
    SET_GPR_U32(ctx, 31, 0x200DC4u);
    ctx->pc = 0x200DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200DBCu;
    // 0x200dc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201290u, 0x200DBCu, 0x200DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200DC4u;
label_200dc4:
    // 0x200dc4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x200dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_200dc8:
    // 0x200dc8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x200dc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x200dcc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x200dccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x200dd0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x200dd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x200dd4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x200dd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x200dd8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x200dd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x200ddc: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x200ddcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x200de0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x200de0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x200de4: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x200de4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200de8: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x200de8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200dec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200df0: 0x3e00008  jr          $ra
    ctx->pc = 0x200DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200DF0u;
        // 0x200df4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200DF8u;
}
