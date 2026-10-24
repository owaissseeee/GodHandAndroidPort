#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: checkNotMotion__21cEventSeqPlayerCommonP9cEventSeq
// Address: 0x7b1f30 - 0x7b21b0
void checkNotMotion__21cEventSeqPlayerCommonP9cEventSeq_0x7b1f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkNotMotion__21cEventSeqPlayerCommonP9cEventSeq_0x7b1f30");
#endif

    switch (ctx->pc) {
        case 0x7b1f7cu: goto label_7b1f7c;
        case 0x7b1fb8u: goto label_7b1fb8;
        case 0x7b1fc8u: goto label_7b1fc8;
        case 0x7b2020u: goto label_7b2020;
        case 0x7b2030u: goto label_7b2030;
        case 0x7b2080u: goto label_7b2080;
        case 0x7b2090u: goto label_7b2090;
        case 0x7b20e8u: goto label_7b20e8;
        case 0x7b20f8u: goto label_7b20f8;
        case 0x7b2140u: goto label_7b2140;
        case 0x7b215cu: goto label_7b215c;
        default: break;
    }

    ctx->pc = 0x7b1f30u;

    // 0x7b1f30: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x7b1f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x7b1f34: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7b1f34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7b1f38: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x7b1f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x7b1f3c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x7b1f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x7b1f40: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x7b1f40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b1f44: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x7b1f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x7b1f48: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x7b1f48u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b1f4c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x7b1f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x7b1f50: 0x248458d8  addiu       $a0, $a0, 0x58D8
    ctx->pc = 0x7b1f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22744));
    // 0x7b1f54: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x7b1f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x7b1f58: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x7b1f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x7b1f5c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x7b1f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x7b1f60: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x7b1f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x7b1f64: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x7b1f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x7b1f68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x7b1f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x7b1f6c: 0x82650005  lb          $a1, 0x5($s3)
    ctx->pc = 0x7b1f6cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
    // 0x7b1f70: 0x92660003  lbu         $a2, 0x3($s3)
    ctx->pc = 0x7b1f70u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x7b1f74: 0xc1ec182  jal         func_7B0608
    ctx->pc = 0x7B1F74u;
    SET_GPR_U32(ctx, 31, 0x7B1F7Cu);
    ctx->pc = 0x7B1F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B1F74u;
    // 0x7b1f78: 0x92670004  lbu         $a3, 0x4($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0608u, 0x7B1F74u, 0x7B1F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1F7Cu;
label_7b1f7c:
    // 0x7b1f7c: 0x14400080  bnez        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x7B1F7Cu;
    {
        const bool branch_taken_0x7b1f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B1F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B1F7Cu;
        // 0x7b1f80: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b1f7c) {
            ctx->pc = 0x7B2180u;
            goto label_7b2180;
        }
    }
    ctx->pc = 0x7B1F84u;
    // 0x7b1f84: 0x3c02007b  lui         $v0, 0x7B
    ctx->pc = 0x7b1f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)123 << 16));
    // 0x7b1f88: 0x92720003  lbu         $s2, 0x3($s3)
    ctx->pc = 0x7b1f88u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x7b1f8c: 0x8c565288  lw          $s6, 0x5288($v0)
    ctx->pc = 0x7b1f8cu;
    SET_GPR_S32(ctx, 22, (int32_t)FAST_READ32(0x7B5288u));
    // 0x7b1f90: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x7b1f90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x7b1f94: 0x82740005  lb          $s4, 0x5($s3)
    ctx->pc = 0x7b1f94u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
    // 0x7b1f98: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x7b1f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x7b1f9c: 0x92630002  lbu         $v1, 0x2($s3)
    ctx->pc = 0x7b1f9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x7b1fa0: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x7b1fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x7b1fa4: 0x6400012  bltz        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x7B1FA4u;
    {
        const bool branch_taken_0x7b1fa4 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x7B1FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B1FA4u;
        // 0x7b1fa8: 0x92710004  lbu         $s1, 0x4($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b1fa4) {
            ctx->pc = 0x7B1FF0u;
            goto label_7b1ff0;
        }
    }
    ctx->pc = 0x7B1FACu;
    // 0x7b1fac: 0x14ae00  sll         $s5, $s4, 24
    ctx->pc = 0x7b1facu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 20), 24));
    // 0x7b1fb0: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x7b1fb0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7b1fb4: 0x26e458d8  addiu       $a0, $s7, 0x58D8
    ctx->pc = 0x7b1fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 22744));
label_7b1fb8:
    // 0x7b1fb8: 0x152e03  sra         $a1, $s5, 24
    ctx->pc = 0x7b1fb8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 21), 24));
    // 0x7b1fbc: 0x324600ff  andi        $a2, $s2, 0xFF
    ctx->pc = 0x7b1fbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x7b1fc0: 0xc1ec182  jal         func_7B0608
    ctx->pc = 0x7B1FC0u;
    SET_GPR_U32(ctx, 31, 0x7B1FC8u);
    ctx->pc = 0x7B1FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B1FC0u;
    // 0x7b1fc4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0608u, 0x7B1FC0u, 0x7B1FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1FC8u;
label_7b1fc8:
    // 0x7b1fc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7b1fc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b1fcc: 0x56000055  bnel        $s0, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x7B1FCCu;
    {
        const bool branch_taken_0x7b1fcc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b1fcc) {
            ctx->pc = 0x7B1FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B1FCCu;
            // 0x7b1fd0: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2124u;
            goto label_7b2124;
        }
    }
    ctx->pc = 0x7B1FD4u;
    // 0x7b1fd4: 0x563e0003  bnel        $s1, $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B1FD4u;
    {
        const bool branch_taken_0x7b1fd4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 30));
        if (branch_taken_0x7b1fd4) {
            ctx->pc = 0x7B1FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B1FD4u;
            // 0x7b1fd8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B1FE4u;
            goto label_7b1fe4;
        }
    }
    ctx->pc = 0x7B1FDCu;
    // 0x7b1fdc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7B1FDCu;
    {
        const bool branch_taken_0x7b1fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B1FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B1FDCu;
        // 0x7b1fe0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b1fdc) {
            ctx->pc = 0x7B1FE8u;
            goto label_7b1fe8;
        }
    }
    ctx->pc = 0x7B1FE4u;
label_7b1fe4:
    // 0x7b1fe4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x7b1fe4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7b1fe8:
    // 0x7b1fe8: 0x641fff3  bgez        $s2, . + 4 + (-0xD << 2)
    ctx->pc = 0x7B1FE8u;
    {
        const bool branch_taken_0x7b1fe8 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x7B1FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B1FE8u;
        // 0x7b1fec: 0x26e458d8  addiu       $a0, $s7, 0x58D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 22744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b1fe8) {
            ctx->pc = 0x7B1FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b1fb8;
        }
    }
    ctx->pc = 0x7B1FF0u;
label_7b1ff0:
    // 0x7b1ff0: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x7b1ff0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x7b1ff4: 0x92720003  lbu         $s2, 0x3($s3)
    ctx->pc = 0x7b1ff4u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x7b1ff8: 0x82740005  lb          $s4, 0x5($s3)
    ctx->pc = 0x7b1ff8u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
    // 0x7b1ffc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x7b1ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x7b2000: 0x256102a  slt         $v0, $s2, $s6
    ctx->pc = 0x7b2000u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x7b2004: 0x92630002  lbu         $v1, 0x2($s3)
    ctx->pc = 0x7b2004u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x7b2008: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x7b2008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x7b200c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x7B200Cu;
    {
        const bool branch_taken_0x7b200c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B2010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B200Cu;
        // 0x7b2010: 0x92710004  lbu         $s1, 0x4($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b200c) {
            ctx->pc = 0x7B2054u;
            goto label_7b2054;
        }
    }
    ctx->pc = 0x7B2014u;
    // 0x7b2014: 0x148600  sll         $s0, $s4, 24
    ctx->pc = 0x7b2014u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 24));
    // 0x7b2018: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x7b2018u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7b201c: 0x26e458d8  addiu       $a0, $s7, 0x58D8
    ctx->pc = 0x7b201cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 22744));
label_7b2020:
    // 0x7b2020: 0x102e03  sra         $a1, $s0, 24
    ctx->pc = 0x7b2020u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 16), 24));
    // 0x7b2024: 0x324600ff  andi        $a2, $s2, 0xFF
    ctx->pc = 0x7b2024u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x7b2028: 0xc1ec182  jal         func_7B0608
    ctx->pc = 0x7B2028u;
    SET_GPR_U32(ctx, 31, 0x7B2030u);
    ctx->pc = 0x7B202Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2028u;
    // 0x7b202c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0608u, 0x7B2028u, 0x7B2030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2030u;
label_7b2030:
    // 0x7b2030: 0x5440003c  bnel        $v0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x7B2030u;
    {
        const bool branch_taken_0x7b2030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b2030) {
            ctx->pc = 0x7B2034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B2030u;
            // 0x7b2034: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2124u;
            goto label_7b2124;
        }
    }
    ctx->pc = 0x7B2038u;
    // 0x7b2038: 0x16350003  bne         $s1, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B2038u;
    {
        const bool branch_taken_0x7b2038 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        ctx->pc = 0x7B203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2038u;
        // 0x7b203c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2038) {
            ctx->pc = 0x7B2048u;
            goto label_7b2048;
        }
    }
    ctx->pc = 0x7B2040u;
    // 0x7b2040: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x7b2040u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x7b2044: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x7b2044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7b2048:
    // 0x7b2048: 0x256102a  slt         $v0, $s2, $s6
    ctx->pc = 0x7b2048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x7b204c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x7B204Cu;
    {
        const bool branch_taken_0x7b204c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B2050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B204Cu;
        // 0x7b2050: 0x26e458d8  addiu       $a0, $s7, 0x58D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 22744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b204c) {
            ctx->pc = 0x7B2020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b2020;
        }
    }
    ctx->pc = 0x7B2054u;
label_7b2054:
    // 0x7b2054: 0x92720003  lbu         $s2, 0x3($s3)
    ctx->pc = 0x7b2054u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x7b2058: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x7b2058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x7b205c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x7b205cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x7b2060: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x7b2060u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7b2064: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x7b2064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x7b2068: 0x6400013  bltz        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x7B2068u;
    {
        const bool branch_taken_0x7b2068 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x7B206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2068u;
        // 0x7b206c: 0x92710004  lbu         $s1, 0x4($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2068) {
            ctx->pc = 0x7B20B8u;
            goto label_7b20b8;
        }
    }
    ctx->pc = 0x7B2070u;
    // 0x7b2070: 0x3c1eff00  lui         $fp, 0xFF00
    ctx->pc = 0x7b2070u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65280 << 16));
    // 0x7b2074: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x7b2074u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7b2078: 0x26e458d8  addiu       $a0, $s7, 0x58D8
    ctx->pc = 0x7b2078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 22744));
    // 0x7b207c: 0x0  nop
    ctx->pc = 0x7b207cu;
    // NOP
label_7b2080:
    // 0x7b2080: 0x1e2e03  sra         $a1, $fp, 24
    ctx->pc = 0x7b2080u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 30), 24));
    // 0x7b2084: 0x324600ff  andi        $a2, $s2, 0xFF
    ctx->pc = 0x7b2084u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x7b2088: 0xc1ec182  jal         func_7B0608
    ctx->pc = 0x7B2088u;
    SET_GPR_U32(ctx, 31, 0x7B2090u);
    ctx->pc = 0x7B208Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2088u;
    // 0x7b208c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0608u, 0x7B2088u, 0x7B2090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2090u;
label_7b2090:
    // 0x7b2090: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7b2090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2094: 0x56000023  bnel        $s0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x7B2094u;
    {
        const bool branch_taken_0x7b2094 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b2094) {
            ctx->pc = 0x7B2098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B2094u;
            // 0x7b2098: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2124u;
            goto label_7b2124;
        }
    }
    ctx->pc = 0x7B209Cu;
    // 0x7b209c: 0x56350003  bnel        $s1, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B209Cu;
    {
        const bool branch_taken_0x7b209c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        if (branch_taken_0x7b209c) {
            ctx->pc = 0x7B20A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B209Cu;
            // 0x7b20a0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B20ACu;
            goto label_7b20ac;
        }
    }
    ctx->pc = 0x7B20A4u;
    // 0x7b20a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7B20A4u;
    {
        const bool branch_taken_0x7b20a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B20A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B20A4u;
        // 0x7b20a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b20a4) {
            ctx->pc = 0x7B20B0u;
            goto label_7b20b0;
        }
    }
    ctx->pc = 0x7B20ACu;
label_7b20ac:
    // 0x7b20ac: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x7b20acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7b20b0:
    // 0x7b20b0: 0x641fff3  bgez        $s2, . + 4 + (-0xD << 2)
    ctx->pc = 0x7B20B0u;
    {
        const bool branch_taken_0x7b20b0 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x7B20B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B20B0u;
        // 0x7b20b4: 0x26e458d8  addiu       $a0, $s7, 0x58D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 22744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b20b0) {
            ctx->pc = 0x7B2080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b2080;
        }
    }
    ctx->pc = 0x7B20B8u;
label_7b20b8:
    // 0x7b20b8: 0x92720003  lbu         $s2, 0x3($s3)
    ctx->pc = 0x7b20b8u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x7b20bc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x7b20bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x7b20c0: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x7b20c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x7b20c4: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x7b20c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7b20c8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x7b20c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x7b20cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x7b20ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b20d0: 0x256102a  slt         $v0, $s2, $s6
    ctx->pc = 0x7b20d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x7b20d4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x7B20D4u;
    {
        const bool branch_taken_0x7b20d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B20D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B20D4u;
        // 0x7b20d8: 0x92710004  lbu         $s1, 0x4($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b20d4) {
            ctx->pc = 0x7B2124u;
            goto label_7b2124;
        }
    }
    ctx->pc = 0x7B20DCu;
    // 0x7b20dc: 0x3c1eff00  lui         $fp, 0xFF00
    ctx->pc = 0x7b20dcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65280 << 16));
    // 0x7b20e0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x7b20e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7b20e4: 0x26e458d8  addiu       $a0, $s7, 0x58D8
    ctx->pc = 0x7b20e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 22744));
label_7b20e8:
    // 0x7b20e8: 0x1e2e03  sra         $a1, $fp, 24
    ctx->pc = 0x7b20e8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 30), 24));
    // 0x7b20ec: 0x324600ff  andi        $a2, $s2, 0xFF
    ctx->pc = 0x7b20ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x7b20f0: 0xc1ec182  jal         func_7B0608
    ctx->pc = 0x7B20F0u;
    SET_GPR_U32(ctx, 31, 0x7B20F8u);
    ctx->pc = 0x7B20F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B20F0u;
    // 0x7b20f4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0608u, 0x7B20F0u, 0x7B20F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B20F8u;
label_7b20f8:
    // 0x7b20f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7b20f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b20fc: 0x56000009  bnel        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x7B20FCu;
    {
        const bool branch_taken_0x7b20fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b20fc) {
            ctx->pc = 0x7B2100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B20FCu;
            // 0x7b2100: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2124u;
            goto label_7b2124;
        }
    }
    ctx->pc = 0x7B2104u;
    // 0x7b2104: 0x56350003  bnel        $s1, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B2104u;
    {
        const bool branch_taken_0x7b2104 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        if (branch_taken_0x7b2104) {
            ctx->pc = 0x7B2108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B2104u;
            // 0x7b2108: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2114u;
            goto label_7b2114;
        }
    }
    ctx->pc = 0x7B210Cu;
    // 0x7b210c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7B210Cu;
    {
        const bool branch_taken_0x7b210c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B2110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B210Cu;
        // 0x7b2110: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b210c) {
            ctx->pc = 0x7B2118u;
            goto label_7b2118;
        }
    }
    ctx->pc = 0x7B2114u;
label_7b2114:
    // 0x7b2114: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x7b2114u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7b2118:
    // 0x7b2118: 0x256102a  slt         $v0, $s2, $s6
    ctx->pc = 0x7b2118u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x7b211c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x7B211Cu;
    {
        const bool branch_taken_0x7b211c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B2120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B211Cu;
        // 0x7b2120: 0x26e458d8  addiu       $a0, $s7, 0x58D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 22744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b211c) {
            ctx->pc = 0x7B20E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b20e8;
        }
    }
    ctx->pc = 0x7B2124u;
label_7b2124:
    // 0x7b2124: 0x82620005  lb          $v0, 0x5($s3)
    ctx->pc = 0x7b2124u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
    // 0x7b2128: 0x10540007  beq         $v0, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x7B2128u;
    {
        const bool branch_taken_0x7b2128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x7B212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2128u;
        // 0x7b212c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2128) {
            ctx->pc = 0x7B2148u;
            goto label_7b2148;
        }
    }
    ctx->pc = 0x7B2130u;
    // 0x7b2130: 0x96660000  lhu         $a2, 0x0($s3)
    ctx->pc = 0x7b2130u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x7b2134: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x7b2134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x7b2138: 0xc0b1354  jal         func_2C4D50
    ctx->pc = 0x7B2138u;
    SET_GPR_U32(ctx, 31, 0x7B2140u);
    ctx->pc = 0x7B213Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2138u;
    // 0x7b213c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4D50u, 0x7B2138u, 0x7B2140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2140u;
label_7b2140:
    // 0x7b2140: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x7B2140u;
    {
        const bool branch_taken_0x7b2140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B2144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2140u;
        // 0x7b2144: 0xa6700006  sh          $s0, 0x6($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 6), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2140) {
            ctx->pc = 0x7B2160u;
            goto label_7b2160;
        }
    }
    ctx->pc = 0x7B2148u;
label_7b2148:
    // 0x7b2148: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x7b2148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x7b214c: 0x96660000  lhu         $a2, 0x0($s3)
    ctx->pc = 0x7b214cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x7b2150: 0x8c642f84  lw          $a0, 0x2F84($v1)
    ctx->pc = 0x7b2150u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x7b2154: 0xc0b1354  jal         func_2C4D50
    ctx->pc = 0x7B2154u;
    SET_GPR_U32(ctx, 31, 0x7B215Cu);
    ctx->pc = 0x7B2158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2154u;
    // 0x7b2158: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4D50u, 0x7B2154u, 0x7B215Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B215Cu;
label_7b215c:
    // 0x7b215c: 0xa6700006  sh          $s0, 0x6($s3)
    ctx->pc = 0x7b215cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 6), (uint16_t)GPR_U32(ctx, 16));
label_7b2160:
    // 0x7b2160: 0xa2740005  sb          $s4, 0x5($s3)
    ctx->pc = 0x7b2160u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 5), (uint8_t)GPR_U32(ctx, 20));
    // 0x7b2164: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x7b2164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b2168: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x7b2168u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x7b216c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x7b216cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x7b2170: 0xa2720003  sb          $s2, 0x3($s3)
    ctx->pc = 0x7b2170u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 18));
    // 0x7b2174: 0xa2630002  sb          $v1, 0x2($s3)
    ctx->pc = 0x7b2174u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b2178: 0xa2710004  sb          $s1, 0x4($s3)
    ctx->pc = 0x7b2178u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4), (uint8_t)GPR_U32(ctx, 17));
    // 0x7b217c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x7b217cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_7b2180:
    // 0x7b2180: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x7b2180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x7b2184: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x7b2184u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x7b2188: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x7b2188u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7b218c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x7b218cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7b2190: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x7b2190u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7b2194: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x7b2194u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7b2198: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x7b2198u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7b219c: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x7b219cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7b21a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x7b21a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b21a4: 0x3e00008  jr          $ra
    ctx->pc = 0x7B21A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B21A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B21A4u;
        // 0x7b21a8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B21A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B21ACu;
    // 0x7b21ac: 0x0  nop
    ctx->pc = 0x7b21acu;
    // NOP
    ctx->pc = 0x7b21b0u;
}
} // namespace gh_event
