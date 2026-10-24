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

// Function: func_0012F4C8
// Address: 0x12f4c8 - 0x12f600
void func_0012F4C8_0x12f4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012F4C8_0x12f4c8");
#endif

    switch (ctx->pc) {
        case 0x12f520u: goto label_12f520;
        case 0x12f548u: goto label_12f548;
        case 0x12f578u: goto label_12f578;
        case 0x12f59cu: goto label_12f59c;
        default: break;
    }

    ctx->pc = 0x12f4c8u;

    // 0x12f4c8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x12f4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x12f4cc: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x12f4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x12f4d0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x12f4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x12f4d4: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x12f4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x12f4d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12f4d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f4dc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x12f4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x12f4e0: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x12f4e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f4e4: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x12f4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x12f4e8: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x12f4e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f4ec: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x12f4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x12f4f0: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x12f4f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f4f4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x12f4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x12f4f8: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x12f4f8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f4fc: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x12f4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x12f500: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x12f500u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12f504: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x12f504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x12f508: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x12f508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x12f50c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12f50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12f510: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x12F510u;
    {
        const bool branch_taken_0x12f510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F510u;
        // 0x12f514: 0xafa70014  sw          $a3, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f510) {
            ctx->pc = 0x12F5D0u;
            goto label_12f5d0;
        }
    }
    ctx->pc = 0x12F518u;
    // 0x12f518: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x12f518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x12f51c: 0x0  nop
    ctx->pc = 0x12f51cu;
    // NOP
label_12f520:
    // 0x12f520: 0x24b70001  addiu       $s7, $a1, 0x1
    ctx->pc = 0x12f520u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12f524: 0x8e440068  lw          $a0, 0x68($s2)
    ctx->pc = 0x12f524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x12f528: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x12f528u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x12f52c: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x12f52cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12f530: 0x2a6182b  sltu        $v1, $s5, $a2
    ctx->pc = 0x12f530u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x12f534: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x12f534u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x12f538: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x12F538u;
    {
        const bool branch_taken_0x12f538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F538u;
        // 0x12f53c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f538) {
            ctx->pc = 0x12F5BCu;
            goto label_12f5bc;
        }
    }
    ctx->pc = 0x12F540u;
    // 0x12f540: 0x8e420068  lw          $v0, 0x68($s2)
    ctx->pc = 0x12f540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x12f544: 0x0  nop
    ctx->pc = 0x12f544u;
    // NOP
label_12f548:
    // 0x12f548: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x12f548u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f54c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x12f54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f550: 0x24d40001  addiu       $s4, $a2, 0x1
    ctx->pc = 0x12f550u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x12f554: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x12f554u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x12f558: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x12f558u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x12f55c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x12f55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x12f560: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x12F560u;
    {
        const bool branch_taken_0x12f560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F560u;
        // 0x12f564: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f560) {
            ctx->pc = 0x12F5ACu;
            goto label_12f5ac;
        }
    }
    ctx->pc = 0x12F568u;
    // 0x12f568: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x12f568u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x12f56c: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x12f56cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x12f570: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x12f570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12f574: 0x0  nop
    ctx->pc = 0x12f574u;
    // NOP
label_12f578:
    // 0x12f578: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x12f578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x12f57c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12f57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x12f580: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x12f580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x12f584: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x12f584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x12f588: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x12f588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12f58c: 0x10710003  beq         $v1, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F58Cu;
    {
        const bool branch_taken_0x12f58c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x12F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F58Cu;
        // 0x12f590: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f58c) {
            ctx->pc = 0x12F59Cu;
            goto label_12f59c;
        }
    }
    ctx->pc = 0x12F594u;
    // 0x12f594: 0xc04bd80  jal         func_12F600
    ctx->pc = 0x12F594u;
    SET_GPR_U32(ctx, 31, 0x12F59Cu);
    ctx->pc = 0x12F598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F594u;
    // 0x12f598: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F600u, 0x12F594u, 0x12F59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F59Cu;
label_12f59c:
    // 0x12f59c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x12f59cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x12f5a0: 0x270102b  sltu        $v0, $s3, $s0
    ctx->pc = 0x12f5a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x12f5a4: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x12F5A4u;
    {
        const bool branch_taken_0x12f5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F5A4u;
        // 0x12f5a8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f5a4) {
            ctx->pc = 0x12F578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f578;
        }
    }
    ctx->pc = 0x12F5ACu;
label_12f5ac:
    // 0x12f5ac: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x12f5acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f5b0: 0x2a6102b  sltu        $v0, $s5, $a2
    ctx->pc = 0x12f5b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x12f5b4: 0x5040ffe4  beql        $v0, $zero, . + 4 + (-0x1C << 2)
    ctx->pc = 0x12F5B4u;
    {
        const bool branch_taken_0x12f5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f5b4) {
            ctx->pc = 0x12F5B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F5B4u;
            // 0x12f5b8: 0x8e420068  lw          $v0, 0x68($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f548;
        }
    }
    ctx->pc = 0x12F5BCu;
label_12f5bc:
    // 0x12f5bc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x12f5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f5c0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x12f5c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f5c4: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x12f5c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12f5c8: 0x5040ffd5  beql        $v0, $zero, . + 4 + (-0x2B << 2)
    ctx->pc = 0x12F5C8u;
    {
        const bool branch_taken_0x12f5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f5c8) {
            ctx->pc = 0x12F5CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F5C8u;
            // 0x12f5cc: 0x8e420064  lw          $v0, 0x64($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f520;
        }
    }
    ctx->pc = 0x12F5D0u;
label_12f5d0:
    // 0x12f5d0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x12f5d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12f5d4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x12f5d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12f5d8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x12f5d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12f5dc: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x12f5dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12f5e0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x12f5e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12f5e4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x12f5e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f5e8: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x12f5e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12f5ec: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x12f5ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12f5f0: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x12f5f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12f5f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12f5f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12f5f8: 0x3e00008  jr          $ra
    ctx->pc = 0x12F5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F5F8u;
        // 0x12f5fc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F600u;
}
