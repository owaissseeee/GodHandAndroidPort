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

// Function: func_003563B8
// Address: 0x3563b8 - 0x3565d0
void func_003563B8_0x3563b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003563B8_0x3563b8");
#endif

    switch (ctx->pc) {
        case 0x3564a8u: goto label_3564a8;
        case 0x3564c0u: goto label_3564c0;
        case 0x3564d8u: goto label_3564d8;
        case 0x3564f0u: goto label_3564f0;
        case 0x356508u: goto label_356508;
        case 0x356520u: goto label_356520;
        case 0x356530u: goto label_356530;
        case 0x356550u: goto label_356550;
        case 0x356558u: goto label_356558;
        case 0x356560u: goto label_356560;
        default: break;
    }

    ctx->pc = 0x3563b8u;

    // 0x3563b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3563b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3563bc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3563bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3563c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3563c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3563c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3563c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3563c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3563c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3563cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3563ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3563d0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x3563d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x3563d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3563d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3563d8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3563d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3563dc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3563dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3563e0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3563e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3563e4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x3563e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x3563e8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x3563e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x3563ec: 0x8c43e2f4  lw          $v1, -0x1D0C($v0)
    ctx->pc = 0x3563ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EE2F4u));
    // 0x3563f0: 0x8e451fc0  lw          $a1, 0x1FC0($s2)
    ctx->pc = 0x3563f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8128)));
    // 0x3563f4: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x3563f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3563f8: 0x24b11128  addiu       $s1, $a1, 0x1128
    ctx->pc = 0x3563f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4392));
    // 0x3563fc: 0x24b31150  addiu       $s3, $a1, 0x1150
    ctx->pc = 0x3563fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 4432));
    // 0x356400: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x356400u;
    {
        const bool branch_taken_0x356400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x356404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356400u;
        // 0x356404: 0x24be11f8  addiu       $fp, $a1, 0x11F8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 4600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356400) {
            ctx->pc = 0x356410u;
            goto label_356410;
        }
    }
    ctx->pc = 0x356408u;
    // 0x356408: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x356408u;
    {
        const bool branch_taken_0x356408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35640Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356408u;
        // 0x35640c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356408) {
            ctx->pc = 0x35659Cu;
            goto label_35659c;
        }
    }
    ctx->pc = 0x356410u;
label_356410:
    // 0x356410: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x356410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x356414: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x356414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x356418: 0x8ca70028  lw          $a3, 0x28($a1)
    ctx->pc = 0x356418u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x35641c: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x35641cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x356420: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x356420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x356424: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x356424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x356428: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x356428u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x35642c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35642cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x356430: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x356430u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x356434: 0x14e0000a  bnez        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x356434u;
    {
        const bool branch_taken_0x356434 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x356438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356434u;
        // 0x356438: 0x24542800  addiu       $s4, $v0, 0x2800 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 10240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356434) {
            ctx->pc = 0x356460u;
            goto label_356460;
        }
    }
    ctx->pc = 0x35643Cu;
    // 0x35643c: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x35643cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x356440: 0x2404ffc0  addiu       $a0, $zero, -0x40
    ctx->pc = 0x356440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x356444: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x356444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x356448: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x356448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x35644c: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x35644cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x356450: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x356450u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x356454: 0x2463003f  addiu       $v1, $v1, 0x3F
    ctx->pc = 0x356454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x356458: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x356458u;
    {
        const bool branch_taken_0x356458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356458u;
        // 0x35645c: 0x641024  and         $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356458) {
            ctx->pc = 0x35647Cu;
            goto label_35647c;
        }
    }
    ctx->pc = 0x356460u;
label_356460:
    // 0x356460: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x356460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x356464: 0x2404ffc0  addiu       $a0, $zero, -0x40
    ctx->pc = 0x356464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x356468: 0x24e3003f  addiu       $v1, $a3, 0x3F
    ctx->pc = 0x356468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 63));
    // 0x35646c: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x35646cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x356470: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x356470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x356474: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x356474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x356478: 0xaca30028  sw          $v1, 0x28($a1)
    ctx->pc = 0x356478u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 3));
label_35647c:
    // 0x35647c: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x35647cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x356480: 0x8cb6002c  lw          $s6, 0x2C($a1)
    ctx->pc = 0x356480u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x356484: 0x2404ffc0  addiu       $a0, $zero, -0x40
    ctx->pc = 0x356484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x356488: 0x8cb00028  lw          $s0, 0x28($a1)
    ctx->pc = 0x356488u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x35648c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x35648cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x356490: 0x3442003f  ori         $v0, $v0, 0x3F
    ctx->pc = 0x356490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63);
    // 0x356494: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x356494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x356498: 0x44a824  and         $s5, $v0, $a0
    ctx->pc = 0x356498u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x35649c: 0x26a3104f  addiu       $v1, $s5, 0x104F
    ctx->pc = 0x35649cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4175));
    // 0x3564a0: 0xc0d628e  jal         func_358A38
    ctx->pc = 0x3564A0u;
    SET_GPR_U32(ctx, 31, 0x3564A8u);
    ctx->pc = 0x3564A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3564A0u;
    // 0x3564a4: 0x64b824  and         $s7, $v1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358A38u, 0x3564A0u, 0x3564A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3564A8u;
label_3564a8:
    // 0x3564a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3564a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3564ac: 0x1043001e  beq         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x3564ACu;
    {
        const bool branch_taken_0x3564ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3564B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3564ACu;
        // 0x3564b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3564ac) {
            ctx->pc = 0x356528u;
            goto label_356528;
        }
    }
    ctx->pc = 0x3564B4u;
    // 0x3564b4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3564b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3564b8: 0xc0e6790  jal         func_399E40
    ctx->pc = 0x3564B8u;
    SET_GPR_U32(ctx, 31, 0x3564C0u);
    ctx->pc = 0x3564BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3564B8u;
    // 0x3564bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399E40u, 0x3564B8u, 0x3564C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3564C0u;
label_3564c0:
    // 0x3564c0: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x3564c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x3564c4: 0x24c665e0  addiu       $a2, $a2, 0x65E0
    ctx->pc = 0x3564c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26080));
    // 0x3564c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3564c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3564cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3564ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3564d0: 0xc0e6ab6  jal         func_39AAD8
    ctx->pc = 0x3564D0u;
    SET_GPR_U32(ctx, 31, 0x3564D8u);
    ctx->pc = 0x3564D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3564D0u;
    // 0x3564d4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AAD8u, 0x3564D0u, 0x3564D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3564D8u;
label_3564d8:
    // 0x3564d8: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x3564d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x3564dc: 0x24c666e8  addiu       $a2, $a2, 0x66E8
    ctx->pc = 0x3564dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26344));
    // 0x3564e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3564e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3564e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3564e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3564e8: 0xc0e6ab6  jal         func_39AAD8
    ctx->pc = 0x3564E8u;
    SET_GPR_U32(ctx, 31, 0x3564F0u);
    ctx->pc = 0x3564ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3564E8u;
    // 0x3564ec: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AAD8u, 0x3564E8u, 0x3564F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3564F0u;
label_3564f0:
    // 0x3564f0: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x3564f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x3564f4: 0x24c66790  addiu       $a2, $a2, 0x6790
    ctx->pc = 0x3564f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26512));
    // 0x3564f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3564f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3564fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3564fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x356500: 0xc0e6ab6  jal         func_39AAD8
    ctx->pc = 0x356500u;
    SET_GPR_U32(ctx, 31, 0x356508u);
    ctx->pc = 0x356504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356500u;
    // 0x356504: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AAD8u, 0x356500u, 0x356508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356508u;
label_356508:
    // 0x356508: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x356508u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x35650c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x35650cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356510: 0x24c667b8  addiu       $a2, $a2, 0x67B8
    ctx->pc = 0x356510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26552));
    // 0x356514: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x356514u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356518: 0xc0e6ab6  jal         func_39AAD8
    ctx->pc = 0x356518u;
    SET_GPR_U32(ctx, 31, 0x356520u);
    ctx->pc = 0x35651Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356518u;
    // 0x35651c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AAD8u, 0x356518u, 0x356520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356520u;
label_356520:
    // 0x356520: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x356520u;
    {
        const bool branch_taken_0x356520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356520u;
        // 0x356524: 0x26300070  addiu       $s0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356520) {
            ctx->pc = 0x356534u;
            goto label_356534;
        }
    }
    ctx->pc = 0x356528u;
label_356528:
    // 0x356528: 0xc0d5a24  jal         func_356890
    ctx->pc = 0x356528u;
    SET_GPR_U32(ctx, 31, 0x356530u);
    ctx->pc = 0x35652Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356528u;
    // 0x35652c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356890u, 0x356528u, 0x356530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356530u;
label_356530:
    // 0x356530: 0x26300070  addiu       $s0, $s1, 0x70
    ctx->pc = 0x356530u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_356534:
    // 0x356534: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x356534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356538: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x356538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35653c: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x35653cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356540: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x356540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x356544: 0x24090200  addiu       $t1, $zero, 0x200
    ctx->pc = 0x356544u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x356548: 0xc0d5644  jal         func_355910
    ctx->pc = 0x356548u;
    SET_GPR_U32(ctx, 31, 0x356550u);
    ctx->pc = 0x35654Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356548u;
    // 0x35654c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355910u, 0x356548u, 0x356550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356550u;
label_356550:
    // 0x356550: 0xc0d5722  jal         func_355C88
    ctx->pc = 0x356550u;
    SET_GPR_U32(ctx, 31, 0x356558u);
    ctx->pc = 0x356554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356550u;
    // 0x356554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355C88u, 0x356550u, 0x356558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356558u;
label_356558:
    // 0x356558: 0xc0d57a2  jal         func_355E88
    ctx->pc = 0x356558u;
    SET_GPR_U32(ctx, 31, 0x356560u);
    ctx->pc = 0x35655Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356558u;
    // 0x35655c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355E88u, 0x356558u, 0x356560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356560u;
label_356560:
    // 0x356560: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x356560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356564: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x356564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x356568: 0xa2200010  sb          $zero, 0x10($s1)
    ctx->pc = 0x356568u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x35656c: 0xa2200011  sb          $zero, 0x11($s1)
    ctx->pc = 0x35656cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x356570: 0xa2200012  sb          $zero, 0x12($s1)
    ctx->pc = 0x356570u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x356574: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x356574u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x356578: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x356578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x35657c: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x35657cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x356580: 0xafc00004  sw          $zero, 0x4($fp)
    ctx->pc = 0x356580u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
    // 0x356584: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x356584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x356588: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x356588u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x35658c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x35658cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x356590: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x356590u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x356594: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x356594u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x356598: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x356598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_35659c:
    // 0x35659c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35659cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3565a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3565a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3565a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3565a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3565a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3565a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3565ac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3565acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3565b0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3565b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3565b4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3565b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3565b8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x3565b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3565bc: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x3565bcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3565c0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x3565c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3565c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3565C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3565C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3565C4u;
        // 0x3565c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3565C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3565CCu;
    // 0x3565cc: 0x0  nop
    ctx->pc = 0x3565ccu;
    // NOP
    ctx->pc = 0x3565d0u;
}
