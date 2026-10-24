#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: func_007CEEE8
// Address: 0x7ceee8 - 0x7cf018
void func_007CEEE8_0x7ceee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007CEEE8_0x7ceee8");
#endif

    switch (ctx->pc) {
        case 0x7cef28u: goto label_7cef28;
        case 0x7cef44u: goto label_7cef44;
        case 0x7cef68u: goto label_7cef68;
        case 0x7cef78u: goto label_7cef78;
        case 0x7cefa4u: goto label_7cefa4;
        case 0x7cefbcu: goto label_7cefbc;
        default: break;
    }

    ctx->pc = 0x7ceee8u;

    // 0x7ceee8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7ceee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x7ceeec: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x7ceeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x7ceef0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x7ceef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x7ceef4: 0x3c15007d  lui         $s5, 0x7D
    ctx->pc = 0x7ceef4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)125 << 16));
    // 0x7ceef8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x7ceef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x7ceefc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7ceefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x7cef00: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x7cef00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cef04: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x7cef04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x7cef08: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x7cef08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7cef0c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x7cef0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x7cef10: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x7cef10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x7cef14: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x7cef14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x7cef18: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x7cef18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x7cef1c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x7CEF1Cu;
    {
        const bool branch_taken_0x7cef1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CEF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CEF1Cu;
        // 0x7cef20: 0x26b44080  addiu       $s4, $s5, 0x4080 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 16512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cef1c) {
            ctx->pc = 0x7CEF58u;
            goto label_7cef58;
        }
    }
    ctx->pc = 0x7CEF24u;
    // 0x7cef24: 0x3c11007d  lui         $s1, 0x7D
    ctx->pc = 0x7cef24u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)125 << 16));
label_7cef28:
    // 0x7cef28: 0x101200  sll         $v0, $s0, 8
    ctx->pc = 0x7cef28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x7cef2c: 0x26253084  addiu       $a1, $s1, 0x3084
    ctx->pc = 0x7cef2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12420));
    // 0x7cef30: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x7cef30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x7cef34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x7cef34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cef38: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x7cef38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x7cef3c: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x7CEF3Cu;
    SET_GPR_U32(ctx, 31, 0x7CEF44u);
    ctx->pc = 0x7CEF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CEF3Cu;
    // 0x7cef40: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x7CEF3Cu, 0x7CEF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CEF44u;
label_7cef44:
    // 0x7cef44: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x7cef44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x7cef48: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x7cef48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x7cef4c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x7cef4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x7cef50: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x7CEF50u;
    {
        const bool branch_taken_0x7cef50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CEF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CEF50u;
        // 0x7cef54: 0x283a021  addu        $s4, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cef50) {
            ctx->pc = 0x7CEF28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cef28;
        }
    }
    ctx->pc = 0x7CEF58u;
label_7cef58:
    // 0x7cef58: 0x8e72000c  lw          $s2, 0xC($s3)
    ctx->pc = 0x7cef58u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x7cef5c: 0x1a400023  blez        $s2, . + 4 + (0x23 << 2)
    ctx->pc = 0x7CEF5Cu;
    {
        const bool branch_taken_0x7cef5c = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x7CEF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CEF5Cu;
        // 0x7cef60: 0x26b44080  addiu       $s4, $s5, 0x4080 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 16512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cef5c) {
            ctx->pc = 0x7CEFECu;
            goto label_7cefec;
        }
    }
    ctx->pc = 0x7CEF64u;
    // 0x7cef64: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x7cef64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_7cef68:
    // 0x7cef68: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x7cef68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cef6c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x7cef6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cef70: 0xc1f3b98  jal         func_7CEE60
    ctx->pc = 0x7CEF70u;
    SET_GPR_U32(ctx, 31, 0x7CEF78u);
    ctx->pc = 0x7CEF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CEF70u;
    // 0x7cef74: 0x2843021  addu        $a2, $s4, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CEE60u, 0x7CEF70u, 0x7CEF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CEF78u;
label_7cef78:
    // 0x7cef78: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x7CEF78u;
    {
        const bool branch_taken_0x7cef78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CEF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CEF78u;
        // 0x7cef7c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cef78) {
            ctx->pc = 0x7CEFF4u;
            goto label_7ceff4;
        }
    }
    ctx->pc = 0x7CEF80u;
    // 0x7cef80: 0x8e700008  lw          $s0, 0x8($s3)
    ctx->pc = 0x7cef80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x7cef84: 0x3c11007d  lui         $s1, 0x7D
    ctx->pc = 0x7cef84u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)125 << 16));
    // 0x7cef88: 0x8e245080  lw          $a0, 0x5080($s1)
    ctx->pc = 0x7cef88u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7D5080u));
    // 0x7cef8c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x7cef8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cef90: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x7cef90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x7cef94: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x7cef94u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
    // 0x7cef98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x7cef98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cef9c: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x7CEF9Cu;
    SET_GPR_U32(ctx, 31, 0x7CEFA4u);
    ctx->pc = 0x7CEFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CEF9Cu;
    // 0x7cefa0: 0x2509023  subu        $s2, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x7CEF9Cu, 0x7CEFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CEFA4u;
label_7cefa4:
    // 0x7cefa4: 0x8e235080  lw          $v1, 0x5080($s1)
    ctx->pc = 0x7cefa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20608)));
    // 0x7cefa8: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x7cefa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x7cefac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x7cefacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cefb0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x7cefb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cefb4: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x7CEFB4u;
    SET_GPR_U32(ctx, 31, 0x7CEFBCu);
    ctx->pc = 0x7CEFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CEFB4u;
    // 0x7cefb8: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x7CEFB4u, 0x7CEFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CEFBCu;
label_7cefbc:
    // 0x7cefbc: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x7cefbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x7cefc0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x7cefc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7cefc4: 0x8e245080  lw          $a0, 0x5080($s1)
    ctx->pc = 0x7cefc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20608)));
    // 0x7cefc8: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x7cefc8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x7cefcc: 0x24a2001f  addiu       $v0, $a1, 0x1F
    ctx->pc = 0x7cefccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    // 0x7cefd0: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x7cefd0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x7cefd4: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x7cefd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x7cefd8: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x7cefd8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x7cefdc: 0xae245080  sw          $a0, 0x5080($s1)
    ctx->pc = 0x7cefdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20608), GPR_U32(ctx, 4));
    // 0x7cefe0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x7cefe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x7cefe4: 0x1e40ffe0  bgtz        $s2, . + 4 + (-0x20 << 2)
    ctx->pc = 0x7CEFE4u;
    {
        const bool branch_taken_0x7cefe4 = (GPR_S64(ctx, 18) > 0);
        ctx->pc = 0x7CEFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CEFE4u;
        // 0x7cefe8: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cefe4) {
            ctx->pc = 0x7CEF68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cef68;
        }
    }
    ctx->pc = 0x7CEFECu;
label_7cefec:
    // 0x7cefec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7cefecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ceff0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x7ceff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_7ceff4:
    // 0x7ceff4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x7ceff4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7ceff8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x7ceff8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7ceffc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x7ceffcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7cf000: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x7cf000u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7cf004: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x7cf004u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7cf008: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7cf008u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7cf00c: 0x3e00008  jr          $ra
    ctx->pc = 0x7CF00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CF010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CF00Cu;
        // 0x7cf010: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CF00Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CF014u;
    // 0x7cf014: 0x0  nop
    ctx->pc = 0x7cf014u;
    // NOP
    ctx->pc = 0x7cf018u;
}
} // namespace gh_mcport
