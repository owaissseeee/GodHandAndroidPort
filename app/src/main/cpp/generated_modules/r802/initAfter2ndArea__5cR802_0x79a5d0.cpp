#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r802_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r802
{
// Function: initAfter2ndArea__5cR802
// Address: 0x79a5d0 - 0x79ab40
void initAfter2ndArea__5cR802_0x79a5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("initAfter2ndArea__5cR802_0x79a5d0");
#endif

    switch (ctx->pc) {
        case 0x79a638u: goto label_79a638;
        case 0x79a668u: goto label_79a668;
        case 0x79a690u: goto label_79a690;
        case 0x79a6c0u: goto label_79a6c0;
        case 0x79a6e8u: goto label_79a6e8;
        case 0x79a718u: goto label_79a718;
        case 0x79a740u: goto label_79a740;
        case 0x79a770u: goto label_79a770;
        case 0x79a858u: goto label_79a858;
        case 0x79a8e8u: goto label_79a8e8;
        case 0x79a978u: goto label_79a978;
        case 0x79aa08u: goto label_79aa08;
        case 0x79aa54u: goto label_79aa54;
        case 0x79aa78u: goto label_79aa78;
        case 0x79aa9cu: goto label_79aa9c;
        case 0x79aac0u: goto label_79aac0;
        case 0x79aaccu: goto label_79aacc;
        case 0x79aad8u: goto label_79aad8;
        case 0x79aae4u: goto label_79aae4;
        case 0x79aaf0u: goto label_79aaf0;
        case 0x79ab04u: goto label_79ab04;
        default: break;
    }

    ctx->pc = 0x79a5d0u;

    // 0x79a5d0: 0x27bdf9b0  addiu       $sp, $sp, -0x650
    ctx->pc = 0x79a5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965680));
    // 0x79a5d4: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79a5d8: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79a5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x79a5dc: 0x7fb00630  sq          $s0, 0x630($sp)
    ctx->pc = 0x79a5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1584), GPR_VEC(ctx, 16));
    // 0x79a5e0: 0x7fb10620  sq          $s1, 0x620($sp)
    ctx->pc = 0x79a5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1568), GPR_VEC(ctx, 17));
    // 0x79a5e4: 0x2446aeb0  addiu       $a2, $v0, -0x5150
    ctx->pc = 0x79a5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946480));
    // 0x79a5e8: 0x7fb20610  sq          $s2, 0x610($sp)
    ctx->pc = 0x79a5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1552), GPR_VEC(ctx, 18));
    // 0x79a5ec: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x79a5ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a5f0: 0x7fb30600  sq          $s3, 0x600($sp)
    ctx->pc = 0x79a5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1536), GPR_VEC(ctx, 19));
    // 0x79a5f4: 0x24684c38  addiu       $t0, $v1, 0x4C38
    ctx->pc = 0x79a5f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19512));
    // 0x79a5f8: 0x8044aeb0  lb          $a0, -0x5150($v0)
    ctx->pc = 0x79a5f8u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x79AEB0u));
    // 0x79a5fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a5fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a600: 0x7fb405f0  sq          $s4, 0x5F0($sp)
    ctx->pc = 0x79a600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1520), GPR_VEC(ctx, 20));
    // 0x79a604: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a604u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a608: 0x7fb505e0  sq          $s5, 0x5E0($sp)
    ctx->pc = 0x79a608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1504), GPR_VEC(ctx, 21));
    // 0x79a60c: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79a60cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x79a610: 0x7fb605d0  sq          $s6, 0x5D0($sp)
    ctx->pc = 0x79a610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1488), GPR_VEC(ctx, 22));
    // 0x79a614: 0x3c12007a  lui         $s2, 0x7A
    ctx->pc = 0x79a614u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
    // 0x79a618: 0x7fb705c0  sq          $s7, 0x5C0($sp)
    ctx->pc = 0x79a618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1472), GPR_VEC(ctx, 23));
    // 0x79a61c: 0x3c13007a  lui         $s3, 0x7A
    ctx->pc = 0x79a61cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
    // 0x79a620: 0x7fbe05b0  sq          $fp, 0x5B0($sp)
    ctx->pc = 0x79a620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1456), GPR_VEC(ctx, 30));
    // 0x79a624: 0xffbf05a0  sd          $ra, 0x5A0($sp)
    ctx->pc = 0x79a624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1440), GPR_U64(ctx, 31));
    // 0x79a628: 0xe7b50648  swc1        $f21, 0x648($sp)
    ctx->pc = 0x79a628u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1608), bits); }
    // 0x79a62c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x79A62Cu;
    {
        const bool branch_taken_0x79a62c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A62Cu;
        // 0x79a630: 0xe7b40640  swc1        $f20, 0x640($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1600), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a62c) {
            ctx->pc = 0x79A660u;
            goto label_79a660;
        }
    }
    ctx->pc = 0x79A634u;
    // 0x79a634: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a634u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a638:
    // 0x79a638: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a638u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a63c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a63cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a640: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a644: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a648: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a648u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a64c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A64Cu;
    {
        const bool branch_taken_0x79a64c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A64Cu;
        // 0x79a650: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a64c) {
            ctx->pc = 0x79A660u;
            goto label_79a660;
        }
    }
    ctx->pc = 0x79A654u;
    // 0x79a654: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a654u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a658: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A658u;
    {
        const bool branch_taken_0x79a658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a658) {
            ctx->pc = 0x79A65Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A658u;
            // 0x79a65c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a638;
        }
    }
    ctx->pc = 0x79A660u;
label_79a660:
    // 0x79a660: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x79A660u;
    SET_GPR_U32(ctx, 31, 0x79A668u);
    ctx->pc = 0x79A664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A660u;
    // 0x79a664: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x79A660u, 0x79A668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A668u;
label_79a668:
    // 0x79a668: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x79a668u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a66c: 0x26284c38  addiu       $t0, $s1, 0x4C38
    ctx->pc = 0x79a66cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19512));
    // 0x79a670: 0x8202aec0  lb          $v0, -0x5140($s0)
    ctx->pc = 0x79a670u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294946496)));
    // 0x79a674: 0x2603aec0  addiu       $v1, $s0, -0x5140
    ctx->pc = 0x79a674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946496));
    // 0x79a678: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a67c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79A67Cu;
    {
        const bool branch_taken_0x79a67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A67Cu;
        // 0x79a680: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a67c) {
            ctx->pc = 0x79A6B8u;
            goto label_79a6b8;
        }
    }
    ctx->pc = 0x79A684u;
    // 0x79a684: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a688: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a688u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a68c: 0x0  nop
    ctx->pc = 0x79a68cu;
    // NOP
label_79a690:
    // 0x79a690: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a690u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a694: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a698: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a69c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a6a0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a6a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a6a4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A6A4u;
    {
        const bool branch_taken_0x79a6a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6A4u;
        // 0x79a6a8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6a4) {
            ctx->pc = 0x79A6B8u;
            goto label_79a6b8;
        }
    }
    ctx->pc = 0x79A6ACu;
    // 0x79a6ac: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a6acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a6b0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A6B0u;
    {
        const bool branch_taken_0x79a6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a6b0) {
            ctx->pc = 0x79A6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A6B0u;
            // 0x79a6b4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a690;
        }
    }
    ctx->pc = 0x79A6B8u;
label_79a6b8:
    // 0x79a6b8: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x79A6B8u;
    SET_GPR_U32(ctx, 31, 0x79A6C0u);
    ctx->pc = 0x79A6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6B8u;
    // 0x79a6bc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x79A6B8u, 0x79A6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6C0u;
label_79a6c0:
    // 0x79a6c0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x79a6c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a6c4: 0x26284c38  addiu       $t0, $s1, 0x4C38
    ctx->pc = 0x79a6c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19512));
    // 0x79a6c8: 0x8242aeb8  lb          $v0, -0x5148($s2)
    ctx->pc = 0x79a6c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294946488)));
    // 0x79a6cc: 0x2643aeb8  addiu       $v1, $s2, -0x5148
    ctx->pc = 0x79a6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294946488));
    // 0x79a6d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a6d4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79A6D4u;
    {
        const bool branch_taken_0x79a6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6D4u;
        // 0x79a6d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6d4) {
            ctx->pc = 0x79A710u;
            goto label_79a710;
        }
    }
    ctx->pc = 0x79A6DCu;
    // 0x79a6dc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a6dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a6e0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a6e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a6e4: 0x0  nop
    ctx->pc = 0x79a6e4u;
    // NOP
label_79a6e8:
    // 0x79a6e8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a6ec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a6ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a6f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a6f4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a6f8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a6f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a6fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A6FCu;
    {
        const bool branch_taken_0x79a6fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6FCu;
        // 0x79a700: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6fc) {
            ctx->pc = 0x79A710u;
            goto label_79a710;
        }
    }
    ctx->pc = 0x79A704u;
    // 0x79a704: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a704u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a708: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A708u;
    {
        const bool branch_taken_0x79a708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a708) {
            ctx->pc = 0x79A70Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A708u;
            // 0x79a70c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A6E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a6e8;
        }
    }
    ctx->pc = 0x79A710u;
label_79a710:
    // 0x79a710: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x79A710u;
    SET_GPR_U32(ctx, 31, 0x79A718u);
    ctx->pc = 0x79A714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A710u;
    // 0x79a714: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x79A710u, 0x79A718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A718u;
label_79a718:
    // 0x79a718: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x79a718u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a71c: 0x26284c38  addiu       $t0, $s1, 0x4C38
    ctx->pc = 0x79a71cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19512));
    // 0x79a720: 0x8262aec8  lb          $v0, -0x5138($s3)
    ctx->pc = 0x79a720u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294946504)));
    // 0x79a724: 0x2663aec8  addiu       $v1, $s3, -0x5138
    ctx->pc = 0x79a724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946504));
    // 0x79a728: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a72c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79A72Cu;
    {
        const bool branch_taken_0x79a72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A72Cu;
        // 0x79a730: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a72c) {
            ctx->pc = 0x79A768u;
            goto label_79a768;
        }
    }
    ctx->pc = 0x79A734u;
    // 0x79a734: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a738: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a738u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a73c: 0x0  nop
    ctx->pc = 0x79a73cu;
    // NOP
label_79a740:
    // 0x79a740: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a740u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a744: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a748: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a74c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a750: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a750u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a754: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A754u;
    {
        const bool branch_taken_0x79a754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A754u;
        // 0x79a758: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a754) {
            ctx->pc = 0x79A768u;
            goto label_79a768;
        }
    }
    ctx->pc = 0x79A75Cu;
    // 0x79a75c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a75cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a760: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A760u;
    {
        const bool branch_taken_0x79a760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a760) {
            ctx->pc = 0x79A764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A760u;
            // 0x79a764: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a740;
        }
    }
    ctx->pc = 0x79A768u;
label_79a768:
    // 0x79a768: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x79A768u;
    SET_GPR_U32(ctx, 31, 0x79A770u);
    ctx->pc = 0x79A76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A768u;
    // 0x79a76c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x79A768u, 0x79A770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A770u;
label_79a770:
    // 0x79a770: 0x12a000df  beqz        $s5, . + 4 + (0xDF << 2)
    ctx->pc = 0x79A770u;
    {
        const bool branch_taken_0x79a770 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A770u;
        // 0x79a774: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a770) {
            ctx->pc = 0x79AAF0u;
            goto label_79aaf0;
        }
    }
    ctx->pc = 0x79A778u;
    // 0x79a778: 0x128000dd  beqz        $s4, . + 4 + (0xDD << 2)
    ctx->pc = 0x79A778u;
    {
        const bool branch_taken_0x79a778 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A778u;
        // 0x79a77c: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a778) {
            ctx->pc = 0x79AAF0u;
            goto label_79aaf0;
        }
    }
    ctx->pc = 0x79A780u;
    // 0x79a780: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79a784: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79a784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79a788: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x79a788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x79a78c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x79a78cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x79a790: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a790u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a794: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x79a794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x79a798: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x79a798u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x79a79c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a79cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79a7a0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x79a7a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x79a7a4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x79a7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x79a7a8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x79a7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x79a7ac: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x79a7acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x79a7b0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x79a7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x79a7b4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79a7b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79a7b8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x79a7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x79a7bc: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x79a7bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79a7c0: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x79a7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a7c4: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x79a7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a7c8: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x79a7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a7cc: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x79a7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a7d0: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x79a7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a7d4: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x79a7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a7d8: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x79a7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a7dc: 0xfba000e0  sqc2        $vf0, 0xE0($sp)
    ctx->pc = 0x79a7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a7e0: 0xfba000f0  sqc2        $vf0, 0xF0($sp)
    ctx->pc = 0x79a7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a7e4: 0xfba00100  sqc2        $vf0, 0x100($sp)
    ctx->pc = 0x79a7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a7e8: 0xfba00110  sqc2        $vf0, 0x110($sp)
    ctx->pc = 0x79a7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a7ec: 0xfba00120  sqc2        $vf0, 0x120($sp)
    ctx->pc = 0x79a7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a7f0: 0xfba00130  sqc2        $vf0, 0x130($sp)
    ctx->pc = 0x79a7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a7f4: 0xfba00140  sqc2        $vf0, 0x140($sp)
    ctx->pc = 0x79a7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a7f8: 0xa3a00020  sb          $zero, 0x20($sp)
    ctx->pc = 0x79a7f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a7fc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x79a7fcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a800: 0xa3a00021  sb          $zero, 0x21($sp)
    ctx->pc = 0x79a800u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a804: 0x27a5018c  addiu       $a1, $sp, 0x18C
    ctx->pc = 0x79a804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
    // 0x79a808: 0xa3a00022  sb          $zero, 0x22($sp)
    ctx->pc = 0x79a808u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a80c: 0x27a602ec  addiu       $a2, $sp, 0x2EC
    ctx->pc = 0x79a80cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 748));
    // 0x79a810: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x79a810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x79a814: 0x27a7044c  addiu       $a3, $sp, 0x44C
    ctx->pc = 0x79a814u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1100));
    // 0x79a818: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x79a818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x79a81c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x79a81cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79a820: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x79a820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x79a824: 0x27b10180  addiu       $s1, $sp, 0x180
    ctx->pc = 0x79a824u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x79a828: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x79a828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x79a82c: 0x27b202e0  addiu       $s2, $sp, 0x2E0
    ctx->pc = 0x79a82cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x79a830: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x79a830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x79a834: 0x27b30440  addiu       $s3, $sp, 0x440
    ctx->pc = 0x79a834u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
    // 0x79a838: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x79a838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x79a83c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x79a83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a840: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x79a840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x79a844: 0x27a3002c  addiu       $v1, $sp, 0x2C
    ctx->pc = 0x79a844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x79a848: 0xafa00154  sw          $zero, 0x154($sp)
    ctx->pc = 0x79a848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
    // 0x79a84c: 0xafa00158  sw          $zero, 0x158($sp)
    ctx->pc = 0x79a84cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
    // 0x79a850: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x79a850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
    // 0x79a854: 0x0  nop
    ctx->pc = 0x79a854u;
    // NOP
label_79a858:
    // 0x79a858: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x79a858u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x79a85c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x79a85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x79a860: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x79a860u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a864: 0x0  nop
    ctx->pc = 0x79a864u;
    // NOP
    // 0x79a868: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x79A868u;
    {
        const bool branch_taken_0x79a868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A868u;
        // 0x79a86c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a868) {
            ctx->pc = 0x79A858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a858;
        }
    }
    ctx->pc = 0x79A870u;
    // 0x79a870: 0xfba001d0  sqc2        $vf0, 0x1D0($sp)
    ctx->pc = 0x79a870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a874: 0xfba001e0  sqc2        $vf0, 0x1E0($sp)
    ctx->pc = 0x79a874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a878: 0xfba001f0  sqc2        $vf0, 0x1F0($sp)
    ctx->pc = 0x79a878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a87c: 0xfba00200  sqc2        $vf0, 0x200($sp)
    ctx->pc = 0x79a87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a880: 0xfba00210  sqc2        $vf0, 0x210($sp)
    ctx->pc = 0x79a880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a884: 0xfba00220  sqc2        $vf0, 0x220($sp)
    ctx->pc = 0x79a884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a888: 0xfba00230  sqc2        $vf0, 0x230($sp)
    ctx->pc = 0x79a888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a88c: 0xfba00240  sqc2        $vf0, 0x240($sp)
    ctx->pc = 0x79a88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a890: 0xfba00250  sqc2        $vf0, 0x250($sp)
    ctx->pc = 0x79a890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a894: 0xfba00260  sqc2        $vf0, 0x260($sp)
    ctx->pc = 0x79a894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a898: 0xfba00270  sqc2        $vf0, 0x270($sp)
    ctx->pc = 0x79a898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a89c: 0xfba00280  sqc2        $vf0, 0x280($sp)
    ctx->pc = 0x79a89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a8a0: 0xfba00290  sqc2        $vf0, 0x290($sp)
    ctx->pc = 0x79a8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a8a4: 0xfba002a0  sqc2        $vf0, 0x2A0($sp)
    ctx->pc = 0x79a8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a8a8: 0xa3a00180  sb          $zero, 0x180($sp)
    ctx->pc = 0x79a8a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a8ac: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x79a8acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8b0: 0xa3a00181  sb          $zero, 0x181($sp)
    ctx->pc = 0x79a8b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 385), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a8b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x79a8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8b8: 0xa3a00182  sb          $zero, 0x182($sp)
    ctx->pc = 0x79a8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 386), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a8bc: 0xafa00184  sw          $zero, 0x184($sp)
    ctx->pc = 0x79a8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 0));
    // 0x79a8c0: 0xafa00188  sw          $zero, 0x188($sp)
    ctx->pc = 0x79a8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 0));
    // 0x79a8c4: 0xafa001b0  sw          $zero, 0x1B0($sp)
    ctx->pc = 0x79a8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 0));
    // 0x79a8c8: 0xafa001b4  sw          $zero, 0x1B4($sp)
    ctx->pc = 0x79a8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 0));
    // 0x79a8cc: 0xafa001b8  sw          $zero, 0x1B8($sp)
    ctx->pc = 0x79a8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 0));
    // 0x79a8d0: 0xafa001bc  sw          $zero, 0x1BC($sp)
    ctx->pc = 0x79a8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 0));
    // 0x79a8d4: 0xafa002b0  sw          $zero, 0x2B0($sp)
    ctx->pc = 0x79a8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 0));
    // 0x79a8d8: 0xafa002b4  sw          $zero, 0x2B4($sp)
    ctx->pc = 0x79a8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 692), GPR_U32(ctx, 0));
    // 0x79a8dc: 0xafa002b8  sw          $zero, 0x2B8($sp)
    ctx->pc = 0x79a8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 696), GPR_U32(ctx, 0));
    // 0x79a8e0: 0xafa002bc  sw          $zero, 0x2BC($sp)
    ctx->pc = 0x79a8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 700), GPR_U32(ctx, 0));
    // 0x79a8e4: 0x0  nop
    ctx->pc = 0x79a8e4u;
    // NOP
label_79a8e8:
    // 0x79a8e8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x79a8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x79a8ec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x79a8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x79a8f0: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x79a8f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a8f4: 0x0  nop
    ctx->pc = 0x79a8f4u;
    // NOP
    // 0x79a8f8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x79A8F8u;
    {
        const bool branch_taken_0x79a8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8F8u;
        // 0x79a8fc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8f8) {
            ctx->pc = 0x79A8E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a8e8;
        }
    }
    ctx->pc = 0x79A900u;
    // 0x79a900: 0xfba00330  sqc2        $vf0, 0x330($sp)
    ctx->pc = 0x79a900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a904: 0xfba00340  sqc2        $vf0, 0x340($sp)
    ctx->pc = 0x79a904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a908: 0xfba00350  sqc2        $vf0, 0x350($sp)
    ctx->pc = 0x79a908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a90c: 0xfba00360  sqc2        $vf0, 0x360($sp)
    ctx->pc = 0x79a90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a910: 0xfba00370  sqc2        $vf0, 0x370($sp)
    ctx->pc = 0x79a910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a914: 0xfba00380  sqc2        $vf0, 0x380($sp)
    ctx->pc = 0x79a914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a918: 0xfba00390  sqc2        $vf0, 0x390($sp)
    ctx->pc = 0x79a918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 912), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a91c: 0xfba003a0  sqc2        $vf0, 0x3A0($sp)
    ctx->pc = 0x79a91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 928), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a920: 0xfba003b0  sqc2        $vf0, 0x3B0($sp)
    ctx->pc = 0x79a920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 944), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a924: 0xfba003c0  sqc2        $vf0, 0x3C0($sp)
    ctx->pc = 0x79a924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 960), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a928: 0xfba003d0  sqc2        $vf0, 0x3D0($sp)
    ctx->pc = 0x79a928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 976), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a92c: 0xfba003e0  sqc2        $vf0, 0x3E0($sp)
    ctx->pc = 0x79a92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 992), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a930: 0xfba003f0  sqc2        $vf0, 0x3F0($sp)
    ctx->pc = 0x79a930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1008), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a934: 0xfba00400  sqc2        $vf0, 0x400($sp)
    ctx->pc = 0x79a934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1024), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a938: 0xa3a002e0  sb          $zero, 0x2E0($sp)
    ctx->pc = 0x79a938u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 736), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a93c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x79a93cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a940: 0xa3a002e1  sb          $zero, 0x2E1($sp)
    ctx->pc = 0x79a940u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 737), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a944: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x79a944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a948: 0xa3a002e2  sb          $zero, 0x2E2($sp)
    ctx->pc = 0x79a948u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 738), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a94c: 0xafa002e4  sw          $zero, 0x2E4($sp)
    ctx->pc = 0x79a94cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 0));
    // 0x79a950: 0xafa002e8  sw          $zero, 0x2E8($sp)
    ctx->pc = 0x79a950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 0));
    // 0x79a954: 0xafa00310  sw          $zero, 0x310($sp)
    ctx->pc = 0x79a954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 784), GPR_U32(ctx, 0));
    // 0x79a958: 0xafa00314  sw          $zero, 0x314($sp)
    ctx->pc = 0x79a958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 788), GPR_U32(ctx, 0));
    // 0x79a95c: 0xafa00318  sw          $zero, 0x318($sp)
    ctx->pc = 0x79a95cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 792), GPR_U32(ctx, 0));
    // 0x79a960: 0xafa0031c  sw          $zero, 0x31C($sp)
    ctx->pc = 0x79a960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 796), GPR_U32(ctx, 0));
    // 0x79a964: 0xafa00410  sw          $zero, 0x410($sp)
    ctx->pc = 0x79a964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1040), GPR_U32(ctx, 0));
    // 0x79a968: 0xafa00414  sw          $zero, 0x414($sp)
    ctx->pc = 0x79a968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1044), GPR_U32(ctx, 0));
    // 0x79a96c: 0xafa00418  sw          $zero, 0x418($sp)
    ctx->pc = 0x79a96cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1048), GPR_U32(ctx, 0));
    // 0x79a970: 0xafa0041c  sw          $zero, 0x41C($sp)
    ctx->pc = 0x79a970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1052), GPR_U32(ctx, 0));
    // 0x79a974: 0x0  nop
    ctx->pc = 0x79a974u;
    // NOP
label_79a978:
    // 0x79a978: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x79a978u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x79a97c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x79a97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x79a980: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x79a980u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a984: 0x0  nop
    ctx->pc = 0x79a984u;
    // NOP
    // 0x79a988: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x79A988u;
    {
        const bool branch_taken_0x79a988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A988u;
        // 0x79a98c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a988) {
            ctx->pc = 0x79A978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a978;
        }
    }
    ctx->pc = 0x79A990u;
    // 0x79a990: 0xfba00490  sqc2        $vf0, 0x490($sp)
    ctx->pc = 0x79a990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a994: 0xfba004a0  sqc2        $vf0, 0x4A0($sp)
    ctx->pc = 0x79a994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a998: 0xfba004b0  sqc2        $vf0, 0x4B0($sp)
    ctx->pc = 0x79a998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a99c: 0xfba004c0  sqc2        $vf0, 0x4C0($sp)
    ctx->pc = 0x79a99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a9a0: 0xfba004d0  sqc2        $vf0, 0x4D0($sp)
    ctx->pc = 0x79a9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a9a4: 0xfba004e0  sqc2        $vf0, 0x4E0($sp)
    ctx->pc = 0x79a9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a9a8: 0xfba004f0  sqc2        $vf0, 0x4F0($sp)
    ctx->pc = 0x79a9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a9ac: 0xfba00500  sqc2        $vf0, 0x500($sp)
    ctx->pc = 0x79a9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a9b0: 0xfba00510  sqc2        $vf0, 0x510($sp)
    ctx->pc = 0x79a9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a9b4: 0xfba00520  sqc2        $vf0, 0x520($sp)
    ctx->pc = 0x79a9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a9b8: 0xfba00530  sqc2        $vf0, 0x530($sp)
    ctx->pc = 0x79a9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1328), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a9bc: 0xfba00540  sqc2        $vf0, 0x540($sp)
    ctx->pc = 0x79a9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1344), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a9c0: 0xfba00550  sqc2        $vf0, 0x550($sp)
    ctx->pc = 0x79a9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1360), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a9c4: 0xfba00560  sqc2        $vf0, 0x560($sp)
    ctx->pc = 0x79a9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1376), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a9c8: 0xa3a00440  sb          $zero, 0x440($sp)
    ctx->pc = 0x79a9c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1088), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a9cc: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x79a9ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a9d0: 0xa3a00441  sb          $zero, 0x441($sp)
    ctx->pc = 0x79a9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1089), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a9d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x79a9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a9d8: 0xa3a00442  sb          $zero, 0x442($sp)
    ctx->pc = 0x79a9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1090), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a9dc: 0xafa00444  sw          $zero, 0x444($sp)
    ctx->pc = 0x79a9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1092), GPR_U32(ctx, 0));
    // 0x79a9e0: 0xafa00448  sw          $zero, 0x448($sp)
    ctx->pc = 0x79a9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1096), GPR_U32(ctx, 0));
    // 0x79a9e4: 0xafa00470  sw          $zero, 0x470($sp)
    ctx->pc = 0x79a9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 0));
    // 0x79a9e8: 0xafa00474  sw          $zero, 0x474($sp)
    ctx->pc = 0x79a9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1140), GPR_U32(ctx, 0));
    // 0x79a9ec: 0xafa00478  sw          $zero, 0x478($sp)
    ctx->pc = 0x79a9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1144), GPR_U32(ctx, 0));
    // 0x79a9f0: 0xafa0047c  sw          $zero, 0x47C($sp)
    ctx->pc = 0x79a9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1148), GPR_U32(ctx, 0));
    // 0x79a9f4: 0xafa00570  sw          $zero, 0x570($sp)
    ctx->pc = 0x79a9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1392), GPR_U32(ctx, 0));
    // 0x79a9f8: 0xafa00574  sw          $zero, 0x574($sp)
    ctx->pc = 0x79a9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1396), GPR_U32(ctx, 0));
    // 0x79a9fc: 0xafa00578  sw          $zero, 0x578($sp)
    ctx->pc = 0x79a9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1400), GPR_U32(ctx, 0));
    // 0x79aa00: 0xafa0057c  sw          $zero, 0x57C($sp)
    ctx->pc = 0x79aa00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1404), GPR_U32(ctx, 0));
    // 0x79aa04: 0x0  nop
    ctx->pc = 0x79aa04u;
    // NOP
label_79aa08:
    // 0x79aa08: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x79aa08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x79aa0c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x79aa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x79aa10: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x79aa10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x79aa14: 0x0  nop
    ctx->pc = 0x79aa14u;
    // NOP
    // 0x79aa18: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x79AA18u;
    {
        const bool branch_taken_0x79aa18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA18u;
        // 0x79aa1c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa18) {
            ctx->pc = 0x79AA08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79aa08;
        }
    }
    ctx->pc = 0x79AA20u;
    // 0x79aa20: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x79aa20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x79aa24: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79aa24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x79aa28: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x79aa28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x79aa2c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x79aa2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa30: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x79aa30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79aa34: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x79aa34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79aa38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa3c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79aa3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79aa40: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x79aa40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x79aa44: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x79aa44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x79aa48: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x79aa48u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x79aa4c: 0xc071a62  jal         func_1C6988
    ctx->pc = 0x79AA4Cu;
    SET_GPR_U32(ctx, 31, 0x79AA54u);
    ctx->pc = 0x79AA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA4Cu;
    // 0x79aa50: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6988u, 0x79AA4Cu, 0x79AA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA54u;
label_79aa54:
    // 0x79aa54: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x79aa54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79aa58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa5c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79aa5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79aa60: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x79aa60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x79aa64: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x79aa64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa68: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x79aa68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x79aa6c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x79aa6cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x79aa70: 0xc071a62  jal         func_1C6988
    ctx->pc = 0x79AA70u;
    SET_GPR_U32(ctx, 31, 0x79AA78u);
    ctx->pc = 0x79AA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA70u;
    // 0x79aa74: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6988u, 0x79AA70u, 0x79AA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA78u;
label_79aa78:
    // 0x79aa78: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x79aa78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa7c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x79aa7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79aa80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa84: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79aa84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79aa88: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x79aa88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x79aa8c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x79aa8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x79aa90: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x79aa90u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x79aa94: 0xc071a62  jal         func_1C6988
    ctx->pc = 0x79AA94u;
    SET_GPR_U32(ctx, 31, 0x79AA9Cu);
    ctx->pc = 0x79AA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA94u;
    // 0x79aa98: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6988u, 0x79AA94u, 0x79AA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA9Cu;
label_79aa9c:
    // 0x79aa9c: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x79aa9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aaa0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x79aaa0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x79aaa4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x79aaa4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x79aaa8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79aaa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79aaac: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x79aaacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x79aab0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79aab0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aab4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x79aab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aab8: 0xc071a62  jal         func_1C6988
    ctx->pc = 0x79AAB8u;
    SET_GPR_U32(ctx, 31, 0x79AAC0u);
    ctx->pc = 0x79AABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AAB8u;
    // 0x79aabc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6988u, 0x79AAB8u, 0x79AAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AAC0u;
label_79aac0:
    // 0x79aac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79aac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aac4: 0xc071f28  jal         func_1C7CA0
    ctx->pc = 0x79AAC4u;
    SET_GPR_U32(ctx, 31, 0x79AACCu);
    ctx->pc = 0x79AAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AAC4u;
    // 0x79aac8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7CA0u, 0x79AAC4u, 0x79AACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AACCu;
label_79aacc:
    // 0x79aacc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79aaccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aad0: 0xc071f28  jal         func_1C7CA0
    ctx->pc = 0x79AAD0u;
    SET_GPR_U32(ctx, 31, 0x79AAD8u);
    ctx->pc = 0x79AAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AAD0u;
    // 0x79aad4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7CA0u, 0x79AAD0u, 0x79AAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AAD8u;
label_79aad8:
    // 0x79aad8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79aad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aadc: 0xc071f28  jal         func_1C7CA0
    ctx->pc = 0x79AADCu;
    SET_GPR_U32(ctx, 31, 0x79AAE4u);
    ctx->pc = 0x79AAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AADCu;
    // 0x79aae0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7CA0u, 0x79AADCu, 0x79AAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AAE4u;
label_79aae4:
    // 0x79aae4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x79aae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aae8: 0xc071f28  jal         func_1C7CA0
    ctx->pc = 0x79AAE8u;
    SET_GPR_U32(ctx, 31, 0x79AAF0u);
    ctx->pc = 0x79AAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AAE8u;
    // 0x79aaec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7CA0u, 0x79AAE8u, 0x79AAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AAF0u;
label_79aaf0:
    // 0x79aaf0: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x79aaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x79aaf4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79aaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79aaf8: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x79aaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x79aafc: 0xc04cccc  jal         func_133330
    ctx->pc = 0x79AAFCu;
    SET_GPR_U32(ctx, 31, 0x79AB04u);
    ctx->pc = 0x79AB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AAFCu;
    // 0x79ab00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x79AAFCu, 0x79AB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB04u;
label_79ab04:
    // 0x79ab04: 0x7bb00630  lq          $s0, 0x630($sp)
    ctx->pc = 0x79ab04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1584)));
    // 0x79ab08: 0x7bb10620  lq          $s1, 0x620($sp)
    ctx->pc = 0x79ab08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1568)));
    // 0x79ab0c: 0x7bb20610  lq          $s2, 0x610($sp)
    ctx->pc = 0x79ab0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1552)));
    // 0x79ab10: 0x7bb30600  lq          $s3, 0x600($sp)
    ctx->pc = 0x79ab10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1536)));
    // 0x79ab14: 0x7bb405f0  lq          $s4, 0x5F0($sp)
    ctx->pc = 0x79ab14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1520)));
    // 0x79ab18: 0x7bb505e0  lq          $s5, 0x5E0($sp)
    ctx->pc = 0x79ab18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1504)));
    // 0x79ab1c: 0x7bb605d0  lq          $s6, 0x5D0($sp)
    ctx->pc = 0x79ab1cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1488)));
    // 0x79ab20: 0x7bb705c0  lq          $s7, 0x5C0($sp)
    ctx->pc = 0x79ab20u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1472)));
    // 0x79ab24: 0x7bbe05b0  lq          $fp, 0x5B0($sp)
    ctx->pc = 0x79ab24u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1456)));
    // 0x79ab28: 0xdfbf05a0  ld          $ra, 0x5A0($sp)
    ctx->pc = 0x79ab28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1440)));
    // 0x79ab2c: 0xc7b50648  lwc1        $f21, 0x648($sp)
    ctx->pc = 0x79ab2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x79ab30: 0xc7b40640  lwc1        $f20, 0x640($sp)
    ctx->pc = 0x79ab30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79ab34: 0x3e00008  jr          $ra
    ctx->pc = 0x79AB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB34u;
        // 0x79ab38: 0x27bd0650  addiu       $sp, $sp, 0x650 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1616));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AB34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AB3Cu;
    // 0x79ab3c: 0x0  nop
    ctx->pc = 0x79ab3cu;
    // NOP
    ctx->pc = 0x79ab40u;
}
} // namespace gh_r802
