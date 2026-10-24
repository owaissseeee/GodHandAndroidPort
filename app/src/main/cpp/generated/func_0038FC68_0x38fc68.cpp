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

// Function: func_0038FC68
// Address: 0x38fc68 - 0x38fde8
void func_0038FC68_0x38fc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038FC68_0x38fc68");
#endif

    switch (ctx->pc) {
        case 0x38fcb8u: goto label_38fcb8;
        case 0x38fcf0u: goto label_38fcf0;
        case 0x38fd30u: goto label_38fd30;
        case 0x38fd78u: goto label_38fd78;
        case 0x38fda0u: goto label_38fda0;
        default: break;
    }

    ctx->pc = 0x38fc68u;

    // 0x38fc68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x38fc68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x38fc6c: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x38fc6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fc70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38fc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38fc74: 0x53143  sra         $a2, $a1, 5
    ctx->pc = 0x38fc74u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 5));
    // 0x38fc78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x38fc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x38fc7c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x38fc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x38fc80: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x38fc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x38fc84: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38fc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38fc88: 0x8d440010  lw          $a0, 0x10($t2)
    ctx->pc = 0x38fc88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x38fc8c: 0x8d470004  lw          $a3, 0x4($t2)
    ctx->pc = 0x38fc8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x38fc90: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x38fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x38fc94: 0x10a0004b  beqz        $a1, . + 4 + (0x4B << 2)
    ctx->pc = 0x38FC94u;
    {
        const bool branch_taken_0x38fc94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FC94u;
        // 0x38fc98: 0x24500001  addiu       $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fc94) {
            ctx->pc = 0x38FDC4u;
            goto label_38fdc4;
        }
    }
    ctx->pc = 0x38FC9Cu;
    // 0x38fc9c: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x38fc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x38fca0: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x38fca0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x38fca4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x38FCA4u;
    {
        const bool branch_taken_0x38fca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FCA4u;
        // 0x38fca8: 0x49880  sll         $s3, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fca4) {
            ctx->pc = 0x38FCDCu;
            goto label_38fcdc;
        }
    }
    ctx->pc = 0x38FCACu;
    // 0x38fcac: 0x69080  sll         $s2, $a2, 2
    ctx->pc = 0x38fcacu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x38fcb0: 0x30b1001f  andi        $s1, $a1, 0x1F
    ctx->pc = 0x38fcb0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x38fcb4: 0x0  nop
    ctx->pc = 0x38fcb4u;
    // NOP
label_38fcb8:
    // 0x38fcb8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x38fcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x38fcbc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x38fcbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x38fcc0: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x38fcc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x38fcc4: 0x0  nop
    ctx->pc = 0x38fcc4u;
    // NOP
    // 0x38fcc8: 0x0  nop
    ctx->pc = 0x38fcc8u;
    // NOP
    // 0x38fccc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x38FCCCu;
    {
        const bool branch_taken_0x38fccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38fccc) {
            ctx->pc = 0x38FCB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38fcb8;
        }
    }
    ctx->pc = 0x38FCD4u;
    // 0x38fcd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x38FCD4u;
    {
        const bool branch_taken_0x38fcd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FCD4u;
        // 0x38fcd8: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fcd4) {
            ctx->pc = 0x38FCE8u;
            goto label_38fce8;
        }
    }
    ctx->pc = 0x38FCDCu;
label_38fcdc:
    // 0x38fcdc: 0x69080  sll         $s2, $a2, 2
    ctx->pc = 0x38fcdcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x38fce0: 0x30b1001f  andi        $s1, $a1, 0x1F
    ctx->pc = 0x38fce0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x38fce4: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x38fce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_38fce8:
    // 0x38fce8: 0xc0e3d6e  jal         func_38F5B8
    ctx->pc = 0x38FCE8u;
    SET_GPR_U32(ctx, 31, 0x38FCF0u);
    ctx->pc = 0x38FCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FCE8u;
    // 0x38fcec: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F5B8u, 0x38FCE8u, 0x38FCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FCF0u;
label_38fcf0:
    // 0x38fcf0: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x38fcf0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fcf4: 0x25490014  addiu       $t1, $t2, 0x14
    ctx->pc = 0x38fcf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 20));
    // 0x38fcf8: 0x1333021  addu        $a2, $t1, $s3
    ctx->pc = 0x38fcf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 19)));
    // 0x38fcfc: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x38FCFCu;
    {
        const bool branch_taken_0x38fcfc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FCFCu;
        // 0x38fd00: 0xd23821  addu        $a3, $a2, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fcfc) {
            ctx->pc = 0x38FD74u;
            goto label_38fd74;
        }
    }
    ctx->pc = 0x38FD04u;
    // 0x38fd04: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x38fd04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x38fd08: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x38fd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x38fd0c: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x38fd0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38fd10: 0x515823  subu        $t3, $v0, $s1
    ctx->pc = 0x38fd10u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x38fd14: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x38fd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x38fd18: 0x126202b  sltu        $a0, $t1, $a2
    ctx->pc = 0x38fd18u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x38fd1c: 0x1681006  srlv        $v0, $t0, $t3
    ctx->pc = 0x38fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 11) & 0x1F));
    // 0x38fd20: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x38fd20u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x38fd24: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x38FD24u;
    {
        const bool branch_taken_0x38fd24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD24u;
        // 0x38fd28: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fd24) {
            ctx->pc = 0x38FD60u;
            goto label_38fd60;
        }
    }
    ctx->pc = 0x38FD2Cu;
    // 0x38fd2c: 0x260cffff  addiu       $t4, $s0, -0x1
    ctx->pc = 0x38fd2cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_38fd30:
    // 0x38fd30: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x38fd30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x38fd34: 0x2281804  sllv        $v1, $t0, $s1
    ctx->pc = 0x38fd34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 17) & 0x1F));
    // 0x38fd38: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x38fd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38fd3c: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x38fd3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x38fd40: 0x126282b  sltu        $a1, $t1, $a2
    ctx->pc = 0x38fd40u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x38fd44: 0x1641006  srlv        $v0, $a0, $t3
    ctx->pc = 0x38fd44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 11) & 0x1F));
    // 0x38fd48: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x38fd48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fd4c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x38fd4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x38fd50: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x38FD50u;
    {
        const bool branch_taken_0x38fd50 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD50u;
        // 0x38fd54: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fd50) {
            ctx->pc = 0x38FD30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38fd30;
        }
    }
    ctx->pc = 0x38FD58u;
    // 0x38fd58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38FD58u;
    {
        const bool branch_taken_0x38fd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD58u;
        // 0x38fd5c: 0x2281004  sllv        $v0, $t0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 17) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fd58) {
            ctx->pc = 0x38FD68u;
            goto label_38fd68;
        }
    }
    ctx->pc = 0x38FD60u;
label_38fd60:
    // 0x38fd60: 0x260cffff  addiu       $t4, $s0, -0x1
    ctx->pc = 0x38fd60u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x38fd64: 0x2281004  sllv        $v0, $t0, $s1
    ctx->pc = 0x38fd64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 17) & 0x1F));
label_38fd68:
    // 0x38fd68: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x38fd68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x38fd6c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x38FD6Cu;
    {
        const bool branch_taken_0x38fd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD6Cu;
        // 0x38fd70: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fd6c) {
            ctx->pc = 0x38FDA4u;
            goto label_38fda4;
        }
    }
    ctx->pc = 0x38FD74u;
label_38fd74:
    // 0x38fd74: 0x260cffff  addiu       $t4, $s0, -0x1
    ctx->pc = 0x38fd74u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_38fd78:
    // 0x38fd78: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x38fd78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x38fd7c: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x38fd7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x38fd80: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x38fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38fd84: 0x126182b  sltu        $v1, $t1, $a2
    ctx->pc = 0x38fd84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x38fd88: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x38fd88u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x38fd8c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x38FD8Cu;
    {
        const bool branch_taken_0x38fd8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x38fd8c) {
            ctx->pc = 0x38FD78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38fd78;
        }
    }
    ctx->pc = 0x38FD94u;
    // 0x38fd94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x38FD94u;
    {
        const bool branch_taken_0x38fd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD94u;
        // 0x38fd98: 0x127102b  sltu        $v0, $t1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fd94) {
            ctx->pc = 0x38FDB8u;
            goto label_38fdb8;
        }
    }
    ctx->pc = 0x38FD9Cu;
    // 0x38fd9c: 0x0  nop
    ctx->pc = 0x38fd9cu;
    // NOP
label_38fda0:
    // 0x38fda0: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x38fda0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_38fda4:
    // 0x38fda4: 0x127102b  sltu        $v0, $t1, $a3
    ctx->pc = 0x38fda4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x38fda8: 0x0  nop
    ctx->pc = 0x38fda8u;
    // NOP
    // 0x38fdac: 0x0  nop
    ctx->pc = 0x38fdacu;
    // NOP
    // 0x38fdb0: 0x0  nop
    ctx->pc = 0x38fdb0u;
    // NOP
    // 0x38fdb4: 0x0  nop
    ctx->pc = 0x38fdb4u;
    // NOP
label_38fdb8:
    // 0x38fdb8: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x38FDB8u;
    {
        const bool branch_taken_0x38fdb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38fdb8) {
            ctx->pc = 0x38FDBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38FDB8u;
            // 0x38fdbc: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38FDA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38fda0;
        }
    }
    ctx->pc = 0x38FDC0u;
    // 0x38fdc0: 0xad4c0010  sw          $t4, 0x10($t2)
    ctx->pc = 0x38fdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 12));
label_38fdc4:
    // 0x38fdc4: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x38fdc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fdc8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x38fdc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38fdcc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x38fdccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38fdd0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x38fdd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38fdd4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38fdd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38fdd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38fdd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38fddc: 0x3e00008  jr          $ra
    ctx->pc = 0x38FDDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38FDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FDDCu;
        // 0x38fde0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FDDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38FDE4u;
    // 0x38fde4: 0x0  nop
    ctx->pc = 0x38fde4u;
    // NOP
    ctx->pc = 0x38fde8u;
}
