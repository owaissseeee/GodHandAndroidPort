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

// Function: Gp_draw_poly3
// Address: 0x15b4d8 - 0x15b880
void Gp_draw_poly3_0x15b4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Gp_draw_poly3_0x15b4d8");
#endif

    switch (ctx->pc) {
        case 0x15b520u: goto label_15b520;
        case 0x15b5bcu: goto label_15b5bc;
        case 0x15b5c8u: goto label_15b5c8;
        case 0x15b5e0u: goto label_15b5e0;
        case 0x15b610u: goto label_15b610;
        case 0x15b624u: goto label_15b624;
        case 0x15b82cu: goto label_15b82c;
        case 0x15b84cu: goto label_15b84c;
        default: break;
    }

    ctx->pc = 0x15b4d8u;

    // 0x15b4d8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x15b4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x15b4dc: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x15b4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x15b4e0: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x15b4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x15b4e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15b4e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b4e8: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x15b4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x15b4ec: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x15b4ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b4f0: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x15b4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x15b4f4: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x15b4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x15b4f8: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x15b4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x15b4fc: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x15b4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x15b500: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x15b500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x15b504: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x15b504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x15b508: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x15b508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x15b50c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x15b50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x15b510: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x15b510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x15b514: 0xafa70074  sw          $a3, 0x74($sp)
    ctx->pc = 0x15b514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 7));
    // 0x15b518: 0xc056c20  jal         func_15B080
    ctx->pc = 0x15B518u;
    SET_GPR_U32(ctx, 31, 0x15B520u);
    ctx->pc = 0x15B51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B518u;
    // 0x15b51c: 0xafa80078  sw          $t0, 0x78($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B080u, 0x15B518u, 0x15B520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B520u;
label_15b520:
    // 0x15b520: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15b520u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b524: 0x124000ca  beqz        $s2, . + 4 + (0xCA << 2)
    ctx->pc = 0x15B524u;
    {
        const bool branch_taken_0x15b524 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B524u;
        // 0x15b528: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b524) {
            ctx->pc = 0x15B850u;
            goto label_15b850;
        }
    }
    ctx->pc = 0x15B52Cu;
    // 0x15b52c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x15b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x15b530: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x15b530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x15b534: 0x34630009  ori         $v1, $v1, 0x9
    ctx->pc = 0x15b534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9);
    // 0x15b538: 0x3c041100  lui         $a0, 0x1100
    ctx->pc = 0x15b538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4352 << 16));
    // 0x15b53c: 0x3405c000  ori         $a1, $zero, 0xC000
    ctx->pc = 0x15b53cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x15b540: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x15b540u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x15b544: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x15b544u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x15b548: 0x24060eee  addiu       $a2, $zero, 0xEEE
    ctx->pc = 0x15b548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3822));
    // 0x15b54c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x15b54cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x15b550: 0x2408003f  addiu       $t0, $zero, 0x3F
    ctx->pc = 0x15b550u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x15b554: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x15b554u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15b558: 0x94e38  dsll        $t1, $t1, 24
    ctx->pc = 0x15b558u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 24);
    // 0x15b55c: 0x35290044  ori         $t1, $t1, 0x44
    ctx->pc = 0x15b55cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)68);
    // 0x15b560: 0x240a0042  addiu       $t2, $zero, 0x42
    ctx->pc = 0x15b560u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x15b564: 0x3c0b0005  lui         $t3, 0x5
    ctx->pc = 0x15b564u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)5 << 16));
    // 0x15b568: 0x240c0047  addiu       $t4, $zero, 0x47
    ctx->pc = 0x15b568u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x15b56c: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x15b56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x15b570: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x15b570u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
    // 0x15b574: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x15b574u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x15b578: 0xfe450010  sd          $a1, 0x10($s2)
    ctx->pc = 0x15b578u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 5));
    // 0x15b57c: 0xfe460018  sd          $a2, 0x18($s2)
    ctx->pc = 0x15b57cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 6));
    // 0x15b580: 0xfe470020  sd          $a3, 0x20($s2)
    ctx->pc = 0x15b580u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 32), GPR_U64(ctx, 7));
    // 0x15b584: 0xfe480028  sd          $t0, 0x28($s2)
    ctx->pc = 0x15b584u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 40), GPR_U64(ctx, 8));
    // 0x15b588: 0xfe490030  sd          $t1, 0x30($s2)
    ctx->pc = 0x15b588u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 48), GPR_U64(ctx, 9));
    // 0x15b58c: 0xfe4a0038  sd          $t2, 0x38($s2)
    ctx->pc = 0x15b58cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 56), GPR_U64(ctx, 10));
    // 0x15b590: 0xfe4b0040  sd          $t3, 0x40($s2)
    ctx->pc = 0x15b590u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 64), GPR_U64(ctx, 11));
    // 0x15b594: 0xfe4c0048  sd          $t4, 0x48($s2)
    ctx->pc = 0x15b594u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 72), GPR_U64(ctx, 12));
    // 0x15b598: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x15b598u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x15b59c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x15b59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15b5a0: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x15B5A0u;
    {
        const bool branch_taken_0x15b5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B5A0u;
        // 0x15b5a4: 0x26110020  addiu       $s1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b5a0) {
            ctx->pc = 0x15B5F4u;
            goto label_15b5f4;
        }
    }
    ctx->pc = 0x15B5A8u;
    // 0x15b5a8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15b5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15b5ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15b5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b5b0: 0x8c45aff0  lw          $a1, -0x5010($v0)
    ctx->pc = 0x15b5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x15b5b4: 0xc0c2952  jal         func_30A548
    ctx->pc = 0x15B5B4u;
    SET_GPR_U32(ctx, 31, 0x15B5BCu);
    ctx->pc = 0x15B5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B5B4u;
    // 0x15b5b8: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A548u, 0x15B5B4u, 0x15B5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B5BCu;
label_15b5bc:
    // 0x15b5bc: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x15b5bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15b5c0: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x15b5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x15b5c4: 0x0  nop
    ctx->pc = 0x15b5c4u;
    // NOP
label_15b5c8:
    // 0x15b5c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15b5c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b5cc: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x15b5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x15b5d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x15b5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b5d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15b5d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b5d8: 0xc0c2ad2  jal         func_30AB48
    ctx->pc = 0x15B5D8u;
    SET_GPR_U32(ctx, 31, 0x15B5E0u);
    ctx->pc = 0x15B5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B5D8u;
    // 0x15b5dc: 0x2631fff0  addiu       $s1, $s1, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AB48u, 0x15B5D8u, 0x15B5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B5E0u;
label_15b5e0:
    // 0x15b5e0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x15b5e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x15b5e4: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x15B5E4u;
    {
        const bool branch_taken_0x15b5e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B5E4u;
        // 0x15b5e8: 0x102100  sll         $a0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b5e4) {
            ctx->pc = 0x15B5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b5c8;
        }
    }
    ctx->pc = 0x15B5ECu;
    // 0x15b5ec: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x15B5ECu;
    {
        const bool branch_taken_0x15b5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B5ECu;
        // 0x15b5f0: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b5ec) {
            ctx->pc = 0x15B66Cu;
            goto label_15b66c;
        }
    }
    ctx->pc = 0x15B5F4u;
label_15b5f4:
    // 0x15b5f4: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x15b5f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15b5f8: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x15b5f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15b5fc: 0x3c1e003c  lui         $fp, 0x3C
    ctx->pc = 0x15b5fcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)60 << 16));
    // 0x15b600: 0x3c170058  lui         $s7, 0x58
    ctx->pc = 0x15b600u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)88 << 16));
    // 0x15b604: 0x24160800  addiu       $s6, $zero, 0x800
    ctx->pc = 0x15b604u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x15b608: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x15b608u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15b60c: 0x0  nop
    ctx->pc = 0x15b60cu;
    // NOP
label_15b610:
    // 0x15b610: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x15b610u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x15b614: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15b614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b618: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x15b618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x15b61c: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x15B61Cu;
    SET_GPR_U32(ctx, 31, 0x15B624u);
    ctx->pc = 0x15B620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B61Cu;
    // 0x15b620: 0x2631fff0  addiu       $s1, $s1, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x15B61Cu, 0x15B624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B624u;
label_15b624:
    // 0x15b624: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x15b624u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x15b628: 0x8fc21180  lw          $v0, 0x1180($fp)
    ctx->pc = 0x15b628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4480)));
    // 0x15b62c: 0x8ee56b80  lw          $a1, 0x6B80($s7)
    ctx->pc = 0x15b62cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 27520)));
    // 0x15b630: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x15b630u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x15b634: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15b634u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15b638: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15b638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b63c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x15b63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15b640: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x15b640u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x15b644: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x15b644u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x15b648: 0x2c21023  subu        $v0, $s6, $v0
    ctx->pc = 0x15b648u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x15b64c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15b64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15b650: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15b650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15b654: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x15b654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x15b658: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x15b658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x15b65c: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x15b65cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x15b660: 0x1660ffeb  bnez        $s3, . + 4 + (-0x15 << 2)
    ctx->pc = 0x15B660u;
    {
        const bool branch_taken_0x15b660 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B660u;
        // 0x15b664: 0x2610fff0  addiu       $s0, $s0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b660) {
            ctx->pc = 0x15B610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b610;
        }
    }
    ctx->pc = 0x15B668u;
    // 0x15b668: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15b668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_15b66c:
    // 0x15b66c: 0x18400077  blez        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x15B66Cu;
    {
        const bool branch_taken_0x15b66c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x15B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B66Cu;
        // 0x15b670: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b66c) {
            ctx->pc = 0x15B84Cu;
            goto label_15b84c;
        }
    }
    ctx->pc = 0x15B674u;
    // 0x15b674: 0x18600075  blez        $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x15B674u;
    {
        const bool branch_taken_0x15b674 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x15B678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B674u;
        // 0x15b678: 0x8fa40060  lw          $a0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b674) {
            ctx->pc = 0x15B84Cu;
            goto label_15b84c;
        }
    }
    ctx->pc = 0x15B67Cu;
    // 0x15b67c: 0x18800073  blez        $a0, . + 4 + (0x73 << 2)
    ctx->pc = 0x15B67Cu;
    {
        const bool branch_taken_0x15b67c = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x15B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B67Cu;
        // 0x15b680: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b67c) {
            ctx->pc = 0x15B84Cu;
            goto label_15b84c;
        }
    }
    ctx->pc = 0x15B684u;
    // 0x15b684: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x15b684u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15b688: 0x14400071  bnez        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x15B688u;
    {
        const bool branch_taken_0x15b688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B688u;
        // 0x15b68c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b688) {
            ctx->pc = 0x15B850u;
            goto label_15b850;
        }
    }
    ctx->pc = 0x15B690u;
    // 0x15b690: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x15b690u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15b694: 0x1440006e  bnez        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x15B694u;
    {
        const bool branch_taken_0x15b694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B694u;
        // 0x15b698: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b694) {
            ctx->pc = 0x15B850u;
            goto label_15b850;
        }
    }
    ctx->pc = 0x15B69Cu;
    // 0x15b69c: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x15b69cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x15b6a0: 0x1440006b  bnez        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x15B6A0u;
    {
        const bool branch_taken_0x15b6a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6A0u;
        // 0x15b6a4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b6a0) {
            ctx->pc = 0x15B850u;
            goto label_15b850;
        }
    }
    ctx->pc = 0x15B6A8u;
    // 0x15b6a8: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x15b6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x15b6ac: 0x18400067  blez        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x15B6ACu;
    {
        const bool branch_taken_0x15b6ac = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x15B6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6ACu;
        // 0x15b6b0: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b6ac) {
            ctx->pc = 0x15B84Cu;
            goto label_15b84c;
        }
    }
    ctx->pc = 0x15B6B4u;
    // 0x15b6b4: 0x18600065  blez        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x15B6B4u;
    {
        const bool branch_taken_0x15b6b4 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x15B6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6B4u;
        // 0x15b6b8: 0x8fa40064  lw          $a0, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b6b4) {
            ctx->pc = 0x15B84Cu;
            goto label_15b84c;
        }
    }
    ctx->pc = 0x15B6BCu;
    // 0x15b6bc: 0x18800063  blez        $a0, . + 4 + (0x63 << 2)
    ctx->pc = 0x15B6BCu;
    {
        const bool branch_taken_0x15b6bc = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x15B6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6BCu;
        // 0x15b6c0: 0xa2102a  slt         $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b6bc) {
            ctx->pc = 0x15B84Cu;
            goto label_15b84c;
        }
    }
    ctx->pc = 0x15B6C4u;
    // 0x15b6c4: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x15B6C4u;
    {
        const bool branch_taken_0x15b6c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6C4u;
        // 0x15b6c8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b6c4) {
            ctx->pc = 0x15B850u;
            goto label_15b850;
        }
    }
    ctx->pc = 0x15B6CCu;
    // 0x15b6cc: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x15b6ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15b6d0: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x15B6D0u;
    {
        const bool branch_taken_0x15b6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6D0u;
        // 0x15b6d4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b6d0) {
            ctx->pc = 0x15B850u;
            goto label_15b850;
        }
    }
    ctx->pc = 0x15B6D8u;
    // 0x15b6d8: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x15b6d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x15b6dc: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x15B6DCu;
    {
        const bool branch_taken_0x15b6dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6DCu;
        // 0x15b6e0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b6dc) {
            ctx->pc = 0x15B850u;
            goto label_15b850;
        }
    }
    ctx->pc = 0x15B6E4u;
    // 0x15b6e4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15b6e8: 0x18400058  blez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x15B6E8u;
    {
        const bool branch_taken_0x15b6e8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x15B6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6E8u;
        // 0x15b6ec: 0x8fa20058  lw          $v0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b6e8) {
            ctx->pc = 0x15B84Cu;
            goto label_15b84c;
        }
    }
    ctx->pc = 0x15B6F0u;
    // 0x15b6f0: 0x18400056  blez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x15B6F0u;
    {
        const bool branch_taken_0x15b6f0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x15B6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6F0u;
        // 0x15b6f4: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b6f0) {
            ctx->pc = 0x15B84Cu;
            goto label_15b84c;
        }
    }
    ctx->pc = 0x15B6F8u;
    // 0x15b6f8: 0x18400054  blez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x15B6F8u;
    {
        const bool branch_taken_0x15b6f8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x15B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6F8u;
        // 0x15b6fc: 0x151202  srl         $v0, $s5, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b6f8) {
            ctx->pc = 0x15B84Cu;
            goto label_15b84c;
        }
    }
    ctx->pc = 0x15B700u;
    // 0x15b700: 0x152c02  srl         $a1, $s5, 16
    ctx->pc = 0x15b700u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 21), 16));
    // 0x15b704: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15b704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15b708: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x15b708u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15b70c: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x15b70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x15b710: 0x32a300ff  andi        $v1, $s5, 0xFF
    ctx->pc = 0x15b710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x15b714: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15b714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15b718: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15b718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b71c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15b71cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15b720: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x15b720u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x15b724: 0x152602  srl         $a0, $s5, 24
    ctx->pc = 0x15b724u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 21), 24));
    // 0x15b728: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x15b728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x15b72c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x15b72cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x15b730: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x15b730u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x15b734: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x15b734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x15b738: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15b738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15b73c: 0x2407000d  addiu       $a3, $zero, 0xD
    ctx->pc = 0x15b73cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x15b740: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x15b740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b744: 0x3404810e  ori         $a0, $zero, 0x810E
    ctx->pc = 0x15b744u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33038);
    // 0x15b748: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x15b748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x15b74c: 0x34848004  ori         $a0, $a0, 0x8004
    ctx->pc = 0x15b74cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32772);
    // 0x15b750: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15b750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15b754: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15b754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b758: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15b758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15b75c: 0xfe440050  sd          $a0, 0x50($s2)
    ctx->pc = 0x15b75cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 80), GPR_U64(ctx, 4));
    // 0x15b760: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x15b760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x15b764: 0xfe430060  sd          $v1, 0x60($s2)
    ctx->pc = 0x15b764u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 96), GPR_U64(ctx, 3));
    // 0x15b768: 0xfe420058  sd          $v0, 0x58($s2)
    ctx->pc = 0x15b768u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 88), GPR_U64(ctx, 2));
    // 0x15b76c: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x15b76cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15b770: 0xfe450068  sd          $a1, 0x68($s2)
    ctx->pc = 0x15b770u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 104), GPR_U64(ctx, 5));
    // 0x15b774: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x15b774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x15b778: 0x240903ff  addiu       $t1, $zero, 0x3FF
    ctx->pc = 0x15b778u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x15b77c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x15b77cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15b780: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x15b780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x15b784: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x15b784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15b788: 0x5193b  dsra        $v1, $a1, 4
    ctx->pc = 0x15b788u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 5) >> 4);
    // 0x15b78c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x15b78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x15b790: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x15b790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x15b794: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x15b794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x15b798: 0xfe470078  sd          $a3, 0x78($s2)
    ctx->pc = 0x15b798u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 120), GPR_U64(ctx, 7));
    // 0x15b79c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x15b79cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x15b7a0: 0x52a03  sra         $a1, $a1, 8
    ctx->pc = 0x15b7a0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 8));
    // 0x15b7a4: 0xfe440070  sd          $a0, 0x70($s2)
    ctx->pc = 0x15b7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 112), GPR_U64(ctx, 4));
    // 0x15b7a8: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x15b7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15b7ac: 0x30c60fff  andi        $a2, $a2, 0xFFF
    ctx->pc = 0x15b7acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x15b7b0: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x15b7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x15b7b4: 0x24c60032  addiu       $a2, $a2, 0x32
    ctx->pc = 0x15b7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 50));
    // 0x15b7b8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x15b7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15b7bc: 0x28c50400  slti        $a1, $a2, 0x400
    ctx->pc = 0x15b7bcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x15b7c0: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x15b7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15b7c4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x15b7c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x15b7c8: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x15b7c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x15b7cc: 0xfe480088  sd          $t0, 0x88($s2)
    ctx->pc = 0x15b7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 136), GPR_U64(ctx, 8));
    // 0x15b7d0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15b7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15b7d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15b7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15b7d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15b7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15b7dc: 0xfe430080  sd          $v1, 0x80($s2)
    ctx->pc = 0x15b7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 128), GPR_U64(ctx, 3));
    // 0x15b7e0: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x15b7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x15b7e4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x15b7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x15b7e8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x15b7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15b7ec: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x15b7ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x15b7f0: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x15b7f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x15b7f4: 0xfe480098  sd          $t0, 0x98($s2)
    ctx->pc = 0x15b7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 152), GPR_U64(ctx, 8));
    // 0x15b7f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15b7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15b7fc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15b7fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15b800: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15b800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15b804: 0xfe430090  sd          $v1, 0x90($s2)
    ctx->pc = 0x15b804u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 144), GPR_U64(ctx, 3));
    // 0x15b808: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x15b808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15b80c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15B80Cu;
    {
        const bool branch_taken_0x15b80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B80Cu;
        // 0x15b810: 0x125300a  movz        $a2, $t1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b80c) {
            ctx->pc = 0x15B834u;
            goto label_15b834;
        }
    }
    ctx->pc = 0x15B814u;
    // 0x15b814: 0x18c0000d  blez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x15B814u;
    {
        const bool branch_taken_0x15b814 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x15B818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B814u;
        // 0x15b818: 0x3c040075  lui         $a0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b814) {
            ctx->pc = 0x15B84Cu;
            goto label_15b84c;
        }
    }
    ctx->pc = 0x15B81Cu;
    // 0x15b81c: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x15b81cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x15b820: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x15b820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x15b824: 0xc0c6980  jal         func_31A600
    ctx->pc = 0x15B824u;
    SET_GPR_U32(ctx, 31, 0x15B82Cu);
    ctx->pc = 0x15B828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B824u;
    // 0x15b828: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A600u, 0x15B824u, 0x15B82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B82Cu;
label_15b82c:
    // 0x15b82c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15B82Cu;
    {
        const bool branch_taken_0x15b82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B82Cu;
        // 0x15b830: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b82c) {
            ctx->pc = 0x15B850u;
            goto label_15b850;
        }
    }
    ctx->pc = 0x15B834u;
label_15b834:
    // 0x15b834: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x15b834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x15b838: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x15b838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x15b83c: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x15b83cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x15b840: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x15b840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x15b844: 0xc0c6980  jal         func_31A600
    ctx->pc = 0x15B844u;
    SET_GPR_U32(ctx, 31, 0x15B84Cu);
    ctx->pc = 0x15B848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B844u;
    // 0x15b848: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A600u, 0x15B844u, 0x15B84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B84Cu;
label_15b84c:
    // 0x15b84c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x15b84cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15b850:
    // 0x15b850: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x15b850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x15b854: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x15b854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x15b858: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x15b858u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x15b85c: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x15b85cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x15b860: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x15b860u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x15b864: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x15b864u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15b868: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x15b868u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15b86c: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x15b86cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15b870: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x15b870u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15b874: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x15b874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15b878: 0x3e00008  jr          $ra
    ctx->pc = 0x15B878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B878u;
        // 0x15b87c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B880u;
}
