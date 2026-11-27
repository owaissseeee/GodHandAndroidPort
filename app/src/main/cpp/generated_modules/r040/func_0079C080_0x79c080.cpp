#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "r040_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r040
{
// Function: func_0079C080
// Address: 0x79c080 - 0x79c200
void func_0079C080_0x79c080(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079C080_0x79c080");
#endif

    if (__builtin_expect(ctx->pc != 0x79c080u, 0)) {
        switch (ctx->pc) {
            case 0x79c0c4u: goto label_79c0c4;
            case 0x79c0dcu: goto label_79c0dc;
            case 0x79c124u: goto label_79c124;
            case 0x79c134u: goto label_79c134;
            case 0x79c158u: goto label_79c158;
            case 0x79c164u: goto label_79c164;
            case 0x79c180u: goto label_79c180;
            case 0x79c194u: goto label_79c194;
            case 0x79c1b8u: goto label_79c1b8;
            case 0x79c1c8u: goto label_79c1c8;
            case 0x79c1e4u: goto label_79c1e4;
            default: break;
        }
    }



    // 0x79c080: 0x3c02007a  lui         $v0, 0x7A
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79c084: 0x27bdffb0  addiu       $sp, $sp, -0x50
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79c088: 0x8c44c800  lw          $a0, -0x3800($v0)
    ctx->pc = 0x79c088u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x79C800u));
    // 0x79c08c: 0x3c060080  lui         $a2, 0x80
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)128 << 16));
    // 0x79c090: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x79c090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x79c094: 0x3c076080  lui         $a3, 0x6080
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)24704 << 16));
    // 0x79c098: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x79c098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x79c09c: 0x40982d  daddu       $s3, $v0, $zero
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c0a0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79c0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79c0a4: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79c0a8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79c0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79c0ac: 0x24840020  addiu       $a0, $a0, 0x20
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x79c0b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79c0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79c0b4: 0x34c68080  ori         $a2, $a2, 0x8080
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x79c0b8: 0x34e78080  ori         $a3, $a3, 0x8080
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x79c0bc: 0xc1e6622  jal         func_799888
    SET_GPR_U32(ctx, 31, 0x79C0C4u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C0BCu;
    // 0x79c0c0: 0x2408000f  addiu       $t0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799888u, 0x79C0BCu, 0x79C0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_79c0c4:
    // 0x79c0c4: 0x3c02003c  lui         $v0, 0x3C
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79c0c8: 0x2405000f  addiu       $a1, $zero, 0xF
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x79c0cc: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x79c0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79c0d0: 0x40902d  daddu       $s2, $v0, $zero
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c0d4: 0xc0b56a8  jal         func_2D5AA0
    SET_GPR_U32(ctx, 31, 0x79C0DCu);
    ctx->pc = 0x79C0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C0D4u;
    // 0x79c0d8: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79C0D4u, 0x79C0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_79c0dc:
    // 0x79c0dc: 0x3c02007a  lui         $v0, 0x7A
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79c0e0: 0x8c44c804  lw          $a0, -0x37FC($v0)
    ctx->pc = 0x79c0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x79C804u));
    // 0x79c0e4: 0x2c830009  sltiu       $v1, $a0, 0x9
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x79c0e8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x79C0E8u;
    {
        const bool branch_taken_0x79c0e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C0E8u;
        // 0x79c0ec: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c0e8) {
            ctx->pc = 0x79C110u;
            goto label_79c110;
        }
    }
    // 0x79c0f0: 0x41880  sll         $v1, $a0, 2
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x79c0f4: 0x2442c720  addiu       $v0, $v0, -0x38E0
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952736));
    // 0x79c0f8: 0x621821  addu        $v1, $v1, $v0
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79c0fc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79c0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79c100: 0x800008  jr          $a0
    ctx->pc = 0x79C100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79C108u: goto label_79c108;
            case 0x79C110u: goto label_79c110;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C100u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_79c108:
    // 0x79c108: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79C108u;
    {
        const bool branch_taken_0x79c108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C108u;
        // 0x79c10c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c108) {
            ctx->pc = 0x79C114u;
            goto label_79c114;
        }
    }
label_79c110:
    // 0x79c110: 0x302d  daddu       $a2, $zero, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79c114:
    // 0x79c114: 0x8e64c800  lw          $a0, -0x3800($s3)
    ctx->pc = 0x79c114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952960)));
    // 0x79c118: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79c11c: 0xc1e65de  jal         func_799778
    SET_GPR_U32(ctx, 31, 0x79C124u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C11Cu;
    // 0x79c120: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799778u, 0x79C11Cu, 0x79C124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_79c124:
    // 0x79c124: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79c124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79c128: 0x2405000a  addiu       $a1, $zero, 0xA
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x79c12c: 0xc0b56a8  jal         func_2D5AA0
    SET_GPR_U32(ctx, 31, 0x79C134u);
    ctx->pc = 0x79C130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C12Cu;
    // 0x79c130: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79C12Cu, 0x79C134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_79c134:
    // 0x79c134: 0x3c030074  lui         $v1, 0x74
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x79c138: 0x3c043000  lui         $a0, 0x3000
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x79c13c: 0x246374a0  addiu       $v1, $v1, 0x74A0
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x79c140: 0xdc6201a0  ld          $v0, 0x1A0($v1)
    ctx->pc = 0x79c140u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x747640u));
    // 0x79c144: 0x441024  and         $v0, $v0, $a0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x79c148: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x79C148u;
    {
        const bool branch_taken_0x79c148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C148u;
        // 0x79c14c: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c148) {
            ctx->pc = 0x79C174u;
            goto label_79c174;
        }
    }
    // 0x79c150: 0x60882d  daddu       $s1, $v1, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c154: 0x3c103000  lui         $s0, 0x3000
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)12288 << 16));
label_79c158:
    // 0x79c158: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79c15c: 0xc0b56a8  jal         func_2D5AA0
    SET_GPR_U32(ctx, 31, 0x79C164u);
    ctx->pc = 0x79C160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C15Cu;
    // 0x79c160: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79C15Cu, 0x79C164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_79c164:
    // 0x79c164: 0xde2201a0  ld          $v0, 0x1A0($s1)
    ctx->pc = 0x79c164u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x79c168: 0x501024  and         $v0, $v0, $s0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x79c16c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79C16Cu;
    {
        const bool branch_taken_0x79c16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C16Cu;
        // 0x79c170: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c16c) {
            ctx->pc = 0x79C158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c158;
        }
    }
label_79c174:
    // 0x79c174: 0x24050005  addiu       $a1, $zero, 0x5
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79c178: 0xc0b56a8  jal         func_2D5AA0
    SET_GPR_U32(ctx, 31, 0x79C180u);
    ctx->pc = 0x79C17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C178u;
    // 0x79c17c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79C178u, 0x79C180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_79c180:
    // 0x79c180: 0x8e64c800  lw          $a0, -0x3800($s3)
    ctx->pc = 0x79c180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952960)));
    // 0x79c184: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c188: 0x302d  daddu       $a2, $zero, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c18c: 0xc1e65de  jal         func_799778
    SET_GPR_U32(ctx, 31, 0x79C194u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C18Cu;
    // 0x79c190: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799778u, 0x79C18Cu, 0x79C194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_79c194:
    // 0x79c194: 0x8e64c800  lw          $a0, -0x3800($s3)
    ctx->pc = 0x79c194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952960)));
    // 0x79c198: 0x3c066080  lui         $a2, 0x6080
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24704 << 16));
    // 0x79c19c: 0x3c070080  lui         $a3, 0x80
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
    // 0x79c1a0: 0x34c68080  ori         $a2, $a2, 0x8080
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x79c1a4: 0x34e78080  ori         $a3, $a3, 0x8080
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x79c1a8: 0x2408000f  addiu       $t0, $zero, 0xF
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x79c1ac: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79c1b0: 0xc1e6622  jal         func_799888
    SET_GPR_U32(ctx, 31, 0x79C1B8u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C1B0u;
    // 0x79c1b4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799888u, 0x79C1B0u, 0x79C1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_79c1b8:
    // 0x79c1b8: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79c1bc: 0x2405000f  addiu       $a1, $zero, 0xF
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x79c1c0: 0xc0b56a8  jal         func_2D5AA0
    SET_GPR_U32(ctx, 31, 0x79C1C8u);
    ctx->pc = 0x79C1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C1C0u;
    // 0x79c1c4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79C1C0u, 0x79C1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_79c1c8:
    // 0x79c1c8: 0x8e64c800  lw          $a0, -0x3800($s3)
    ctx->pc = 0x79c1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952960)));
    // 0x79c1cc: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x79c1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x79c1d0: 0x34420001  ori         $v0, $v0, 0x1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x79c1d4: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x79c1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x79c1d8: 0x8e432f84  lw          $v1, 0x2F84($s2)
    ctx->pc = 0x79c1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79c1dc: 0xc0b5692  jal         func_2D5A48
    SET_GPR_U32(ctx, 31, 0x79C1E4u);
    ctx->pc = 0x79C1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C1DCu;
    // 0x79c1e0: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->callDirectStatic(rdram, ctx, &cTaskWork_exit_0x2d5a48, 0x2D5A48u, 0x79C1E4u)) {
        return;
    }
label_79c1e4:
    // 0x79c1e4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79c1e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79c1e8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79c1e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79c1ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x79c1ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79c1f0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x79c1f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79c1f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79c1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79c1f8: 0x3e00008  jr          $ra
    ctx->pc = 0x79C1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C1F8u;
        // 0x79c1fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C1F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C200u;
}
} // namespace gh_r040
