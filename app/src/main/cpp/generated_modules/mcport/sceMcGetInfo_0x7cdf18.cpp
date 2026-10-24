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
// Function: sceMcGetInfo
// Address: 0x7cdf18 - 0x7ce098
void sceMcGetInfo_0x7cdf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMcGetInfo_0x7cdf18");
#endif

    switch (ctx->pc) {
        case 0x7cdf78u: goto label_7cdf78;
        case 0x7ce014u: goto label_7ce014;
        case 0x7ce044u: goto label_7ce044;
        case 0x7ce054u: goto label_7ce054;
        default: break;
    }

    ctx->pc = 0x7cdf18u;

    // 0x7cdf18: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x7cdf18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x7cdf1c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x7cdf1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x7cdf20: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x7cdf20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x7cdf24: 0x3c16007d  lui         $s6, 0x7D
    ctx->pc = 0x7cdf24u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)125 << 16));
    // 0x7cdf28: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x7cdf28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x7cdf2c: 0x26c21980  addiu       $v0, $s6, 0x1980
    ctx->pc = 0x7cdf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 6528));
    // 0x7cdf30: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x7cdf30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x7cdf34: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x7cdf34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cdf38: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x7cdf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x7cdf3c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x7cdf3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cdf40: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x7cdf40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x7cdf44: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x7cdf44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cdf48: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x7cdf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x7cdf4c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x7cdf4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cdf50: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x7cdf50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x7cdf54: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x7cdf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x7cdf58: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x7cdf58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7D19A4u));
    // 0x7cdf5c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CDF5Cu;
    {
        const bool branch_taken_0x7cdf5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CDF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDF5Cu;
        // 0x7cdf60: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cdf5c) {
            ctx->pc = 0x7CDF6Cu;
            goto label_7cdf6c;
        }
    }
    ctx->pc = 0x7CDF64u;
    // 0x7cdf64: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x7CDF64u;
    {
        const bool branch_taken_0x7cdf64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CDF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDF64u;
        // 0x7cdf68: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cdf64) {
            ctx->pc = 0x7CE068u;
            goto label_7ce068;
        }
    }
    ctx->pc = 0x7CDF6Cu;
label_7cdf6c:
    // 0x7cdf6c: 0x3c17007d  lui         $s7, 0x7D
    ctx->pc = 0x7cdf6cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)125 << 16));
    // 0x7cdf70: 0xc0ebf3c  jal         func_3AFCF0
    ctx->pc = 0x7CDF70u;
    SET_GPR_U32(ctx, 31, 0x7CDF78u);
    ctx->pc = 0x7CDF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CDF70u;
    // 0x7cdf74: 0x8ee407b4  lw          $a0, 0x7B4($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCF0u, 0x7CDF70u, 0x7CDF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CDF78u;
label_7cdf78:
    // 0x7cdf78: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CDF78u;
    {
        const bool branch_taken_0x7cdf78 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x7CDF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDF78u;
        // 0x7cdf7c: 0x3c11007d  lui         $s1, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cdf78) {
            ctx->pc = 0x7CDF88u;
            goto label_7cdf88;
        }
    }
    ctx->pc = 0x7CDF80u;
    // 0x7cdf80: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x7CDF80u;
    {
        const bool branch_taken_0x7cdf80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CDF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDF80u;
        // 0x7cdf84: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cdf80) {
            ctx->pc = 0x7CE068u;
            goto label_7ce068;
        }
    }
    ctx->pc = 0x7CDF88u;
label_7cdf88:
    // 0x7cdf88: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7cdf88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7cdf8c: 0x26231a00  addiu       $v1, $s1, 0x1A00
    ctx->pc = 0x7cdf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 6656));
    // 0x7cdf90: 0x24821e80  addiu       $v0, $a0, 0x1E80
    ctx->pc = 0x7cdf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 7808));
    // 0x7cdf94: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x7cdf94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
    // 0x7cdf98: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x7cdf98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
    // 0x7cdf9c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x7CDF9Cu;
    {
        const bool branch_taken_0x7cdf9c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CDFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDF9Cu;
        // 0x7cdfa0: 0xac62001c  sw          $v0, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cdf9c) {
            ctx->pc = 0x7CDFB0u;
            goto label_7cdfb0;
        }
    }
    ctx->pc = 0x7CDFA4u;
    // 0x7cdfa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7cdfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7cdfa8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7CDFA8u;
    {
        const bool branch_taken_0x7cdfa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CDFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDFA8u;
        // 0x7cdfac: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cdfa8) {
            ctx->pc = 0x7CDFB4u;
            goto label_7cdfb4;
        }
    }
    ctx->pc = 0x7CDFB0u;
label_7cdfb0:
    // 0x7cdfb0: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x7cdfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_7cdfb4:
    // 0x7cdfb4: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x7CDFB4u;
    {
        const bool branch_taken_0x7cdfb4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CDFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDFB4u;
        // 0x7cdfb8: 0x26231a00  addiu       $v1, $s1, 0x1A00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 6656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cdfb4) {
            ctx->pc = 0x7CDFC8u;
            goto label_7cdfc8;
        }
    }
    ctx->pc = 0x7CDFBCu;
    // 0x7cdfbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7cdfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7cdfc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7CDFC0u;
    {
        const bool branch_taken_0x7cdfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CDFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDFC0u;
        // 0x7cdfc4: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cdfc0) {
            ctx->pc = 0x7CDFD0u;
            goto label_7cdfd0;
        }
    }
    ctx->pc = 0x7CDFC8u;
label_7cdfc8:
    // 0x7cdfc8: 0x26221a00  addiu       $v0, $s1, 0x1A00
    ctx->pc = 0x7cdfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 6656));
    // 0x7cdfcc: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x7cdfccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_7cdfd0:
    // 0x7cdfd0: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x7CDFD0u;
    {
        const bool branch_taken_0x7cdfd0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CDFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDFD0u;
        // 0x7cdfd4: 0x26231a00  addiu       $v1, $s1, 0x1A00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 6656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cdfd0) {
            ctx->pc = 0x7CDFE4u;
            goto label_7cdfe4;
        }
    }
    ctx->pc = 0x7CDFD8u;
    // 0x7cdfd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7cdfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7cdfdc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7CDFDCu;
    {
        const bool branch_taken_0x7cdfdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CDFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDFDCu;
        // 0x7cdfe0: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cdfdc) {
            ctx->pc = 0x7CDFECu;
            goto label_7cdfec;
        }
    }
    ctx->pc = 0x7CDFE4u;
label_7cdfe4:
    // 0x7cdfe4: 0x26221a00  addiu       $v0, $s1, 0x1A00
    ctx->pc = 0x7cdfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 6656));
    // 0x7cdfe8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x7cdfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_7cdfec:
    // 0x7cdfec: 0x24901e80  addiu       $s0, $a0, 0x1E80
    ctx->pc = 0x7cdfecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 7808));
    // 0x7cdff0: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cdff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cdff4: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7cdff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7cdff8: 0x3c06007d  lui         $a2, 0x7D
    ctx->pc = 0x7cdff8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)125 << 16));
    // 0x7cdffc: 0xac5319a8  sw          $s3, 0x19A8($v0)
    ctx->pc = 0x7cdffcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x7D19A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7D19A8u, _value); } while (0);
    // 0x7ce000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7ce000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce004: 0xac7419ac  sw          $s4, 0x19AC($v1)
    ctx->pc = 0x7ce004u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x7D19ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7D19ACu, _value); } while (0);
    // 0x7ce008: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x7ce008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x7ce00c: 0xc0eca14  jal         func_3B2850
    ctx->pc = 0x7CE00Cu;
    SET_GPR_U32(ctx, 31, 0x7CE014u);
    ctx->pc = 0x7CE010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE00Cu;
    // 0x7ce010: 0xacd519b0  sw          $s5, 0x19B0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 6576), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2850u, 0x7CE00Cu, 0x7CE014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE014u;
label_7ce014:
    // 0x7ce014: 0x3c09007d  lui         $t1, 0x7D
    ctx->pc = 0x7ce014u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)125 << 16));
    // 0x7ce018: 0x3c0b007d  lui         $t3, 0x7D
    ctx->pc = 0x7ce018u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)125 << 16));
    // 0x7ce01c: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x7ce01cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x7ce020: 0x26c41980  addiu       $a0, $s6, 0x1980
    ctx->pc = 0x7ce020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 6528));
    // 0x7ce024: 0x26271a00  addiu       $a3, $s1, 0x1A00
    ctx->pc = 0x7ce024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 6656));
    // 0x7ce028: 0x25292f40  addiu       $t1, $t1, 0x2F40
    ctx->pc = 0x7ce028u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12096));
    // 0x7ce02c: 0x256bdec0  addiu       $t3, $t3, -0x2140
    ctx->pc = 0x7ce02cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294958784));
    // 0x7ce030: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7ce030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7ce034: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7ce034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7ce038: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x7ce038u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x7ce03c: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x7CE03Cu;
    SET_GPR_U32(ctx, 31, 0x7CE044u);
    ctx->pc = 0x7CE040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE03Cu;
    // 0x7ce040: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x7CE03Cu, 0x7CE044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE044u;
label_7ce044:
    // 0x7ce044: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CE044u;
    {
        const bool branch_taken_0x7ce044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CE048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE044u;
        // 0x7ce048: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce044) {
            ctx->pc = 0x7CE05Cu;
            goto label_7ce05c;
        }
    }
    ctx->pc = 0x7CE04Cu;
    // 0x7ce04c: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x7CE04Cu;
    SET_GPR_U32(ctx, 31, 0x7CE054u);
    ctx->pc = 0x7CE050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE04Cu;
    // 0x7ce050: 0x8ee407b4  lw          $a0, 0x7B4($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x7CE04Cu, 0x7CE054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE054u;
label_7ce054:
    // 0x7ce054: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7CE054u;
    {
        const bool branch_taken_0x7ce054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CE058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE054u;
        // 0x7ce058: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce054) {
            ctx->pc = 0x7CE068u;
            goto label_7ce068;
        }
    }
    ctx->pc = 0x7CE05Cu;
label_7ce05c:
    // 0x7ce05c: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7ce05cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7ce060: 0xac6207b0  sw          $v0, 0x7B0($v1)
    ctx->pc = 0x7ce060u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7D07B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7D07B0u, _value); } while (0);
    // 0x7ce064: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7ce064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7ce068:
    // 0x7ce068: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x7ce068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x7ce06c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x7ce06cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7ce070: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x7ce070u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7ce074: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x7ce074u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7ce078: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x7ce078u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7ce07c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x7ce07cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7ce080: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x7ce080u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7ce084: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x7ce084u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7ce088: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x7ce088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ce08c: 0x3e00008  jr          $ra
    ctx->pc = 0x7CE08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CE090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE08Cu;
        // 0x7ce090: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CE08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CE094u;
    // 0x7ce094: 0x0  nop
    ctx->pc = 0x7ce094u;
    // NOP
    ctx->pc = 0x7ce098u;
}
} // namespace gh_mcport
